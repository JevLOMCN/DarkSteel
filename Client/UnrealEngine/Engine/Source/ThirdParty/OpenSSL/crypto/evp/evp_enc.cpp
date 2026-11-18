// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 25

// EVP_CIPHER_CTX_copy @ 14f6c0ec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_CIPHER_CTX_copy(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f6c0ed0;
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    if (param_2[1] != 0) {
      iVar2 = ENGINE_init();
      if (iVar2 == 0) {
        uVar4 = 0x2b6;
        uVar3 = 0x26;
        goto LAB_14f6c1017;
      }
    }
    EVP_CIPHER_CTX_reset(param_1);
    lVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar1;
    lVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar1;
    lVar1 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar1;
    lVar1 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = lVar1;
    lVar1 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = lVar1;
    lVar1 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = lVar1;
    lVar1 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = lVar1;
    lVar1 = param_2[0xf];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = lVar1;
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x84);
    lVar1 = param_2[0x11];
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x8c);
    *(int *)(param_1 + 0x10) = (int)param_2[0x10];
    *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
    *(int *)(param_1 + 0x11) = (int)lVar1;
    *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x94);
    lVar1 = param_2[0x13];
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x9c);
    *(int *)(param_1 + 0x12) = (int)param_2[0x12];
    *(undefined4 *)((longlong)param_1 + 0x94) = uVar3;
    *(int *)(param_1 + 0x13) = (int)lVar1;
    *(undefined4 *)((longlong)param_1 + 0x9c) = uVar4;
    if ((param_2[0xe] != 0) && (*(int *)(*param_2 + 0x30) != 0)) {
      _Dst = (void *)CRYPTO_malloc((longlong)*(int *)(*param_2 + 0x30),"crypto\\evp\\evp_enc.c",
                                   0x2bf);
      param_1[0xe] = (longlong)_Dst;
      if (_Dst == (void *)0x0) {
        *param_1 = 0;
        uVar3 = 0x41;
        uVar4 = 0x2c2;
        goto LAB_14f6c1017;
      }
      memcpy(_Dst,(void *)param_2[0xe],(longlong)*(int *)(*param_2 + 0x30));
    }
    if ((*(uint *)(*param_2 + 0x10) & 0x400) != 0) {
      iVar2 = (**(code **)(*param_2 + 0x48))(param_2,8,0,param_1);
      if (iVar2 == 0) {
        *param_1 = 0;
        uVar3 = 0x86;
        uVar4 = 0x2cb;
        goto LAB_14f6c1017;
      }
    }
    return 1;
  }
  uVar4 = 0x2b0;
  uVar3 = 0x6f;
LAB_14f6c1017:
  ERR_put_error(6,0xa3,uVar3,"crypto\\evp\\evp_enc.c",uVar4,uVar5);
  return 0;
}

// EVP_CIPHER_CTX_ctrl @ 14f6c1040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_CIPHER_CTX_ctrl(longlong *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (*param_1 == 0) {
    uVar3 = 0x292;
    uVar2 = 0x83;
  }
  else {
    pcVar1 = *(code **)(*param_1 + 0x48);
    if (pcVar1 == (code *)0x0) {
      uVar3 = 0x297;
      uVar2 = 0x84;
    }
    else {
      uVar2 = (*pcVar1)();
      if ((int)uVar2 != -1) {
        return uVar2;
      }
      uVar3 = 0x29e;
      uVar2 = 0x85;
    }
  }
  ERR_put_error(6,0x7c,uVar2,"crypto\\evp\\evp_enc.c",uVar3);
  return 0;
}

// EVP_CIPHER_CTX_free @ 14f6c10c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_CIPHER_CTX_free(undefined8 param_1)

{
  EVP_CIPHER_CTX_reset();
  CRYPTO_free(param_1,"crypto\\evp\\evp_enc.c",0x31);
  return;
}

// EVP_CIPHER_CTX_new @ 14f6c1100

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_CIPHER_CTX_new(void)

{
  CRYPTO_zalloc(0xa0,"crypto\\evp\\evp_enc.c",0x2b);
  return;
}

