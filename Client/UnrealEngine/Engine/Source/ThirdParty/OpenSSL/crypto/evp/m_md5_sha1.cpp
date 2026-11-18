// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// FUN_14f6d6a50 @ 14f6d6a50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d6a50(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = EVP_MD_CTX_md_data();
  iVar1 = MD5_Init(lVar2);
  if (iVar1 == 0) {
    return;
  }
  SHA1_Init(lVar2 + 0x5c);
  return;
}

// FUN_14f6d6a90 @ 14f6d6a90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d6a90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = EVP_MD_CTX_md_data();
  iVar1 = MD5_Update(lVar2,param_2,param_3);
  if (iVar1 == 0) {
    return;
  }
  SHA1_Update(lVar2 + 0x5c,param_2,param_3);
  return;
}

// FUN_14f6d6b00 @ 14f6d6b00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d6b00(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = EVP_MD_CTX_md_data();
  iVar1 = MD5_Final(param_2,lVar2);
  if (iVar1 == 0) {
    return;
  }
  SHA1_Final(param_2 + 0x10,lVar2 + 0x5c);
  return;
}

// FUN_14f6d6b60 @ 14f6d6b60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f6d6b60(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_2 == 0x1d) {
    if (param_1 == 0) {
      uVar2 = 0;
    }
    else {
      lVar3 = EVP_MD_CTX_md_data();
      if ((param_3 == 0x30) && (iVar1 = FUN_14f6d6a90(param_1,param_4,0x30), 0 < iVar1)) {
        local_78 = 0x3636363636363636;
        local_70 = 0x3636363636363636;
        local_68 = 0x3636363636363636;
        local_60 = 0x3636363636363636;
        local_58 = 0x3636363636363636;
        local_50 = 0x3636363636363636;
        iVar1 = MD5_Update(lVar3,&local_78,0x30);
        if ((iVar1 != 0) &&
           ((((iVar1 = MD5_Final(local_48,lVar3), iVar1 != 0 &&
              (iVar1 = SHA1_Update(lVar3 + 0x5c,&local_78,0x28), iVar1 != 0)) &&
             (iVar1 = SHA1_Final(local_38,lVar3 + 0x5c), iVar1 != 0)) &&
            ((iVar1 = FUN_14f6d6a50(param_1), iVar1 != 0 &&
             (iVar1 = FUN_14f6d6a90(param_1,param_4,0x30), 0 < iVar1)))))) {
          local_78 = 0x5c5c5c5c5c5c5c5c;
          local_70 = 0x5c5c5c5c5c5c5c5c;
          local_68 = 0x5c5c5c5c5c5c5c5c;
          local_60 = 0x5c5c5c5c5c5c5c5c;
          local_58 = 0x5c5c5c5c5c5c5c5c;
          local_50 = 0x5c5c5c5c5c5c5c5c;
          iVar1 = MD5_Update(lVar3,&local_78,0x30);
          if ((iVar1 != 0) &&
             (((iVar1 = MD5_Update(lVar3,local_48,0x10), iVar1 != 0 &&
               (iVar1 = SHA1_Update(lVar3 + 0x5c,&local_78,0x28), iVar1 != 0)) &&
              (iVar1 = SHA1_Update(lVar3 + 0x5c,local_38,0x14), iVar1 != 0)))) {
            OPENSSL_cleanse(local_48,0x10);
            OPENSSL_cleanse(local_38,0x14);
            return 1;
          }
        }
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}

// EVP_md5_sha1 @ 14f6d6d50

undefined * EVP_md5_sha1(void)

{
  return &DAT_1534a7660;
}

