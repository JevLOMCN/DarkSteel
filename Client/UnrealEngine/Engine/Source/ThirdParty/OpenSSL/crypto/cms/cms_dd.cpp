// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// cms_DigestedData_create @ 14f7cb3d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * cms_DigestedData_create(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined8 *)CMS_ContentInfo_new();
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar2 = CMS_DigestedData_it();
  puVar3 = (undefined4 *)ASN1_item_new(uVar2);
  if (puVar3 == (undefined4 *)0x0) {
    CMS_ContentInfo_free(puVar1);
    return (undefined8 *)0x0;
  }
  uVar2 = OBJ_nid2obj(0x19);
  *puVar1 = uVar2;
  puVar1[1] = puVar3;
  *puVar3 = 0;
  uVar2 = OBJ_nid2obj(0x15);
  **(undefined8 **)(puVar3 + 4) = uVar2;
  X509_ALGOR_set_md(*(undefined8 *)(puVar3 + 2),param_1);
  return puVar1;
}

// cms_DigestedData_do_final @ 14f7cb480

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool cms_DigestedData_do_final(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  uint local_78 [4];
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x14f7cb498;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  lVar3 = EVP_MD_CTX_new();
  bVar4 = false;
  if (lVar3 == 0) {
    local_88 = 0x40;
    ERR_put_error(0x2e,0x75,0x41,"crypto\\cms\\cms_dd.c");
    bVar4 = false;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8);
    iVar2 = cms_DigestAlgorithm_find_ctx(lVar3,param_2,*(undefined8 *)(lVar1 + 8));
    if ((iVar2 != 0) && (iVar2 = EVP_DigestFinal_ex(lVar3,local_68,local_78), 0 < iVar2)) {
      if (param_3 == 0) {
        iVar2 = ASN1_STRING_set(*(undefined8 *)(lVar1 + 0x18),local_68,local_78[0]);
        bVar4 = iVar2 != 0;
      }
      else if (local_78[0] == **(uint **)(lVar1 + 0x18)) {
        iVar2 = memcmp(local_68,*(void **)(*(uint **)(lVar1 + 0x18) + 2),(ulonglong)local_78[0]);
        if (iVar2 == 0) {
          bVar4 = true;
        }
        else {
          local_88 = 0x55;
          ERR_put_error(0x2e,0x75,0x9e,"crypto\\cms\\cms_dd.c");
        }
      }
      else {
        local_88 = 0x4f;
        ERR_put_error(0x2e,0x75,0x79,"crypto\\cms\\cms_dd.c");
      }
    }
  }
  EVP_MD_CTX_free(lVar3);
  return bVar4;
}

// cms_DigestedData_init_bio @ 14f7cb5f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cms_DigestedData_init_bio(longlong param_1)

{
  cms_DigestAlgorithm_init_bio(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8));
  return;
}