// EVP_CIPHER_CTX_rand_key @ 14f6c1130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint EVP_CIPHER_CTX_rand_key(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  lVar1 = *param_1;
  if ((*(uint *)(lVar1 + 0x10) & 0x200) == 0) {
    iVar3 = RAND_priv_bytes(param_2,(int)param_1[0xd]);
    return (uint)(0 < iVar3);
  }
  if (lVar1 == 0) {
    uVar5 = 0x292;
    uVar4 = 0x83;
  }
  else if (*(code **)(lVar1 + 0x48) == (code *)0x0) {
    uVar5 = 0x297;
    uVar4 = 0x84;
  }
  else {
    uVar2 = (**(code **)(lVar1 + 0x48))(param_1,6,0,param_2);
    if (uVar2 != 0xffffffff) {
      return uVar2;
    }
    uVar5 = 0x29e;
    uVar4 = 0x85;
  }
  ERR_put_error(6,0x7c,uVar4,"crypto\\evp\\evp_enc.c",uVar5);
  return 0;
}

// EVP_CIPHER_CTX_reset @ 14f6c11e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_CIPHER_CTX_reset(longlong *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (param_1 != (longlong *)0x0) {
    if (*param_1 != 0) {
      pcVar1 = *(code **)(*param_1 + 0x28);
      if (pcVar1 != (code *)0x0) {
        uVar2 = (*pcVar1)();
        if ((int)uVar2 == 0) {
          return uVar2;
        }
      }
      if ((param_1[0xe] != 0) && (*(int *)(*param_1 + 0x30) != 0)) {
        OPENSSL_cleanse();
      }
    }
    CRYPTO_free(param_1[0xe],"crypto\\evp\\evp_enc.c",0x21);
    ENGINE_finish(param_1[1]);
    memset(param_1,0,0xa0);
  }
  return 1;
}

// EVP_CIPHER_CTX_set_key_length @ 14f6c1270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_CIPHER_CTX_set_key_length(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar1 = *param_1;
  if ((char)*(uint *)(lVar1 + 0x10) < '\0') {
    if (lVar1 == 0) {
      uVar4 = 0x292;
      uVar2 = 0x7c;
      uVar3 = 0x83;
    }
    else if (*(code **)(lVar1 + 0x48) == (code *)0x0) {
      uVar4 = 0x297;
      uVar2 = 0x7c;
      uVar3 = 0x84;
    }
    else {
      uVar3 = (**(code **)(lVar1 + 0x48))(param_1,1,param_2);
      if ((int)uVar3 != -1) {
        return uVar3;
      }
      uVar4 = 0x29e;
      uVar2 = 0x7c;
      uVar3 = 0x85;
    }
  }
  else {
    if ((int)param_1[0xd] == param_2) {
      return 1;
    }
    if ((0 < param_2) && ((*(uint *)(lVar1 + 0x10) & 8) != 0)) {
      *(int *)(param_1 + 0xd) = param_2;
      return 1;
    }
    uVar2 = 0x7a;
    uVar4 = 0x280;
    uVar3 = 0x82;
  }
  ERR_put_error(6,uVar2,uVar3,"crypto\\evp\\evp_enc.c",uVar4);
  return 0;
}

// EVP_CIPHER_CTX_set_padding @ 14f6c1330

undefined8 EVP_CIPHER_CTX_set_padding(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffeff;
    return 1;
  }
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x100;
  return 1;
}

// EVP_CipherFinal @ 14f6c1350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_CipherFinal(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    EVP_EncryptFinal_ex();
    return;
  }
  EVP_DecryptFinal_ex();
  return;
}

// EVP_CipherFinal_ex @ 14f6c1380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_CipherFinal_ex(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    EVP_EncryptFinal_ex();
    return;
  }
  EVP_DecryptFinal_ex();
  return;
}

// EVP_CipherInit @ 14f6c13b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_CipherInit(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                   undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (param_2 != 0) {
    uVar1 = 1;
    EVP_CIPHER_CTX_reset();
  }
  EVP_CipherInit_ex(param_1,param_2,0,param_3,param_4,CONCAT44(uVar1,param_5));
  return;
}

