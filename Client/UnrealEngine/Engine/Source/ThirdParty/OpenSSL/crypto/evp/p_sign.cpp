// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// EVP_SignFinal @ 14f772110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
EVP_SignFinal(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined8 local_a0;
  uint local_98 [2];
  longlong local_90;
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_38;
  
  uStack_38 = 0x14f772123;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_98[0] = 0;
  lVar3 = 0;
  *param_3 = 0;
  iVar1 = EVP_MD_CTX_test_flags(param_1,0x200);
  if (iVar1 == 0) {
    lVar3 = EVP_MD_CTX_new();
    if (lVar3 == 0) {
      local_a8 = CONCAT44(local_a8._4_4_,0x22);
      ERR_put_error(6,0x6b,0x41,"crypto\\evp\\p_sign.c");
    }
    else {
      iVar2 = EVP_MD_CTX_copy_ex(lVar3,param_1);
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = EVP_DigestFinal_ex(lVar3,local_88,local_98);
      }
      EVP_MD_CTX_free(lVar3);
      if (iVar1 != 0) goto LAB_14f7721e0;
    }
    uVar4 = 0;
  }
  else {
    iVar1 = EVP_DigestFinal_ex(param_1,local_88,local_98);
    uVar4 = 0;
    if (iVar1 != 0) {
LAB_14f7721e0:
      iVar1 = EVP_PKEY_size(param_4);
      local_90 = (longlong)iVar1;
      lVar3 = EVP_PKEY_CTX_new(param_4,0);
      uVar4 = 0;
      if ((lVar3 != 0) && (iVar1 = EVP_PKEY_sign_init(lVar3), 0 < iVar1)) {
        local_a0 = EVP_MD_CTX_md(param_1);
        local_a8 = local_a8 & 0xffffffff00000000;
        iVar1 = EVP_PKEY_CTX_ctrl(lVar3,0xffffffff,0xf8,1);
        uVar4 = 0;
        if (0 < iVar1) {
          local_a8 = (ulonglong)local_98[0];
          iVar1 = EVP_PKEY_sign(lVar3,param_2,&local_90,local_88);
          if (0 < iVar1) {
            uVar4 = 1;
            *param_3 = (undefined4)local_90;
          }
        }
      }
    }
    EVP_PKEY_CTX_free(lVar3);
  }
  return uVar4;
}

