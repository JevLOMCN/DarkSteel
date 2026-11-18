// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// FUN_14f757910 @ 14f757910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f757910(longlong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)CRYPTO_malloc(0x20,"crypto\\dsa\\dsa_pmeth.c",0x22);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = 0x800;
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 6) = 0;
  puVar1[1] = 0xe0;
  *(undefined4 **)(param_1 + 0x28) = puVar1;
  *(undefined4 **)(param_1 + 0x40) = puVar1 + 4;
  *(undefined4 *)(param_1 + 0x48) = 2;
  return 1;
}

// FUN_14f757980 @ 14f757980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f757980(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)CRYPTO_malloc(0x20,"crypto\\dsa\\dsa_pmeth.c",0x22);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x800;
    puVar2[1] = 0xe0;
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    *(undefined4 **)(param_1 + 0x28) = puVar2;
    *(undefined4 **)(param_1 + 0x40) = puVar2 + 4;
    *(undefined4 *)(param_1 + 0x48) = 2;
    puVar1 = *(undefined4 **)(param_2 + 0x28);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar1 + 2);
    *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(puVar1 + 6);
    return 1;
  }
  return 0;
}

// FUN_14f757a20 @ 14f757a20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f757a20(longlong param_1)

{
  CRYPTO_free(*(undefined8 *)(param_1 + 0x28),"crypto\\dsa\\dsa_pmeth.c",0x44);
  return;
}

// FUN_14f757a50 @ 14f757a50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f757a50(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4,
             longlong param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint local_res8 [2];
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if ((*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) != 0) &&
     (iVar1 = EVP_MD_size(), param_5 != iVar1)) {
    return 0;
  }
  uVar2 = DSA_sign(0,param_4,(undefined4)param_5,param_2,local_res8,uVar2);
  if (0 < (int)uVar2) {
    *param_3 = (ulonglong)local_res8[0];
    uVar2 = 1;
  }
  return uVar2;
}

// FUN_14f757af0 @ 14f757af0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f757af0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             longlong param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if ((*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) != 0) &&
     (iVar1 = EVP_MD_size(), param_5 != iVar1)) {
    return 0;
  }
  uVar2 = DSA_verify(0,param_4,(undefined4)param_5,param_2,param_3,uVar2);
  return uVar2;
}

// FUN_14f757b80 @ 14f757b80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f757b80(longlong param_1,int param_2,int param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f757b90;
  piVar1 = *(int **)(param_1 + 0x28);
  if (param_2 < 0x1002) {
    if (param_2 == 0x1001) {
      if (0xff < param_3) {
        *piVar1 = param_3;
        return 1;
      }
    }
    else {
      switch(param_2) {
      case 1:
        iVar2 = EVP_MD_type(param_4);
        if ((((iVar2 == 0x40) || (iVar2 = EVP_MD_type(param_4), iVar2 == 0x74)) ||
            (((iVar2 = EVP_MD_type(param_4), iVar2 == 0x42 ||
              (((iVar2 = EVP_MD_type(param_4), iVar2 == 0x2a3 ||
                (iVar2 = EVP_MD_type(param_4), iVar2 == 0x2a0)) ||
               (iVar2 = EVP_MD_type(param_4), iVar2 == 0x2a1)))) ||
             ((iVar2 = EVP_MD_type(param_4), iVar2 == 0x2a2 ||
              (iVar2 = EVP_MD_type(param_4), iVar2 == 0x448)))))) ||
           ((iVar2 = EVP_MD_type(param_4), iVar2 == 0x449 ||
            ((iVar2 = EVP_MD_type(param_4), iVar2 == 0x44a ||
             (iVar2 = EVP_MD_type(param_4), iVar2 == 1099)))))) {
          *(undefined8 **)(piVar1 + 6) = param_4;
          return 1;
        }
        uVar3 = 0x92;
LAB_14f757d3c:
        ERR_put_error(10,0x78,0x6a,"crypto\\dsa\\dsa_pmeth.c",uVar3,uVar4);
        return 0;
      case 2:
        ERR_put_error(10,0x78,0x96,"crypto\\dsa\\dsa_pmeth.c",0xa3,0x14f757b90);
        break;
      case 5:
      case 7:
      case 0xb:
        return 1;
      case 0xd:
        *param_4 = *(undefined8 *)(piVar1 + 6);
        return 1;
      }
    }
  }
  else if (param_2 == 0x1002) {
    if ((((param_3 == 0xa0) || (param_3 == 0xe0)) || (param_3 == 0)) || (param_3 == 0x100)) {
      piVar1[1] = param_3;
      return 1;
    }
  }
  else if (param_2 == 0x1003) {
    iVar2 = EVP_MD_type(param_4);
    if (((iVar2 == 0x40) || (iVar2 = EVP_MD_type(param_4), iVar2 == 0x2a3)) ||
       (iVar2 = EVP_MD_type(param_4), iVar2 == 0x2a0)) {
      *(undefined8 **)(piVar1 + 2) = param_4;
      return 1;
    }
    uVar3 = 0x80;
    goto LAB_14f757d3c;
  }
  return 0xfffffffe;
}