// EVP_CipherInit_ex @ 14f6c1420

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EVP_CipherInit_ex(longlong *param_1,int *param_2,longlong param_3,longlong param_4,longlong *param_5
                 ,int param_6)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *_Src;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f6c143f;
  if (param_6 == -1) {
    uVar7 = *(uint *)(param_1 + 2);
  }
  else {
    uVar7 = (uint)(param_6 != 0);
    *(uint *)(param_1 + 2) = uVar7;
  }
  if (((param_1[1] == 0) || ((int *)*param_1 == (int *)0x0)) ||
     ((param_2 != (int *)0x0 && (*param_2 != *(int *)*param_1)))) {
    if (param_2 != (int *)0x0) {
      if (((*param_1 != 0) || (param_1[1] != 0)) || (param_1[0xe] != 0)) {
        uVar6 = *(undefined4 *)((longlong)param_1 + 0x6c);
        EVP_CIPHER_CTX_reset(param_1);
        *(uint *)(param_1 + 2) = uVar7;
        *(undefined4 *)((longlong)param_1 + 0x6c) = uVar6;
      }
      if (param_3 == 0) {
        param_3 = ENGINE_get_cipher_engine(*param_2);
LAB_14f6c1508:
        if (param_3 == 0) {
          param_1[1] = 0;
        }
        else {
          param_2 = (int *)ENGINE_get_cipher(param_3,*param_2);
          if (param_2 == (int *)0x0) {
            ENGINE_finish(param_3);
            uVar8 = 0x71;
            goto LAB_14f6c14dd;
          }
          param_1[1] = param_3;
        }
        *param_1 = (longlong)param_2;
        if (param_2[0xc] == 0) {
          param_1[0xe] = 0;
        }
        else {
          lVar3 = CRYPTO_zalloc((longlong)param_2[0xc],"crypto\\evp\\evp_enc.c",0x81);
          param_1[0xe] = lVar3;
          if (lVar3 == 0) {
            *param_1 = 0;
            uVar6 = 0x41;
            uVar8 = 0x84;
            goto LAB_14f6c14e3;
          }
        }
        iVar1 = param_2[2];
        *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) & 1;
        *(int *)(param_1 + 0xd) = iVar1;
        if (((*(byte *)(*param_1 + 0x10) & 0x40) == 0) ||
           (iVar1 = EVP_CIPHER_CTX_ctrl(param_1,0,0,0), iVar1 != 0)) goto LAB_14f6c15cb;
        *param_1 = 0;
        uVar8 = 0x90;
      }
      else {
        iVar1 = ENGINE_init(param_3);
        if (iVar1 != 0) goto LAB_14f6c1508;
        uVar8 = 0x66;
      }
LAB_14f6c14dd:
      uVar6 = 0x86;
      goto LAB_14f6c14e3;
    }
    if (*param_1 == 0) {
      uVar8 = 0x95;
      uVar6 = 0x83;
      goto LAB_14f6c14e3;
    }
  }
LAB_14f6c15cb:
  if ((0x10 < *(uint *)(*param_1 + 4)) || ((0x10102U >> (*(uint *)(*param_1 + 4) & 0x1f) & 1) == 0))
  {
    OPENSSL_die("assertion failed: ctx->cipher->block_size == 1 || ctx->cipher->block_size == 8 || ctx->cipher->block_size == 16"
                ,"crypto\\evp\\evp_enc.c",0x9e);
  }
  if ((*(byte *)((longlong)param_1 + 0x6c) & 1) == 0) {
    uVar4 = EVP_CIPHER_CTX_cipher(param_1);
    uVar2 = EVP_CIPHER_flags(uVar4);
    if ((uVar2 & 0xf0007) == 0x10002) {
      uVar8 = 0xa2;
      uVar6 = 0xaa;
LAB_14f6c14e3:
      ERR_put_error(6,0x7b,uVar6,"crypto\\evp\\evp_enc.c",uVar8,uVar9);
      return 0;
    }
  }
  uVar9 = EVP_CIPHER_CTX_cipher(param_1);
  uVar5 = EVP_CIPHER_flags(uVar9);
  if ((uVar5 & 0x10) == 0) {
    uVar9 = EVP_CIPHER_CTX_cipher(param_1);
    uVar2 = EVP_CIPHER_flags(uVar9);
    switch(uVar2 & 0xf0007) {
    case 0:
    case 1:
      goto switchD_14f6c167a_caseD_0;
    case 3:
    case 4:
      *(undefined4 *)(param_1 + 0xb) = 0;
    case 2:
      iVar1 = EVP_CIPHER_CTX_iv_length(param_1);
      if (0x10 < iVar1) {
        OPENSSL_die("assertion failed: EVP_CIPHER_CTX_iv_length(ctx) <= (int)sizeof(ctx->iv)",
                    "crypto\\evp\\evp_enc.c",0xb6);
      }
      if (param_5 != (longlong *)0x0) {
        iVar1 = EVP_CIPHER_CTX_iv_length(param_1);
        memcpy(param_1 + 3,param_5,(longlong)iVar1);
      }
      iVar1 = EVP_CIPHER_CTX_iv_length(param_1);
      _Src = param_1 + 3;
      break;
    case 5:
      *(undefined4 *)(param_1 + 0xb) = 0;
      if (param_5 == (longlong *)0x0) goto switchD_14f6c167a_caseD_0;
      iVar1 = EVP_CIPHER_CTX_iv_length(param_1);
      _Src = param_5;
      break;
    default:
      goto LAB_14f6c1730;
    }
    memcpy(param_1 + 5,_Src,(longlong)iVar1);
  }
