// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// CMAC_CTX_cleanup @ 14f722b80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CMAC_CTX_cleanup(undefined8 *param_1)

{
  EVP_CIPHER_CTX_reset(*param_1);
  OPENSSL_cleanse(param_1 + 9,0x20);
  OPENSSL_cleanse(param_1 + 1,0x20);
  OPENSSL_cleanse(param_1 + 5,0x20);
  OPENSSL_cleanse(param_1 + 0xd,0x20);
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  return;
}

// CMAC_CTX_copy @ 14f722bf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMAC_CTX_copy(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  size_t _Size;
  
  if (*(int *)(param_2 + 0x11) != -1) {
    iVar1 = EVP_CIPHER_CTX_copy(*param_1,*param_2);
    if (iVar1 != 0) {
      iVar1 = EVP_CIPHER_CTX_block_size(*param_2);
      _Size = (size_t)iVar1;
      memcpy(param_1 + 1,param_2 + 1,_Size);
      memcpy(param_1 + 5,param_2 + 5,_Size);
      memcpy(param_1 + 9,param_2 + 9,_Size);
      memcpy(param_1 + 0xd,param_2 + 0xd,_Size);
      *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
      return 1;
    }
  }
  return 0;
}

// CMAC_CTX_free @ 14f722cb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CMAC_CTX_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CMAC_CTX_cleanup();
    EVP_CIPHER_CTX_free(*param_1);
    CRYPTO_free(param_1,"crypto\\cmac\\cmac.c",0x54);
  }
  return;
}

// CMAC_CTX_new @ 14f722d10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * CMAC_CTX_new(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f722d1c;
  plVar1 = (longlong *)CRYPTO_malloc(0x90,"crypto\\cmac\\cmac.c",0x32);
  if (plVar1 == (longlong *)0x0) {
    ERR_put_error(0xf,0x78,0x41,"crypto\\cmac\\cmac.c",0x33,uVar3);
    return (longlong *)0x0;
  }
  lVar2 = EVP_CIPHER_CTX_new();
  *plVar1 = lVar2;
  if (lVar2 == 0) {
    CRYPTO_free(plVar1,"crypto\\cmac\\cmac.c",0x38);
    return (longlong *)0x0;
  }
  *(undefined4 *)(plVar1 + 0x11) = 0xffffffff;
  return plVar1;
}

