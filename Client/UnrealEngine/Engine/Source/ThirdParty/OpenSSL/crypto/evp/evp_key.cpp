// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// EVP_BytesToKey @ 14f748320

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int EVP_BytesToKey(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  int param_5,uint param_6,undefined1 *param_7,undefined1 *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_e8 [32];
  int local_c8;
  int local_c4;
  int local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c4 = 0;
  local_c8 = 0;
  local_b8 = param_4;
  local_b0 = param_3;
  local_a8 = param_1;
  iVar1 = EVP_CIPHER_key_length();
  iVar2 = EVP_CIPHER_iv_length(param_1);
  if (0x40 < iVar1) {
    OPENSSL_die("assertion failed: nkey <= EVP_MAX_KEY_LENGTH","crypto\\evp\\evp_key.c",0x56);
  }
  if (0x10 < iVar2) {
    OPENSSL_die("assertion failed: niv <= EVP_MAX_IV_LENGTH","crypto\\evp\\evp_key.c",0x57);
  }
  if (param_4 != 0) {
    lVar5 = EVP_MD_CTX_new();
    if (lVar5 != 0) {
      iVar3 = EVP_DigestInit_ex(lVar5,param_2,0);
      iVar4 = 0;
      do {
        if (((iVar3 == 0) ||
            ((((local_c0 = iVar4 + 1, iVar4 != 0 &&
               (iVar4 = EVP_DigestUpdate(lVar5,local_98,local_c8), iVar4 == 0)) ||
              (iVar4 = EVP_DigestUpdate(lVar5,local_b8,(longlong)param_5), iVar4 == 0)) ||
             ((local_b0 != 0 && (iVar4 = EVP_DigestUpdate(lVar5,local_b0,8), iVar4 == 0)))))) ||
           (iVar4 = EVP_DigestFinal_ex(lVar5,local_98,&local_c8), iVar4 == 0)) break;
        uVar7 = 1;
        if (1 < param_6) {
          do {
            iVar4 = EVP_DigestInit_ex(lVar5,param_2,0);
            if (((iVar4 == 0) || (iVar4 = EVP_DigestUpdate(lVar5,local_98,local_c8), iVar4 == 0)) ||
               (iVar4 = EVP_DigestFinal_ex(lVar5,local_98), iVar4 == 0)) goto LAB_14f74857a;
            uVar7 = uVar7 + 1;
          } while (uVar7 < param_6);
        }
        uVar6 = 0;
        while ((iVar4 = (int)uVar6, iVar1 != 0 && (iVar4 != local_c8))) {
          if (param_7 != (undefined1 *)0x0) {
            *param_7 = local_98[uVar6];
            param_7 = param_7 + 1;
          }
          iVar1 = iVar1 + -1;
          uVar6 = (ulonglong)(iVar4 + 1);
        }
        if ((iVar2 != 0) && (iVar4 != local_c8)) {
          do {
            if ((int)uVar6 == local_c8) break;
            if (param_8 != (undefined1 *)0x0) {
              *param_8 = local_98[uVar6];
              param_8 = param_8 + 1;
            }
            uVar6 = (ulonglong)((int)uVar6 + 1);
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        if ((iVar1 == 0) && (iVar2 == 0)) {
          local_c4 = EVP_CIPHER_key_length(local_a8);
          break;
        }
        iVar3 = EVP_DigestInit_ex(lVar5,param_2,0);
        iVar4 = local_c0;
      } while( true );
    }
LAB_14f74857a:
    EVP_MD_CTX_free(lVar5);
    OPENSSL_cleanse(local_98,0x40);
    iVar1 = local_c4;
  }
  return iVar1;
}

// EVP_get_pw_prompt @ 14f7485c0

undefined1 * EVP_get_pw_prompt(void)

{
  if (DAT_1553e2f70 == '\0') {
    return (undefined1 *)0x0;
  }
  return &DAT_1553e2f70;
}

// EVP_read_pw_string @ 14f7485e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_read_pw_string(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  EVP_read_pw_string_min(param_1,0,param_2,param_3,param_4);
  return;
}

// EVP_read_pw_string_min @ 14f748610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
EVP_read_pw_string_min
          (undefined8 param_1,undefined4 param_2,int param_3,undefined1 *param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_288 [32];
  undefined4 local_268;
  int local_260;
  undefined8 local_258;
  undefined1 local_248 [512];
  ulonglong local_48;
  undefined8 uStack_38;
  
  uStack_38 = 0x14f748623;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_288;
  puVar4 = param_4;
  if ((param_4 == (undefined1 *)0x0) && (puVar4 = &DAT_1553e2f70, DAT_1553e2f70 == '\0')) {
    puVar4 = param_4;
  }
  lVar3 = UI_new();
  if (lVar3 != 0) {
    if (0x1ff < param_3) {
      param_3 = 0x1ff;
    }
    local_268 = param_2;
    local_260 = param_3;
    iVar1 = UI_add_input_string(lVar3,puVar4,0,param_1);
    uVar2 = 0xffffffff;
    if ((-1 < iVar1) &&
       ((param_5 == 0 ||
        (local_268 = param_2, local_260 = param_3, local_258 = param_1,
        iVar1 = UI_add_verify_string(lVar3,puVar4,0,local_248), uVar2 = 0xffffffff, -1 < iVar1)))) {
      uVar2 = UI_process(lVar3);
      OPENSSL_cleanse(local_248,0x200);
    }
    UI_free(lVar3);
    return uVar2;
  }
  return 0xffffffff;
}

// EVP_set_pw_prompt @ 14f748710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_set_pw_prompt(char *param_1)

{
  if (param_1 == (char *)0x0) {
    DAT_1553e2f70 = 0;
    return;
  }
  strncpy(&DAT_1553e2f70,param_1,0x4f);
  DAT_1553e2fbf = 0;
  return;
}

