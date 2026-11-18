// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// PKCS5_PBE_keyivgen @ 14f76a0f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong PKCS5_PBE_keyivgen(undefined8 param_1,longlong param_2,ulonglong param_3,int *param_4,
                            undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  undefined4 local_110;
  int local_108;
  uint local_104;
  uint local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [64];
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_138;
  uVar8 = 0;
  uVar7 = 0;
  local_f8 = param_5;
  local_f0 = param_1;
  if (((param_4 == (int *)0x0) || (*param_4 != 0x10)) || (*(longlong *)(param_4 + 2) == 0)) {
    local_118 = (undefined1 *)CONCAT44(local_118._4_4_,0x29);
    ERR_put_error(6,0x75,0x72,"crypto\\evp\\p5_crpt.c");
    uVar8 = 0;
  }
  else {
    uVar3 = PBEPARAM_it();
    puVar4 = (undefined8 *)ASN1_TYPE_unpack_sequence(uVar3,param_4);
    if (puVar4 == (undefined8 *)0x0) {
      local_118 = (undefined1 *)CONCAT44(local_118._4_4_,0x2f);
      ERR_put_error(6,0x75,0x72,"crypto\\evp\\p5_crpt.c");
      uVar8 = 0;
    }
    else {
      local_100 = EVP_CIPHER_iv_length(param_5);
      if (local_100 < 0x11) {
        local_104 = EVP_CIPHER_key_length(param_5);
        if (local_104 < 0x41) {
          if (puVar4[1] == 0) {
            iVar9 = 1;
          }
          else {
            iVar9 = ASN1_INTEGER_get();
          }
          uVar3 = *(undefined8 *)((int *)*puVar4 + 2);
          local_108 = *(int *)*puVar4;
          uVar6 = uVar8;
          if ((param_2 != 0) && (uVar6 = param_3 & 0xffffffff, (int)param_3 == -1)) {
            uVar6 = 0xffffffffffffffff;
            do {
              uVar6 = uVar6 + 1;
            } while (*(char *)(uVar6 + param_2) != '\0');
          }
          lVar5 = EVP_MD_CTX_new();
          if (lVar5 == 0) {
            local_118 = (undefined1 *)CONCAT44(local_118._4_4_,0x4e);
            ERR_put_error(6,0x75,0x41,"crypto\\evp\\p5_crpt.c");
          }
          else {
            iVar1 = EVP_DigestInit_ex(lVar5,param_6,0);
            if (((iVar1 != 0) &&
                (iVar1 = EVP_DigestUpdate(lVar5,param_2,(longlong)(int)uVar6), iVar1 != 0)) &&
               (iVar1 = EVP_DigestUpdate(lVar5,uVar3,(longlong)local_108), uVar8 = uVar7, iVar1 != 0
               )) {
              PBEPARAM_free(puVar4);
              puVar4 = (undefined8 *)0x0;
              iVar1 = EVP_DigestFinal_ex(lVar5,local_d8,0);
              if (iVar1 != 0) {
                iVar1 = EVP_MD_size(param_6);
                if (iVar1 < 0) {
                  return 0;
                }
                iVar1 = 1;
                if (1 < iVar9) {
                  do {
                    iVar2 = EVP_DigestInit_ex(lVar5,param_6,0);
                    if (((iVar2 == 0) || (iVar2 = EVP_DigestUpdate(lVar5,local_d8), iVar2 == 0)) ||
                       (iVar2 = EVP_DigestFinal_ex(lVar5,local_d8), iVar2 == 0)) goto LAB_14f76a3f0;
                    iVar1 = iVar1 + 1;
                  } while (iVar1 < iVar9);
                }
                memcpy(local_98,local_d8,(longlong)(int)local_104);
                memcpy(local_e8,local_d8 + (int)(0x10 - local_100),(longlong)(int)local_100);
                local_110 = param_7;
                local_118 = local_e8;
                iVar9 = EVP_CipherInit_ex(local_f0,local_f8,0,local_98);
                if (iVar9 != 0) {
                  OPENSSL_cleanse(local_d8,0x40);
                  OPENSSL_cleanse(local_98,0x40);
                  OPENSSL_cleanse(local_e8,0x10);
                  uVar8 = 1;
                }
              }
            }
          }
LAB_14f76a3f0:
          PBEPARAM_free(puVar4);
          EVP_MD_CTX_free(lVar5);
        }
        else {
          local_118 = (undefined1 *)CONCAT44(local_118._4_4_,0x3b);
          ERR_put_error(6,0x75,0x82,"crypto\\evp\\p5_crpt.c");
          PBEPARAM_free(puVar4);
          uVar8 = 0;
        }
      }
      else {
        local_118 = (undefined1 *)CONCAT44(local_118._4_4_,0x35);
        ERR_put_error(6,0x75,0xc2,"crypto\\evp\\p5_crpt.c");
        PBEPARAM_free(puVar4);
        uVar8 = 0;
      }
    }
  }
  return uVar8;
}

