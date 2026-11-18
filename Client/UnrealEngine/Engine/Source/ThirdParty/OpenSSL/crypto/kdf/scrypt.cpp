// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 7

// FUN_14f75b710 @ 14f75b710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75b710(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f75b71c;
  lVar1 = CRYPTO_zalloc(0x40,"crypto\\kdf\\scrypt.c",0x3c);
  if (lVar1 == 0) {
    ERR_put_error(0x34,0x6a,0x41,"crypto\\kdf\\scrypt.c",0x3e,uVar2);
    return 0;
  }
  *(undefined8 *)(lVar1 + 0x20) = 0x100000;
  *(undefined8 *)(lVar1 + 0x28) = 8;
  *(undefined8 *)(lVar1 + 0x30) = 1;
  *(undefined8 *)(lVar1 + 0x38) = 0x40100000;
  *(longlong *)(param_1 + 0x28) = lVar1;
  return 1;
}

// FUN_14f75b7a0 @ 14f75b7a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f75b7a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  CRYPTO_clear_free(puVar1[2],puVar1[3],"crypto\\kdf\\scrypt.c",0x54);
  CRYPTO_clear_free(*puVar1,puVar1[1],"crypto\\kdf\\scrypt.c",0x55);
  CRYPTO_free(puVar1,"crypto\\kdf\\scrypt.c",0x56);
  return;
}

// FUN_14f75b810 @ 14f75b810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75b810(longlong param_1,undefined4 param_2,undefined4 param_3,ulonglong *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  switch(param_2) {
  case 0x1008:
    uVar3 = FUN_14f75bd80(lVar1,lVar1 + 8,param_4,param_3);
    return uVar3;
  case 0x1009:
    uVar3 = FUN_14f75bd80(lVar1 + 0x10,lVar1 + 0x18,param_4,param_3);
    return uVar3;
  case 0x100a:
    uVar2 = *param_4;
    if ((1 < uVar2) && ((uVar2 & uVar2 - 1) == 0)) {
      *(ulonglong *)(lVar1 + 0x20) = uVar2;
      return 1;
    }
    break;
  case 0x100b:
    if (*param_4 != 0) {
      *(ulonglong *)(lVar1 + 0x28) = *param_4;
      return 1;
    }
    break;
  case 0x100c:
    if (*param_4 != 0) {
      *(ulonglong *)(lVar1 + 0x30) = *param_4;
      return 1;
    }
    break;
  case 0x100d:
    if (*param_4 != 0) {
      *(ulonglong *)(lVar1 + 0x38) = *param_4;
      return 1;
    }
    break;
  default:
    return 0xfffffffe;
  }
  return 0;
}

// FUN_14f75b910 @ 14f75b910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75b910(undefined8 param_1,char *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f75b920;
  if (param_3 == 0) {
    ERR_put_error(0x34,0x68,0x66,"crypto\\kdf\\scrypt.c",0xb7,0x14f75b920);
    return 0;
  }
  lVar2 = 0;
  lVar3 = lVar2;
  while (lVar4 = lVar3 + 1, lVar5 = lVar2, param_2[lVar3] == (&s_pass)[lVar3]) {
    lVar3 = lVar4;
    if (lVar4 == 5) {
      uVar6 = EVP_PKEY_CTX_str2ctrl(param_1,0x1008,param_3);
      return uVar6;
    }
  }
  while (lVar4 = lVar5 + 1, lVar3 = lVar2, param_2[lVar5] == "hexpass"[lVar5]) {
    lVar5 = lVar4;
    if (lVar4 == 8) {
      uVar6 = EVP_PKEY_CTX_hex2ctrl(param_1,0x1008,param_3);
      return uVar6;
    }
  }
  while (lVar5 = lVar3 + 1, param_2[lVar3] == (&s_salt)[lVar3]) {
    lVar3 = lVar5;
    if (lVar5 == 5) {
      uVar6 = EVP_PKEY_CTX_str2ctrl(param_1,0x1009,param_3);
      return uVar6;
    }
  }
  while (lVar3 = lVar2 + 1, param_2[lVar2] == "hexsalt"[lVar2]) {
    lVar2 = lVar3;
    if (lVar3 == 8) {
      uVar6 = EVP_PKEY_CTX_hex2ctrl(param_1,0x1009,param_3);
      return uVar6;
    }
  }
  if ((*param_2 == s_N) && (param_2[1] == DAT_1534b3d29)) {
    uVar6 = FUN_14f75bcc0(param_1,0x100a,param_3);
    return uVar6;
  }
  if ((*param_2 == s_r) && (param_2[1] == DAT_15348b161)) {
    uVar6 = FUN_14f75bcc0(param_1,0x100b,param_3);
    return uVar6;
  }
  if ((*param_2 == s_p) && (param_2[1] == DAT_15348b185)) {
    uVar6 = FUN_14f75bcc0(param_1,0x100c,param_3);
    return uVar6;
  }
  iVar1 = strcmp(param_2,"maxmem_bytes");
  if (iVar1 != 0) {
    ERR_put_error(0x34,0x68,0x67,"crypto\\kdf\\scrypt.c",0xd4,uVar6);
    return 0xfffffffe;
  }
  uVar6 = FUN_14f75bcc0(param_1,0x100d,param_3);
  return uVar6;
}

