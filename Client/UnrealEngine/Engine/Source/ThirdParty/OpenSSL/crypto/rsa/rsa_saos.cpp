// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// RSA_sign_ASN1_OCTET_STRING @ 14f7a6950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool RSA_sign_ASN1_OCTET_STRING
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               int *param_5,undefined8 param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong local_res10;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f7a695f;
  local_34 = 4;
  local_38 = param_3;
  local_30 = param_2;
  iVar2 = i2d_ASN1_OCTET_STRING(&local_38,0);
  iVar3 = RSA_size(param_6);
  if (iVar2 <= iVar3 + -0xb) {
    lVar4 = CRYPTO_malloc(iVar3 + 1,"crypto\\rsa\\rsa_saos.c",0x25);
    if (lVar4 == 0) {
      ERR_put_error(4,0x76,0x41,"crypto\\rsa\\rsa_saos.c",0x27);
      bVar1 = false;
    }
    else {
      local_res10 = lVar4;
      i2d_ASN1_OCTET_STRING(&local_38,&local_res10);
      iVar2 = RSA_private_encrypt(iVar2,lVar4,param_4,param_6,1);
      bVar1 = 0 < iVar2;
      if (bVar1) {
        *param_5 = iVar2;
      }
      CRYPTO_clear_free(lVar4,iVar3 + 1,"crypto\\rsa\\rsa_saos.c",0x32);
    }
    return bVar1;
  }
  ERR_put_error(4,0x76,0x70,"crypto\\rsa\\rsa_saos.c",0x22);
  return false;
}

// RSA_verify_ASN1_OCTET_STRING @ 14f7a6a90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint * RSA_verify_ASN1_OCTET_STRING
                 (undefined8 param_1,void *param_2,uint param_3,undefined8 param_4,int param_5,
                 undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong local_28 [2];
  
  local_28[1] = 0x14f7a6aa9;
  puVar4 = (uint *)0x0;
  iVar1 = RSA_size(param_6);
  if (param_5 != iVar1) {
    ERR_put_error(4,0x78,0x77,"crypto\\rsa\\rsa_saos.c",0x42);
    return (uint *)0x0;
  }
  lVar2 = CRYPTO_malloc(param_5,"crypto\\rsa\\rsa_saos.c",0x46);
  puVar3 = puVar4;
  if (lVar2 == 0) {
    uVar6 = 0x48;
    uVar5 = 0x41;
  }
  else {
    iVar1 = RSA_public_decrypt(param_5,param_4,lVar2,param_6,1);
    if (iVar1 < 1) goto LAB_14f7a6bbb;
    local_28[0] = lVar2;
    puVar3 = (uint *)d2i_ASN1_OCTET_STRING(0,local_28,iVar1);
    if (puVar3 == (uint *)0x0) goto LAB_14f7a6bbb;
    if (*puVar3 == param_3) {
      iVar1 = memcmp(param_2,*(void **)(puVar3 + 2),(ulonglong)param_3);
      if (iVar1 == 0) {
        puVar4 = (uint *)&DAT_00000001;
        goto LAB_14f7a6bbb;
      }
    }
    uVar6 = 0x57;
    uVar5 = 0x68;
  }
  ERR_put_error(4,0x78,uVar5,"crypto\\rsa\\rsa_saos.c",uVar6);
LAB_14f7a6bbb:
  ASN1_OCTET_STRING_free(puVar3);
  CRYPTO_clear_free(lVar2,param_5,"crypto\\rsa\\rsa_saos.c",0x5d);
  return puVar4;
}