switchD_14f6c167a_caseD_0:
  if (((param_4 == 0) && ((*(byte *)(*param_1 + 0x10) & 0x20) == 0)) ||
     (iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_4,param_5,uVar7), iVar1 != 0)) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0xf) = 0;
    *(int *)((longlong)param_1 + 0x7c) = *(int *)(*param_1 + 4) + -1;
    return 1;
  }
LAB_14f6c1730:
  return 0;
}

// EVP_CipherUpdate @ 14f6c1770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_CipherUpdate(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_14f6c1f80();
    return;
  }
  EVP_DecryptUpdate();
  return;
}

// EVP_DecryptFinal @ 14f6c17b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_DecryptFinal(void)

{
  EVP_DecryptFinal_ex();
  return;
}

// EVP_DecryptFinal_ex @ 14f6c17d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_DecryptFinal_ex(longlong *param_1,undefined1 *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14f6c17e6;
  if ((int)param_1[2] != 0) {
    ERR_put_error(6,0x65,0x94,"crypto\\evp\\evp_enc.c",0x23e,0x14f6c17e6);
    return 0;
  }
  iVar2 = 0;
  *param_3 = 0;
  lVar3 = *param_1;
  if ((*(uint *)(lVar3 + 0x10) & 0x100000) != 0) {
    iVar2 = (**(code **)(lVar3 + 0x20))(param_1,param_2,0,0);
    if (-1 < iVar2) {
      *param_3 = iVar2;
      return 1;
    }
    return 0;
  }
  uVar4 = *(uint *)(lVar3 + 4);
  uVar6 = (ulonglong)uVar4;
  if ((*(uint *)((longlong)param_1 + 0x6c) & 0x100) == 0) {
    if (1 < uVar4) {
      if ((*(int *)((longlong)param_1 + 0x14) == 0) && ((int)param_1[0xf] != 0)) {
        if (0x20 < uVar4) {
          OPENSSL_die("assertion failed: b <= sizeof(ctx->final)","crypto\\evp\\evp_enc.c",0x25c);
        }
        bVar1 = *(byte *)((ulonglong)(uVar4 - 1) + 0x80 + (longlong)param_1);
        if ((bVar1 != 0) && ((int)(uint)bVar1 <= (int)uVar4)) {
          uVar4 = (uint)bVar1;
          if (bVar1 != 0) {
            do {
              uVar6 = (ulonglong)((int)uVar6 - 1);
              if (*(byte *)(uVar6 + 0x80 + (longlong)param_1) != uVar4) {
                uVar7 = 0x269;
                goto LAB_14f6c193b;
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < (int)uVar4);
          }
          iVar2 = *(int *)(*param_1 + 4) - uVar4;
          lVar3 = (longlong)iVar2;
          if (0 < iVar2) {
            puVar5 = param_2;
            do {
              *puVar5 = puVar5[(longlong)param_1 + (0x80 - (longlong)param_2)];
              puVar5 = puVar5 + 1;
              lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
          }
          *param_3 = iVar2;
          return 1;
        }
        uVar7 = 0x264;
LAB_14f6c193b:
        ERR_put_error(6,0x65,100,"crypto\\evp\\evp_enc.c",uVar7,uVar8);
        return 0;
      }
      uVar7 = 0x259;
      uVar8 = 0x6d;
      goto LAB_14f6c1965;
    }
  }
  else if (*(int *)((longlong)param_1 + 0x14) != 0) {
    uVar7 = 0x251;
    uVar8 = 0x8a;
LAB_14f6c1965:
    ERR_put_error(6,0x65,uVar8,"crypto\\evp\\evp_enc.c",uVar7,0x14f6c17e6);
    return 0;
  }
  *param_3 = 0;
  return 1;
}

// EVP_DecryptInit @ 14f6c19b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_DecryptInit(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  
  uVar1 = 0x14f6c19ca;
  if (param_2 != 0) {
    EVP_CIPHER_CTX_reset();
  }
  EVP_CipherInit_ex(param_1,param_2,0,param_3,param_4,uVar1 & 0xffffffff00000000);
  return;
}

