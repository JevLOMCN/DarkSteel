// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// PKCS12_PBE_add @ 14f769eb0

void PKCS12_PBE_add(void)

{
  return;
}

// PKCS12_PBE_keyivgen @ 14f769ec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
PKCS12_PBE_keyivgen(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                   longlong param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined1 local_b0 [24];
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (param_5 != 0) {
    local_b8 = param_1;
    uVar3 = PBEPARAM_it();
    puVar4 = (undefined8 *)ASN1_TYPE_unpack_sequence(uVar3,param_4);
    if (puVar4 != (undefined8 *)0x0) {
      if (puVar4[1] == 0) {
        uVar5 = 1;
      }
      else {
        uVar5 = ASN1_INTEGER_get();
      }
      uVar3 = *(undefined8 *)((undefined4 *)*puVar4 + 2);
      uVar1 = *(undefined4 *)*puVar4;
      local_d8 = EVP_CIPHER_key_length(param_5);
      local_c8 = param_6;
      local_d0 = local_98;
      local_e8._0_4_ = 1;
      local_e0 = uVar5;
      iVar2 = PKCS12_key_gen_utf8(param_2,param_3,uVar3,uVar1);
      if (iVar2 == 0) {
        local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x37);
        ERR_put_error(0x23,0x78,0x6b,"crypto\\pkcs12\\p12_crpt.c");
        PBEPARAM_free(puVar4);
        return 0;
      }
      local_d8 = EVP_CIPHER_iv_length(param_5);
      local_c8 = param_6;
      local_d0 = local_b0;
      local_e8._0_4_ = 2;
      local_e0 = uVar5;
      iVar2 = PKCS12_key_gen_utf8(param_2,param_3,uVar3,uVar1);
      if (iVar2 == 0) {
        local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x3d);
        ERR_put_error(0x23,0x78,0x6a,"crypto\\pkcs12\\p12_crpt.c");
        PBEPARAM_free(puVar4);
        return 0;
      }
      PBEPARAM_free(puVar4);
      local_e0 = param_7;
      local_e8 = local_b0;
      uVar5 = EVP_CipherInit_ex(local_b8,param_5,0,local_98);
      OPENSSL_cleanse(local_98,0x40);
      OPENSSL_cleanse(local_b0,0x10);
      return uVar5;
    }
    local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x2b);
    ERR_put_error(0x23,0x78,0x65,"crypto\\pkcs12\\p12_crpt.c");
  }
  return 0;
}

