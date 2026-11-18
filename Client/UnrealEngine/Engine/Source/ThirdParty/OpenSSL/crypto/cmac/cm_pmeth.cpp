// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// FUN_14f756870 @ 14f756870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f756870(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = CMAC_CTX_new();
  *(longlong *)(param_1 + 0x28) = lVar1;
  if (lVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  return 1;
}

// FUN_14f7568b0 @ 14f7568b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f7568b0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = CMAC_CTX_new();
  *(longlong *)(param_1 + 0x28) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    iVar1 = CMAC_CTX_copy(lVar2,*(undefined8 *)(param_2 + 0x28));
    return iVar1 != 0;
  }
  return false;
}

// FUN_14f756920 @ 14f756920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f756920(longlong param_1)

{
  CMAC_CTX_free(*(undefined8 *)(param_1 + 0x28));
  return;
}

// FUN_14f756940 @ 14f756940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f756940(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = CMAC_CTX_new();
  if (lVar2 != 0) {
    iVar1 = CMAC_CTX_copy(lVar2,*(undefined8 *)(param_1 + 0x28));
    if (iVar1 != 0) {
      EVP_PKEY_assign(param_2,0x37e,lVar2);
      return 1;
    }
    CMAC_CTX_free(lVar2);
  }
  return 0;
}

// FUN_14f7569c0 @ 14f7569c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7569c0(undefined8 param_1,undefined8 param_2)

{
  EVP_MD_CTX_set_flags(param_2,0x100);
  EVP_MD_CTX_set_update_fn(param_2,FUN_14f756bd0);
  return 1;
}

// FUN_14f756a00 @ 14f756a00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f756a00(longlong param_1)

{
  CMAC_Final(*(undefined8 *)(param_1 + 0x28));
  return;
}

// FUN_14f756a20 @ 14f756a20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f756a20(longlong param_1,int param_2,int param_3,longlong param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f756a2c;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 1) {
    if ((*(longlong *)(param_1 + 0x10) != 0) &&
       (iVar2 = CMAC_CTX_copy(uVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28)),
       iVar2 == 0)) {
      return 0;
    }
    lVar4 = 0;
    param_4 = 0;
  }
  else {
    if (param_2 != 6) {
      if (param_2 != 0xc) {
        return 0xfffffffe;
      }
      uVar6 = *(undefined8 *)(param_1 + 8);
      lVar4 = 0;
      lVar3 = 0;
      lVar5 = param_4;
      goto LAB_14f756a7c;
    }
    if (param_4 == 0) {
      return 0;
    }
    if (param_3 < 0) {
      return 0;
    }
    lVar4 = (longlong)param_3;
  }
  lVar5 = 0;
  uVar6 = 0;
  lVar3 = param_4;
LAB_14f756a7c:
  iVar2 = CMAC_Init(uVar1,lVar3,lVar4,lVar5,uVar6,uVar7);
  if (iVar2 == 0) {
    return 0;
  }
  return 1;
}

// FUN_14f756ad0 @ 14f756ad0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f756ad0(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f756adc;
  if (param_3 == 0) {
    return 0;
  }
  uVar6 = 0;
  uVar4 = uVar6;
  do {
    uVar5 = uVar4 + 1;
    uVar1 = uVar6;
    if (*(char *)(param_2 + uVar4) != "cipher"[uVar4]) {
      do {
        uVar4 = uVar1;
        if (*(char *)(param_2 + uVar4) != (&s_key)[uVar4]) {
          do {
            uVar4 = uVar6;
            if (*(char *)(param_2 + uVar4) != (&s_hexkey)[uVar4]) {
              return 0xfffffffe;
            }
            uVar6 = uVar4 + 1;
          } while (uVar4 + 1 != 7);
          uVar4 = EVP_PKEY_CTX_hex2ctrl(param_1,uVar4 & 0xffffffff);
          return uVar4;
        }
        uVar1 = uVar4 + 1;
      } while (uVar4 + 1 != 4);
      uVar4 = EVP_PKEY_CTX_str2ctrl(param_1,(int)uVar4 + 3);
      return uVar4;
    }
    uVar4 = uVar5;
  } while (uVar5 != 7);
  lVar3 = EVP_get_cipherbyname(param_3);
  if (lVar3 != 0) {
    iVar2 = CMAC_Init(*(undefined8 *)(param_1 + 0x28),0,0,lVar3,*(undefined8 *)(param_1 + 8),uVar7);
    return (ulonglong)(iVar2 != 0);
  }
  return 0;
}

// FUN_14f756bd0 @ 14f756bd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f756bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = EVP_MD_CTX_pkey_ctx();
  iVar1 = CMAC_Update(*(undefined8 *)(lVar2 + 0x28),param_2,param_3);
  return iVar1 != 0;
}