// EVP_DecryptInit_ex @ 14f6c1a20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_DecryptInit_ex(void)

{
  EVP_CipherInit_ex();
  return;
}

// EVP_DecryptUpdate @ 14f6c1a50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong EVP_DecryptUpdate(longlong *param_1,void *param_2,int *param_3,void *param_4,uint param_5)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulonglong _Size;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14f6c1a68;
  uVar6 = (ulonglong)(int)param_5;
  if ((int)param_1[2] != 0) {
    ERR_put_error(6,0xa6,0x94,"crypto\\evp\\evp_enc.c",0x1da,0x14f6c1a68);
    return 0;
  }
  uVar1 = *(uint *)(*param_1 + 4);
  _Size = (ulonglong)uVar1;
  iVar3 = EVP_CIPHER_CTX_test_flags(param_1,0x2000);
  uVar5 = uVar6;
  if (iVar3 != 0) {
    uVar5 = uVar6 + 7 >> 3;
  }
  if (((int)param_5 < 0) ||
     ((param_5 == 0 && (uVar4 = EVP_CIPHER_flags(*param_1), (uVar4 & 0xf0007) != 7)))) {
    *param_3 = 0;
    return (ulonglong)(param_5 == 0);
  }
  if ((*(uint *)(*param_1 + 0x10) & 0x100000) == 0) {
    if ((*(uint *)((longlong)param_1 + 0x6c) & 0x100) != 0) {
      uVar6 = FUN_14f6c1f80(param_1,param_2,param_3,param_4,param_5);
      return uVar6;
    }
    if (0x20 < uVar1) {
      OPENSSL_die("assertion failed: b <= sizeof(ctx->final)","crypto\\evp\\evp_enc.c",0x200);
    }
    if ((int)param_1[0xf] == 0) {
      bVar2 = false;
    }
    else {
      if ((param_2 == param_4) ||
         (uVar1 != 0 &&
          ((-_Size < (ulonglong)((longlong)param_2 - (longlong)param_4) ||
           (ulonglong)((longlong)param_2 - (longlong)param_4) < _Size) && param_2 != param_4))) {
        uVar7 = 0x206;
        goto LAB_14f6c1c69;
      }
      if (0x7fffffff - uVar1 < (~(uVar1 - 1) & param_5)) {
        ERR_put_error(6,0xa6,0xb8,"crypto\\evp\\evp_enc.c",0x213,uVar8);
        return 0;
      }
      memcpy(param_2,param_1 + 0x10,_Size);
      param_2 = (void *)((longlong)param_2 + _Size);
      bVar2 = true;
    }
    iVar3 = FUN_14f6c1f80(param_1,param_2,param_3,param_4,param_5);
    if (iVar3 != 0) {
      if ((uVar1 < 2) || (*(int *)((longlong)param_1 + 0x14) != 0)) {
        *(undefined4 *)(param_1 + 0xf) = 0;
      }
      else {
        *param_3 = *param_3 - uVar1;
        *(undefined4 *)(param_1 + 0xf) = 1;
        memcpy(param_1 + 0x10,(void *)((longlong)*param_3 + (longlong)param_2),_Size);
      }
      if (bVar2) {
        *param_3 = *param_3 + uVar1;
      }
      return 1;
    }
  }
  else {
    if ((uVar1 != 1) ||
       (uVar5 == 0 ||
        ((ulonglong)((longlong)param_2 - (longlong)param_4) <= -uVar5 &&
         uVar5 <= (ulonglong)((longlong)param_2 - (longlong)param_4) || param_2 == param_4))) {
      iVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_4,uVar6);
      if (iVar3 < 0) {
        *param_3 = 0;
        return 0;
      }
      *param_3 = iVar3;
      return 1;
    }
    uVar7 = 0x1f0;