// FUN_14f75bb60 @ 14f75bb60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75bb60(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (*plVar1 == 0) {
    ERR_put_error(0x34,0x6d,0x6e,"crypto\\kdf\\scrypt.c",0xde);
    return 0;
  }
  if (plVar1[2] == 0) {
    ERR_put_error(0x34,0x6d,0x6f,"crypto\\kdf\\scrypt.c",0xe3);
    return 0;
  }
  uVar2 = EVP_PBE_scrypt(*plVar1,plVar1[1],plVar1[2],plVar1[3],plVar1[4],plVar1[5],plVar1[6],
                         plVar1[7],param_2,*param_3,0x14f75bb6a);
  return uVar2;
}

// FUN_14f75bcc0 @ 14f75bcc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75bcc0(undefined8 param_1,undefined4 param_2,char *param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong local_res18 [2];
  
  cVar2 = *param_3;
  local_res18[0] = 0;
  while( true ) {
    if (cVar2 == '\0') {
      uVar3 = FUN_14f75b810(param_1,param_2,0,local_res18);
      return uVar3;
    }
    if ((cVar2 < '0') || ('9' < cVar2)) break;
    uVar1 = (ulonglong)((int)cVar2 - 0x30) + local_res18[0] * 10;
    if ((uVar1 < (int)cVar2 - 0x30) || ((local_res18[0] * 10) / 10 != local_res18[0])) break;
    cVar2 = param_3[1];
    param_3 = param_3 + 1;
    local_res18[0] = uVar1;
  }
  ERR_put_error(0x34,0x69,0x6c,"crypto\\kdf\\scrypt.c",0xad,0x14f75bccc);
  return 0;
}

// FUN_14f75bd80 @ 14f75bd80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75bd80(longlong *param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f75bd9a;
  if (param_3 == 0) {
LAB_14f75be33:
    uVar2 = 1;
  }
  else {
    if (-1 < param_4) {
      if (*param_1 != 0) {
        CRYPTO_clear_free(*param_1,*param_2,"crypto\\kdf\\scrypt.c",100);
      }
      if (param_4 < 1) {
        lVar1 = CRYPTO_malloc(1,"crypto\\kdf\\scrypt.c");
      }
      else {
        lVar1 = CRYPTO_memdup(param_3,(longlong)param_4,"crypto\\kdf\\scrypt.c",0x67);
      }
      *param_1 = lVar1;
      if (lVar1 != 0) {
        *param_2 = (longlong)param_4;
        goto LAB_14f75be33;
      }
      ERR_put_error(0x34,0x6b,0x41,"crypto\\kdf\\scrypt.c",0x6c,uVar2);
    }
    uVar2 = 0;
  }
  return uVar2;
}