// FUN_14f757df0 @ 14f757df0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f757df0(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f757e05;
  iVar1 = strcmp(param_2,"dsa_paramgen_bits");
  if (iVar1 == 0) {
    iVar1 = atoi(param_3);
    uVar3 = EVP_PKEY_CTX_ctrl(param_1,0x74,2,0x1001,iVar1,0);
    return uVar3;
  }
  iVar1 = strcmp(param_2,"dsa_paramgen_q_bits");
  if (iVar1 == 0) {
    iVar1 = atoi(param_3);
    uVar3 = EVP_PKEY_CTX_ctrl(param_1,0x74,2,0x1002,iVar1,0);
    return uVar3;
  }
  iVar1 = strcmp(param_2,"dsa_paramgen_md");
  if (iVar1 != 0) {
    return 0xfffffffe;
  }
  lVar2 = EVP_get_digestbyname(param_3);
  if (lVar2 == 0) {
    ERR_put_error(10,0x68,0x6a,"crypto\\dsa\\dsa_pmeth.c",0xbb,uVar3);
    return 0;
  }
  uVar3 = EVP_PKEY_CTX_ctrl(param_1,0x74,2,0x1003,0,lVar2);
  return uVar3;
}

// FUN_14f757f50 @ 14f757f50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f757f50(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  piVar1 = *(int **)(param_1 + 0x28);
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar3 = BN_GENCB_new();
    if (lVar3 == 0) {
      return 0;
    }
    evp_pkey_set_cb_translate(lVar3,param_1);
  }
  lVar4 = DSA_new();
  if (lVar4 == 0) {
    BN_GENCB_free(lVar3);
    return 0;
  }
  iVar2 = dsa_builtin_paramgen
                    (lVar4,(longlong)*piVar1,(longlong)piVar1[1],*(undefined8 *)(piVar1 + 2),0,0,0,0
                     ,0,lVar3);
  BN_GENCB_free(lVar3);
  if (iVar2 == 0) {
    DSA_free(lVar4);
    return 0;
  }
  EVP_PKEY_assign(param_2,0x74,lVar4);
  return iVar2;
}

// FUN_14f758040 @ 14f758040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f758040(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    ERR_put_error(10,0x79,0x6b,"crypto\\dsa\\dsa_pmeth.c",0xe5,0x14f758050);
  }
  else {
    lVar2 = DSA_new();
    if (lVar2 != 0) {
      EVP_PKEY_assign(param_2,0x74,lVar2);
      iVar1 = EVP_PKEY_copy_parameters(param_2,*(undefined8 *)(param_1 + 0x10));
      if (iVar1 != 0) {
        uVar3 = DSA_generate_key(*(undefined8 *)(param_2 + 0x28));
        return uVar3;
      }
    }
  }
  return 0;
}