LAB_14f6c1c69:
    ERR_put_error(6,0xa6,0xa2,"crypto\\evp\\evp_enc.c",uVar7,uVar8);
  }
  return 0;
}

// EVP_EncryptFinal @ 14f6c1d20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_EncryptFinal(void)

{
  EVP_EncryptFinal_ex();
  return;
}

// EVP_EncryptFinal_ex @ 14f6c1d40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_EncryptFinal_ex(longlong *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f6c1d56;
  if ((int)param_1[2] == 0) {
    ERR_put_error(6,0x7f,0x94,"crypto\\evp\\evp_enc.c",0x1a8,0x14f6c1d56);
    return 0;
  }
  lVar3 = *param_1;
  if ((*(uint *)(lVar3 + 0x10) & 0x100000) == 0) {
    uVar2 = *(uint *)(lVar3 + 4);
    if (0x20 < uVar2) {
      OPENSSL_die("assertion failed: b <= sizeof(ctx->buf)","crypto\\evp\\evp_enc.c",0x1b6);
    }
    if (uVar2 != 1) {
      uVar1 = *(uint *)((longlong)param_1 + 0x14);
      if ((*(uint *)((longlong)param_1 + 0x6c) & 0x100) == 0) {
        if (uVar1 < uVar2) {
          puVar4 = (undefined1 *)((longlong)param_1 + (ulonglong)uVar1 + 0x38);
          for (lVar3 = (longlong)(int)(uVar2 - uVar1); lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar4 = (char)(uVar2 - uVar1);
            puVar4 = puVar4 + 1;
          }
        }
        uVar5 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_1 + 7,uVar2);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        *param_3 = uVar2;
        return uVar5;
      }
      if (uVar1 != 0) {
        ERR_put_error(6,0x7f,0x8a,"crypto\\evp\\evp_enc.c",0x1bf,uVar5);
        return 0;
      }
    }
    *param_3 = 0;
    return 1;
  }
  uVar2 = (**(code **)(lVar3 + 0x20))(param_1,param_2,0,0);
  if ((int)uVar2 < 0) {
    return 0;
  }
  *param_3 = uVar2;
  return 1;
}

// EVP_EncryptInit @ 14f6c1e90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_EncryptInit(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (param_2 != 0) {
    uVar1 = 1;
    EVP_CIPHER_CTX_reset();
  }
  EVP_CipherInit_ex(param_1,param_2,0,param_3,param_4,CONCAT44(uVar1,1));
  return;
}

// EVP_EncryptInit_ex @ 14f6c1f00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_EncryptInit_ex(void)

{
  EVP_CipherInit_ex();
  return;
}

// EVP_EncryptUpdate @ 14f6c1f30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_EncryptUpdate(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    ERR_put_error(6,0xa7,0x94,"crypto\\evp\\evp_enc.c",0x193);
    return 0;
  }
  uVar1 = FUN_14f6c1f80();
  return uVar1;
}

