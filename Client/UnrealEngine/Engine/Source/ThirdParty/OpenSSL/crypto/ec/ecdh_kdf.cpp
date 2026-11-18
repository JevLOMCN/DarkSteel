// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// ECDH_KDF_X9_62 @ 14f7a4820

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ECDH_KDF_X9_62(void)

{
  ecdh_KDF_X9_63();
  return;
}

// ecdh_KDF_X9_63 @ 14f7a4840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
ecdh_KDF_X9_63(void *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
              undefined8 param_5,ulonglong param_6,undefined8 param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_a8 = param_5;
  local_b4 = 0;
  if (((param_6 < 0x40000001) && (param_2 < 0x40000001)) && (param_4 < 0x40000001)) {
    local_b0 = param_3;
    lVar4 = EVP_MD_CTX_new();
    uVar1 = 0;
    if (lVar4 != 0) {
      iVar2 = EVP_MD_size(param_7);
      uVar5 = (ulonglong)iVar2;
      iVar2 = 1;
      iVar3 = EVP_DigestInit_ex(lVar4,param_7,0);
      while (iVar3 != 0) {
        local_b6 = (undefined1)((uint)iVar2 >> 8);
        local_b5 = (undefined1)iVar2;
        local_b7 = (undefined1)((uint)iVar2 >> 0x10);
        local_b8 = (undefined1)((uint)iVar2 >> 0x18);
        iVar3 = EVP_DigestUpdate(lVar4,local_b0,param_4);
        if (((iVar3 == 0) || (iVar3 = EVP_DigestUpdate(lVar4,&local_b8,4), iVar3 == 0)) ||
           (iVar3 = EVP_DigestUpdate(lVar4,local_a8,param_6), iVar3 == 0)) break;
        if (param_2 < uVar5) {
          iVar2 = EVP_DigestFinal(lVar4,local_98,0);
          if (iVar2 != 0) {
            memcpy(param_1,local_98,param_2);
            OPENSSL_cleanse(local_98,uVar5);
LAB_14f7a4a0b:
            local_b4 = 1;
          }
          break;
        }
        iVar3 = EVP_DigestFinal(lVar4,param_1,0);
        if (iVar3 == 0) break;
        param_2 = param_2 - uVar5;
        if (param_2 == 0) goto LAB_14f7a4a0b;
        param_1 = (void *)((longlong)param_1 + uVar5);
        iVar2 = iVar2 + 1;
        iVar3 = EVP_DigestInit_ex(lVar4,param_7,0);
      }
      EVP_MD_CTX_free(lVar4);
      uVar1 = local_b4;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

