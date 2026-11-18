// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// ASN1_item_verify @ 14f7192f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ASN1_item_verify(undefined8 param_1,undefined8 *param_2,int *param_3,undefined8 param_4,
                    longlong param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 in_stack_ffffffffffffffb8;
  int *piVar10;
  longlong lVar11;
  undefined4 local_38 [2];
  longlong local_30;
  
  lVar11 = param_5;
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar9 = 0;
  iVar4 = -1;
  local_30 = 0;
  if (param_5 == 0) {
    ERR_put_error(0xd,0xc5,0x43,"crypto\\asn1\\a_verify.c",CONCAT44(uVar2,0x62));
    return -1;
  }
  if ((param_3[1] == 3) && ((*(byte *)(param_3 + 4) & 7) != 0)) {
    ERR_put_error(0xd,0xc5,0xdc,"crypto\\asn1\\a_verify.c",CONCAT44(uVar2,0x67));
    return -1;
  }
  lVar5 = EVP_MD_CTX_new();
  if (lVar5 == 0) {
    ERR_put_error(0xd,0xc5,0x41,"crypto\\asn1\\a_verify.c",CONCAT44(uVar2,0x6d));
    iVar4 = -1;
    goto LAB_14f71959e;
  }
  uVar2 = OBJ_obj2nid(*param_2);
  iVar3 = OBJ_find_sigid_algs(uVar2,&param_5,local_38);
  if (iVar3 == 0) {
    uVar6 = 0x73;
LAB_14f7193f2:
    uVar8 = 199;
    iVar4 = -1;
  }
  else if ((int)param_5 == 0) {
    if ((*(longlong *)(lVar11 + 0x10) == 0) ||
       (pcVar1 = *(code **)(*(longlong *)(lVar11 + 0x10) + 200), pcVar1 == (code *)0x0)) {
      uVar6 = 0x79;
      goto LAB_14f7193f2;
    }
    piVar10 = param_3;
    iVar4 = (*pcVar1)(lVar5,param_1,param_4,param_2,param_3,lVar11);
    uVar2 = (undefined4)((ulonglong)piVar10 >> 0x20);
    if (iVar4 != 2) goto LAB_14f71959e;
LAB_14f71945b:
    iVar4 = ASN1_item_i2d(param_4,&local_30,param_1);
    if (iVar4 < 1) {
      ERR_put_error(0xd,0xc5,0x44,"crypto\\asn1\\a_verify.c",CONCAT44(uVar2,0x9e));
      iVar4 = -1;
      goto LAB_14f71959e;
    }
    if (local_30 == 0) {
      ERR_put_error(0xd,0xc5,0x41,"crypto\\asn1\\a_verify.c",CONCAT44(uVar2,0xa2));
      iVar4 = -1;
      lVar9 = 0;
      goto LAB_14f71959e;
    }
    lVar9 = (longlong)iVar4;
    iVar4 = EVP_DigestVerify(lVar5,*(undefined8 *)(param_3 + 2),(longlong)*param_3,local_30,lVar9);
    if (0 < iVar4) {
      iVar4 = 1;
      goto LAB_14f71959e;
    }
    uVar6 = 0xaa;
    uVar8 = 6;
  }
  else {
    uVar6 = OBJ_nid2sn();
    lVar7 = EVP_get_digestbyname(uVar6);
    if (lVar7 == 0) {
      uVar6 = 0x8a;
      uVar8 = 0xa1;
    }
    else {
      iVar3 = EVP_PKEY_type(local_38[0]);
      if (iVar3 == **(int **)(lVar11 + 0x10)) {
        iVar4 = EVP_DigestVerifyInit(lVar5,0,lVar7,0,lVar11);
        uVar2 = (undefined4)((ulonglong)lVar11 >> 0x20);
        if (iVar4 == 0) {
          ERR_put_error(0xd,0xc5,6,"crypto\\asn1\\a_verify.c",CONCAT44(uVar2,0x95));
          iVar4 = 0;
          lVar9 = 0;
          goto LAB_14f71959e;
        }
        goto LAB_14f71945b;
      }
      uVar6 = 0x90;
      uVar8 = 200;
    }
  }
  ERR_put_error(0xd,0xc5,uVar8,"crypto\\asn1\\a_verify.c",uVar6);
LAB_14f71959e:
  CRYPTO_clear_free(local_30,lVar9,"crypto\\asn1\\a_verify.c",0xaf);
  EVP_MD_CTX_free(lVar5);
  return iVar4;
}

// ASN1_verify @ 14f7195f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
ASN1_verify(code *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
           undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined4 uVar8;
  longlong local_38;
  longlong local_30;
  
  local_30 = 0x14f719607;
  lVar4 = EVP_MD_CTX_new();
  uVar8 = 0xffffffff;
  if (lVar4 == 0) {
    ERR_put_error(0xd,0x89,0x41,"crypto\\asn1\\a_verify.c",0x23);
  }
  else {
    uVar1 = OBJ_obj2nid(*param_2);
    uVar5 = OBJ_nid2sn(uVar1);
    local_30 = EVP_get_digestbyname(uVar5);
    if (local_30 == 0) {
      ERR_put_error(0xd,0x89,0xa1,"crypto\\asn1\\a_verify.c",0x29);
      uVar8 = 0xffffffff;
    }
    else if ((param_3[1] == 3) && ((*(byte *)(param_3 + 4) & 7) != 0)) {
      ERR_put_error(0xd,0x89,0xdc,"crypto\\asn1\\a_verify.c",0x2e);
      uVar8 = 0xffffffff;
    }
    else {
      iVar2 = (*param_1)(param_4,0);
      if (iVar2 < 1) {
        ERR_put_error(0xd,0x89,0x44,"crypto\\asn1\\a_verify.c",0x34);
      }
      else {
        lVar6 = CRYPTO_malloc(iVar2,"crypto\\asn1\\a_verify.c",0x37);
        if (lVar6 == 0) {
          ERR_put_error(0xd,0x89,0x41,"crypto\\asn1\\a_verify.c",0x39);
        }
        else {
          local_38 = lVar6;
          (*param_1)(param_4,&local_38);
          iVar3 = EVP_DigestInit_ex(lVar4,local_30,0);
          if ((iVar3 == 0) || (iVar3 = EVP_DigestUpdate(lVar4,lVar6,(longlong)iVar2), iVar3 == 0)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          CRYPTO_clear_free(lVar6,iVar2,"crypto\\asn1\\a_verify.c",0x42);
          if (bVar7) {
            iVar2 = EVP_VerifyFinal(lVar4,*(undefined8 *)(param_3 + 2),*param_3,param_5);
            if (iVar2 < 1) {
              ERR_put_error(0xd,0x89,6,"crypto\\asn1\\a_verify.c",0x4c);
              uVar8 = 0;
            }
            else {
              uVar8 = 1;
            }
          }
          else {
            ERR_put_error(0xd,0x89,6,"crypto\\asn1\\a_verify.c",0x45);
            uVar8 = 0;
          }
        }
      }
    }
  }
  EVP_MD_CTX_free(lVar4);
  return uVar8;
}

