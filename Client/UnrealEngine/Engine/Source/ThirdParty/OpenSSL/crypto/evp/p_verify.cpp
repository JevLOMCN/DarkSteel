// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// EVP_VerifyFinal @ 14f771fa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
EVP_VerifyFinal(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined8 local_a0;
  uint local_98 [4];
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_38;
  
  uStack_38 = 0x14f771fb3;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_98[0] = 0;
  uVar3 = 0;
  lVar4 = 0;
  iVar1 = EVP_MD_CTX_test_flags(param_1,0x200);
  if (iVar1 == 0) {
    lVar4 = EVP_MD_CTX_new();
    if (lVar4 == 0) {
      local_a8 = CONCAT44(local_a8._4_4_,0x20);
      ERR_put_error(6,0x6c,0x41,"crypto\\evp\\p_verify.c");
    }
    else {
      iVar2 = EVP_MD_CTX_copy_ex(lVar4,param_1);
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = EVP_DigestFinal_ex(lVar4,local_88,local_98);
      }
      EVP_MD_CTX_free(lVar4);
      if (iVar1 != 0) goto LAB_14f77206d;
    }
    uVar3 = 0;
  }
  else {
    iVar1 = EVP_DigestFinal_ex(param_1,local_88,local_98);
    if (iVar1 != 0) {
LAB_14f77206d:
      uVar3 = 0xffffffff;
      lVar4 = EVP_PKEY_CTX_new(param_4,0);
      if ((lVar4 != 0) && (iVar1 = EVP_PKEY_verify_init(lVar4), 0 < iVar1)) {
        local_a0 = EVP_MD_CTX_md(param_1);
        local_a8 = local_a8 & 0xffffffff00000000;
        iVar1 = EVP_PKEY_CTX_ctrl(lVar4,0xffffffff,0xf8,1);
        if (0 < iVar1) {
          local_a8 = (ulonglong)local_98[0];
          uVar3 = EVP_PKEY_verify(lVar4,param_2,param_3,local_88);
        }
      }
    }
    EVP_PKEY_CTX_free(lVar4);
  }
  return uVar3;
}