// FUN_14f6c1f80 @ 14f6c1f80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6c1f80(longlong *param_1,void *param_2,uint *param_3,void *param_4,uint param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  size_t sVar7;
  size_t _Size;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x14f6c1f9d;
  _Size = (size_t)(int)param_5;
  iVar2 = EVP_CIPHER_CTX_test_flags(param_1,0x2000);
  sVar7 = _Size;
  if (iVar2 != 0) {
    sVar7 = _Size + 7 >> 3;
  }
  uVar4 = *(uint *)(*param_1 + 4);
  if (((int)param_5 < 0) || ((param_5 == 0 && (uVar3 = EVP_CIPHER_flags(), (uVar3 & 0xf0007) != 7)))
     ) {
    *param_3 = 0;
    return param_5 == 0;
  }
  lVar1 = *param_1;
  if ((*(uint *)(lVar1 + 0x10) & 0x100000) == 0) {
    iVar2 = *(int *)((longlong)param_1 + 0x14);
    uVar5 = ((longlong)iVar2 - (longlong)param_4) + (longlong)param_2;
    if (sVar7 == 0 || (uVar5 <= -sVar7 && sVar7 <= uVar5 || uVar5 == 0)) {
      if ((iVar2 == 0) && ((*(uint *)((longlong)param_1 + 0x7c) & param_5) == 0)) {
        iVar2 = (**(code **)(lVar1 + 0x20))(param_1,param_2,param_4,_Size);
        if (iVar2 == 0) {
          *param_3 = 0;
          return false;
        }
        *param_3 = param_5;
        return true;
      }
      if (0x20 < (int)uVar4) {
        OPENSSL_die("assertion failed: bl <= (int)sizeof(ctx->buf)","crypto\\evp\\evp_enc.c",0x15f);
      }
      if (iVar2 == 0) {
        *param_3 = 0;
LAB_14f6c21dd:
        uVar4 = uVar4 - 1 & param_5;
        iVar2 = param_5 - uVar4;
        if (0 < iVar2) {
          iVar6 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_4,(longlong)iVar2);
          if (iVar6 == 0) {
            return false;
          }
          *param_3 = *param_3 + iVar2;
        }
        if (uVar4 != 0) {
          memcpy(param_1 + 7,(void *)((longlong)iVar2 + (longlong)param_4),(longlong)(int)uVar4);
        }
        *(uint *)((longlong)param_1 + 0x14) = uVar4;
        return true;
      }
      iVar6 = uVar4 - iVar2;
      if ((int)param_5 < iVar6) {
        memcpy((void *)((longlong)param_1 + (longlong)iVar2 + 0x38),param_4,_Size);
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + param_5;
        *param_3 = 0;
        return true;
      }
      param_5 = param_5 - iVar6;
      if ((int)(~(uVar4 - 1) & param_5) <= (int)(0x7fffffff - uVar4)) {
        memcpy((void *)((longlong)param_1 + (longlong)iVar2 + 0x38),param_4,(longlong)iVar6);
        param_4 = (void *)((longlong)param_4 + (longlong)iVar6);
        iVar2 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_1 + 7,(longlong)(int)uVar4);
        if (iVar2 == 0) {
          return false;
        }
        param_2 = (void *)((longlong)param_2 + (longlong)(int)uVar4);
        *param_3 = uVar4;
        goto LAB_14f6c21dd;
      }
      uVar9 = 0x172;
      uVar8 = 0xb8;
      goto LAB_14f6c204f;
    }
    uVar9 = 0x151;
  }
  else {
    if ((uVar4 != 1) ||
       (sVar7 == 0 ||
        ((ulonglong)((longlong)param_2 - (longlong)param_4) <= -sVar7 &&
         sVar7 <= (ulonglong)((longlong)param_2 - (longlong)param_4) || param_2 == param_4))) {
      uVar4 = (**(code **)(lVar1 + 0x20))(param_1,param_2,param_4,_Size);
      if ((int)uVar4 < 0) {
        return false;
      }
      *param_3 = uVar4;
      return true;
    }
    uVar9 = 0x144;
  }
  uVar8 = 0xa2;
LAB_14f6c204f:
  ERR_put_error(6,0xdb,uVar8,"crypto\\evp\\evp_enc.c",uVar9,uVar10);
  return false;
}

// is_partially_overlapping @ 14f6c2260

bool is_partially_overlapping(longlong param_1,longlong param_2,ulonglong param_3)

{
  return ((-param_3 < (ulonglong)(param_1 - param_2) || (ulonglong)(param_1 - param_2) < param_3) &&
         param_1 != param_2) && param_3 != 0;
}