// CMAC_Final @ 14f722db0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMAC_Final(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x11) == -1) {
    return 0;
  }
  iVar2 = EVP_CIPHER_CTX_block_size(*param_1);
  lVar5 = (longlong)iVar2;
  *param_3 = lVar5;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x11);
    if (iVar1 == iVar2) {
      if (0 < iVar2) {
        pbVar3 = (byte *)(param_1 + 1);
        lVar4 = lVar5;
        do {
          pbVar3[(param_2 - (longlong)param_1) + -8] = pbVar3[0x60] ^ *pbVar3;
          pbVar3 = pbVar3 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    else {
      *(undefined1 *)((longlong)iVar1 + 0x68 + (longlong)param_1) = 0x80;
      if (1 < iVar2 - iVar1) {
        memset((void *)((longlong)iVar1 + 0x69 + (longlong)param_1),0,
               (longlong)((iVar2 - iVar1) + -1));
      }
      if (0 < iVar2) {
        pbVar3 = (byte *)(param_1 + 5);
        lVar4 = lVar5;
        do {
          pbVar3[(param_2 - (longlong)param_1) + -0x28] = pbVar3[0x40] ^ *pbVar3;
          pbVar3 = pbVar3 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    iVar2 = EVP_Cipher(*param_1,param_2,param_2,iVar2);
    if (iVar2 == 0) {
      OPENSSL_cleanse(param_2,lVar5);
      return 0;
    }
  }
  return 1;
}

// CMAC_Init @ 14f722ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
CMAC_Init(undefined8 *param_1,longlong param_2,ulonglong param_3,longlong param_4,longlong param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f722f00;
  if (param_2 == 0) {
    if (param_4 == 0) {
      if (param_5 != 0) {
        return 1;
      }
      if (param_3 != 0) {
        return 1;
      }
      if (*(int *)(param_1 + 0x11) == -1) {
        return 0;
      }
      iVar1 = EVP_EncryptInit_ex(*param_1,0,0,0,&DAT_1534b70d0,0x14f722f00);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = EVP_CIPHER_CTX_block_size(*param_1);
      goto LAB_14f723064;
    }
LAB_14f722f72:
    *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
    iVar1 = EVP_EncryptInit_ex(*param_1,param_4,param_5,0,0,0x14f722f00);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else if (param_4 != 0) goto LAB_14f722f72;
  if (param_2 == 0) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  lVar3 = EVP_CIPHER_CTX_cipher(*param_1);
  if (((lVar3 == 0) ||
      (iVar1 = EVP_CIPHER_CTX_set_key_length(*param_1,param_3 & 0xffffffff), iVar1 == 0)) ||
     (iVar1 = EVP_EncryptInit_ex(*param_1,0,0,param_2,&DAT_1534b70d0,uVar4), iVar1 == 0)) {
    return 0;
  }
  iVar2 = EVP_CIPHER_CTX_block_size(*param_1);
  iVar1 = EVP_Cipher(*param_1,param_1 + 9,&DAT_1534b70d0,iVar2);
  if (iVar1 < 1) {
    return 0;
  }
  FUN_14f723210(param_1 + 1,param_1 + 9,iVar2);
  FUN_14f723210(param_1 + 5,param_1 + 1);
  OPENSSL_cleanse(param_1 + 9);
  iVar1 = EVP_EncryptInit_ex(*param_1,0,0,0,&DAT_1534b70d0);
  if (iVar1 == 0) {
    return 0;
  }
LAB_14f723064:
  memset(param_1 + 9,0,(longlong)iVar2);
  *(undefined4 *)(param_1 + 0x11) = 0;
  return 1;
}

// CMAC_Update @ 14f7230a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 CMAC_Update(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong _Size;
  
  if (*(int *)(param_1 + 0x11) == -1) {
    return 0;
  }
  if (param_3 != 0) {
    iVar1 = EVP_CIPHER_CTX_block_size(*param_1);
    uVar3 = (ulonglong)iVar1;
    iVar2 = *(int *)(param_1 + 0x11);
    if (0 < iVar2) {
      _Size = uVar3 - (longlong)iVar2;
      if (param_3 < _Size) {
        _Size = param_3;
      }
      memcpy((void *)((longlong)param_1 + (longlong)iVar2 + 0x68),param_2,_Size);
      *(int *)(param_1 + 0x11) = *(int *)(param_1 + 0x11) + (int)_Size;
      param_3 = param_3 - _Size;
      if (param_3 == 0) {
        return 1;
      }
      param_2 = (void *)((longlong)param_2 + _Size);
      iVar2 = EVP_Cipher(*param_1,param_1 + 9,param_1 + 0xd,iVar1);
      if (iVar2 < 1) {
        return 0;
      }
    }
    while( true ) {
      if (param_3 <= uVar3) {
        memcpy(param_1 + 0xd,param_2,param_3);
        *(int *)(param_1 + 0x11) = (int)param_3;
        return 1;
      }
      iVar2 = EVP_Cipher(*param_1,param_1 + 9,param_2,iVar1);
      if (iVar2 < 1) break;
      param_3 = param_3 - uVar3;
      param_2 = (void *)((longlong)param_2 + uVar3);
    }
    return 0;
  }
  return 1;
}

// CMAC_resume @ 14f7231c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMAC_resume(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x11) == -1) {
    return 0;
  }
  uVar1 = EVP_EncryptInit_ex(*param_1,0,0,0,param_1 + 9);
  return uVar1;
}

// FUN_14f723210 @ 14f723210

void FUN_14f723210(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  longlong lVar7;
  
  bVar5 = *param_2;
  iVar2 = param_3 + -1;
  lVar7 = (longlong)iVar2;
  bVar1 = (char)bVar5 >> 7;
  iVar3 = 0;
  if (0 < iVar2) {
    pbVar6 = param_1;
    bVar4 = bVar5;
    do {
      bVar5 = pbVar6[(longlong)(param_2 + (1 - (longlong)param_1))];
      *pbVar6 = bVar5 >> 7 | bVar4 * '\x02';
      lVar7 = lVar7 + -1;
      pbVar6 = pbVar6 + 1;
      bVar4 = bVar5;
      iVar3 = iVar2;
    } while (lVar7 != 0);
  }
  bVar4 = 0x1b;
  if (param_3 == 0x10) {
    bVar4 = 0x87;
  }
  param_1[iVar3] = bVar4 & bVar1 ^ bVar5 * '\x02';
  return;
}

