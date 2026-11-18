// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 71

// FUN_14f6c22b0 @ 14f6c22b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6c22b0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  lVar4 = EVP_CIPHER_CTX_get_cipher_data();
  plVar1 = (longlong *)(lVar4 + 0x1f0);
  if ((((*plVar1 != 0) && (*(longlong *)(lVar4 + 0x1f8) != 0)) && (param_2 != 0)) &&
     ((param_3 != 0 && (0xf < param_4)))) {
    if (*(longlong *)(lVar4 + 0x210) != 0) {
      uVar5 = EVP_CIPHER_CTX_iv_noconst();
      (**(code **)(lVar4 + 0x210))
                (param_3,param_2,param_4,*plVar1,*(undefined8 *)(lVar4 + 0x1f8),uVar5);
      return 1;
    }
    uVar2 = EVP_CIPHER_CTX_encrypting(param_1);
    uVar5 = EVP_CIPHER_CTX_iv_noconst(param_1);
    iVar3 = CRYPTO_xts128_encrypt(plVar1,uVar5,param_3,param_2,param_4,CONCAT44(uVar6,uVar2));
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}

// FUN_14f6c23b0 @ 14f6c23b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6c23b0(undefined8 param_1,longlong param_2,void *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  void *_Dst;
  undefined8 uVar4;
  
  uVar4 = 0x14f6c23d0;
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_14f6c2461;
  iVar1 = EVP_CIPHER_CTX_key_length(param_1);
  aesni_set_encrypt_key(param_2,iVar1 << 3,lVar2);
  CRYPTO_ccm128_init(lVar2 + 0x118,*(undefined4 *)(lVar2 + 0x10c),*(undefined4 *)(lVar2 + 0x108),
                     lVar2,&aesni_encrypt,uVar4);
  *(undefined4 *)(lVar2 + 0xf8) = 1;
  pcVar3 = aesni_ccm64_decrypt_blocks;
  if (param_4 != 0) {
    pcVar3 = aesni_ccm64_encrypt_blocks;
  }
  *(code **)(lVar2 + 0x150) = pcVar3;
LAB_14f6c2461:
  if (param_3 != (void *)0x0) {
    iVar1 = *(int *)(lVar2 + 0x108);
    _Dst = (void *)EVP_CIPHER_CTX_iv_noconst(param_1);
    memcpy(_Dst,param_3,(longlong)(0xf - iVar1));
    *(undefined4 *)(lVar2 + 0xfc) = 1;
  }
  return 1;
}

// FUN_14f6c24c0 @ 14f6c24c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14f6c24c0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_98;
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  lVar6 = lVar3 + 0x118;
  if (*(int *)(lVar3 + 0xf8) == 0) {
    return 0xffffffff;
  }
  if (-1 < *(int *)(lVar3 + 0x110)) {
    uVar4 = FUN_14f6c5550(param_1,param_2,param_3,param_4);
    return uVar4;
  }
  if ((param_3 == 0) && (param_2 != 0)) {
    return 0;
  }
  if (*(int *)(lVar3 + 0xfc) == 0) {
    return 0xffffffff;
  }
  if (param_2 == 0) {
    if (param_3 == 0) {
      iVar2 = *(int *)(lVar3 + 0x108);
      uVar5 = EVP_CIPHER_CTX_iv_noconst(param_1);
      iVar2 = CRYPTO_ccm128_setiv(lVar6,uVar5,(longlong)(0xf - iVar2),param_4);
      if (iVar2 == 0) {
        *(undefined4 *)(lVar3 + 0x104) = 1;
        return param_4 & 0xffffffff;
      }
    }
    else if ((*(int *)(lVar3 + 0x104) != 0) || (param_4 == 0)) {
      CRYPTO_ccm128_aad(lVar6,param_3,param_4);
      return param_4 & 0xffffffff;
    }
    return 0xffffffff;
  }
  iVar2 = EVP_CIPHER_CTX_encrypting(param_1);
  if ((iVar2 == 0) && (*(int *)(lVar3 + 0x100) == 0)) {
    return 0xffffffff;
  }
  if (*(int *)(lVar3 + 0x104) == 0) {
    iVar2 = *(int *)(lVar3 + 0x108);
    uVar5 = EVP_CIPHER_CTX_iv_noconst(param_1);
    iVar2 = CRYPTO_ccm128_setiv(lVar6,uVar5,(longlong)(0xf - iVar2),param_4);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    *(undefined4 *)(lVar3 + 0x104) = 1;
  }
  iVar2 = EVP_CIPHER_CTX_encrypting(param_1);
  lVar1 = *(longlong *)(lVar3 + 0x150);
  if (iVar2 != 0) {
    if (lVar1 == 0) {
      iVar2 = CRYPTO_ccm128_encrypt();
    }
    else {
      local_78 = lVar1;
      iVar2 = CRYPTO_ccm128_encrypt_ccm64();
    }
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    *(undefined4 *)(lVar3 + 0x100) = 1;
    return param_4 & 0xffffffff;
  }
  if (lVar1 == 0) {
    iVar2 = CRYPTO_ccm128_decrypt(lVar6,param_3,param_2,param_4);
  }
  else {
    local_78 = lVar1;
    iVar2 = CRYPTO_ccm128_decrypt_ccm64();
  }
  uVar4 = 0xffffffff;
  if ((iVar2 == 0) &&
     (lVar6 = CRYPTO_ccm128_tag(lVar6,local_68,(longlong)*(int *)(lVar3 + 0x10c)),
     uVar4 = 0xffffffff, lVar6 != 0)) {
    iVar2 = *(int *)(lVar3 + 0x10c);
    uVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
    iVar2 = CRYPTO_memcmp(local_68,uVar5,(longlong)iVar2);
    if ((iVar2 == 0) && (uVar4 = param_4 & 0xffffffff, (int)param_4 != -1)) goto LAB_14f6c26dd;
  }
  OPENSSL_cleanse(param_2,param_4);
LAB_14f6c26dd:
  *(undefined8 *)(lVar3 + 0xfc) = 0;
  *(undefined4 *)(lVar3 + 0x104) = 0;
  return uVar4;
}

// FUN_14f6c2720 @ 14f6c2720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6c2720(undefined8 param_1,longlong param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  undefined8 uVar3;
  
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_14f6c27a8;
  iVar1 = EVP_CIPHER_CTX_encrypting(param_1);
  if (iVar1 == 0) {
    iVar1 = EVP_CIPHER_CTX_key_length(param_1);
    AES_set_decrypt_key(param_2,iVar1 << 3,lVar2);
  }
  else {
    iVar1 = EVP_CIPHER_CTX_key_length(param_1);
    AES_set_encrypt_key(param_2,iVar1 << 3,lVar2);
  }
  if (param_3 == (void *)0x0) {
    *(undefined8 *)(lVar2 + 0xf8) = 0;
    return 1;
  }
LAB_14f6c27a8:
  iVar1 = EVP_CIPHER_CTX_iv_length(param_1);
  _Dst = (void *)EVP_CIPHER_CTX_iv_noconst(param_1);
  memcpy(_Dst,param_3,(longlong)iVar1);
  uVar3 = EVP_CIPHER_CTX_iv_noconst(param_1);
  *(undefined8 *)(lVar2 + 0xf8) = uVar3;
  return 1;
}

// FUN_14f6c2800 @ 14f6c2800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6c2800(undefined8 param_1,longlong param_2,void *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(lVar2 + 0x1f0) == 0) {
      memcpy(*(void **)(lVar2 + 0x2a8),param_3,(longlong)*(int *)(lVar2 + 0x2e8));
    }
    else {
      CRYPTO_ocb128_setiv(lVar2 + 0x1f8,param_3,(longlong)*(int *)(lVar2 + 0x2e8),
                          (longlong)*(int *)(lVar2 + 0x2ec));
    }
    *(undefined4 *)(lVar2 + 500) = 1;
    return 1;
  }
  iVar1 = EVP_CIPHER_CTX_key_length(param_1);
  aesni_set_encrypt_key(param_2,iVar1 << 3,lVar2);
  iVar1 = EVP_CIPHER_CTX_key_length(param_1);
  aesni_set_decrypt_key(param_2,iVar1 << 3,lVar2 + 0xf8);
  pcVar3 = aesni_ocb_decrypt;
  if (param_4 != 0) {
    pcVar3 = aesni_ocb_encrypt;
  }
  iVar1 = CRYPTO_ocb128_init(lVar2 + 0x1f8,lVar2,lVar2 + 0xf8,&aesni_encrypt,&aesni_decrypt,pcVar3);
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_3 != (void *)0x0) ||
     ((*(int *)(lVar2 + 500) != 0 && (param_3 = *(void **)(lVar2 + 0x2a8), param_3 != (void *)0x0)))
     ) {
    iVar1 = CRYPTO_ocb128_setiv(lVar2 + 0x1f8,param_3,(longlong)*(int *)(lVar2 + 0x2e8),
                                (longlong)*(int *)(lVar2 + 0x2ec));
    if (iVar1 != 1) {
      return 0;
    }
    *(undefined4 *)(lVar2 + 500) = 1;
  }
  *(undefined4 *)(lVar2 + 0x1f0) = 1;
  return 1;
}

// FUN_14f6c2980 @ 14f6c2980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6c2980(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar6 = 0x14f6c299e;
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  iVar1 = EVP_CIPHER_CTX_iv_length(param_1);
  bVar4 = iVar1 == 4;
  if (param_3 != 0) {
    if (((param_4 == 0) ||
        ((iVar1 = EVP_CIPHER_CTX_encrypting(param_1), iVar1 == 0 &&
         ((param_4 < 0x10 || ((param_4 & 7) != 0)))))) || ((!bVar4 && ((param_4 & 7) != 0)))) {
      return 0xffffffff;
    }
    iVar1 = is_partially_overlapping(param_2,param_3,param_4);
    if (iVar1 == 0) {
      iVar1 = EVP_CIPHER_CTX_encrypting(param_1);
      if (param_2 == 0) {
        if (iVar1 == 0) {
          return param_4 - 8;
        }
        if (bVar4) {
          param_4 = param_4 + 7 & 0xfffffffffffffff8;
        }
        return param_4 + 8;
      }
      if (bVar4) {
        if (iVar1 == 0) {
          uVar3 = CRYPTO_128_unwrap_pad();
        }
        else {
          uVar3 = CRYPTO_128_wrap_pad();
        }
      }
      else if (iVar1 == 0) {
        uVar3 = CRYPTO_128_unwrap(lVar2,*(undefined8 *)(lVar2 + 0xf8),param_2,param_3,param_4,
                                  AES_decrypt);
      }
      else {
        uVar3 = CRYPTO_128_wrap();
      }
      if (uVar3 != 0) {
        return uVar3 & 0xffffffff;
      }
      return 0xffffffff;
    }
    ERR_put_error(6,0xaa,0xa2,"crypto\\evp\\e_aes.c",CONCAT44(uVar5,0xef3),uVar6);
  }
  return 0;
}

// FUN_14f6c2b10 @ 14f6c2b10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6c2b10(undefined8 param_1,longlong param_2,void *param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  void *_Dst;
  undefined8 uVar7;
  
  uVar7 = 0x14f6c2b31;
  iVar1 = 0;
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  if ((*(int *)(lVar3 + 500) == 0) || (*(int *)(lVar3 + 0x1f0) == 0)) {
    return -1;
  }
  if (param_3 == (void *)0x0) {
    if (0 < *(int *)(lVar3 + 0x2e0)) {
      iVar1 = EVP_CIPHER_CTX_encrypting(param_1);
      if (iVar1 == 0) {
        iVar1 = CRYPTO_ocb128_decrypt
                          (lVar3 + 0x1f8,lVar3 + 0x2c0,param_2,(longlong)*(int *)(lVar3 + 0x2e0));
        if (iVar1 == 0) {
          return -1;
        }
      }
      else {
        iVar1 = CRYPTO_ocb128_encrypt();
        if (iVar1 == 0) {
          return -1;
        }
      }
      iVar1 = *(int *)(lVar3 + 0x2e0);
      *(undefined4 *)(lVar3 + 0x2e0) = 0;
    }
    if (0 < *(int *)(lVar3 + 0x2e4)) {
      iVar2 = CRYPTO_ocb128_aad(lVar3 + 0x1f8,lVar3 + 0x2d0,(longlong)*(int *)(lVar3 + 0x2e4));
      if (iVar2 == 0) {
        return -1;
      }
      *(undefined4 *)(lVar3 + 0x2e4) = 0;
    }
    iVar2 = EVP_CIPHER_CTX_encrypting(param_1);
    if (iVar2 == 0) {
      if (*(int *)(lVar3 + 0x2ec) < 0) {
        return -1;
      }
      iVar2 = CRYPTO_ocb128_finish(lVar3 + 0x1f8,lVar3 + 0x2b0,(longlong)*(int *)(lVar3 + 0x2ec));
      if (iVar2 != 0) {
        return -1;
      }
    }
    else {
      iVar2 = CRYPTO_ocb128_tag(lVar3 + 0x1f8,lVar3 + 0x2b0,0x10);
      if (iVar2 != 1) {
        return -1;
      }
    }
    *(undefined4 *)(lVar3 + 500) = 0;
    return iVar1;
  }
  if (param_2 == 0) {
    _Dst = (void *)(lVar3 + 0x2d0);
    puVar6 = (uint *)(lVar3 + 0x2e4);
  }
  else {
    puVar6 = (uint *)(lVar3 + 0x2e0);
    _Dst = (void *)(lVar3 + 0x2c0);
    iVar2 = is_partially_overlapping((int)*puVar6 + param_2,param_3,param_4);
    if (iVar2 != 0) {
      ERR_put_error(6,0xa9,0xa2,"crypto\\evp\\e_aes.c",0x103a,uVar7);
      return 0;
    }
  }
  uVar4 = *puVar6;
  if ((int)uVar4 < 1) {
LAB_14f6c2c7f:
    uVar4 = (uint)param_4 & 0xf;
    uVar5 = (ulonglong)uVar4;
    if (param_4 != uVar5) {
      if (param_2 == 0) {
        iVar2 = CRYPTO_ocb128_aad(lVar3 + 0x1f8,param_3,param_4 - uVar5);
      }
      else {
        iVar2 = EVP_CIPHER_CTX_encrypting(param_1);
        if (iVar2 == 0) {
          iVar2 = CRYPTO_ocb128_decrypt(lVar3 + 0x1f8,param_3,param_2,param_4 - uVar5);
        }
        else {
          iVar2 = CRYPTO_ocb128_encrypt();
        }
      }
      if (iVar2 == 0) goto LAB_14f6c2ca8;
      iVar1 = iVar1 + ((uint)param_4 - uVar4);
      param_3 = (void *)((longlong)param_3 + (param_4 - uVar5));
    }
    if (uVar5 != 0) {
      memcpy(_Dst,param_3,uVar5);
      *puVar6 = uVar4;
    }
  }
  else {
    uVar5 = (ulonglong)(0x10 - uVar4);
    if (param_4 < uVar5) {
      memcpy((void *)((longlong)(int)uVar4 + (longlong)_Dst),param_3,param_4);
      *puVar6 = *puVar6 + (int)param_4;
      return 0;
    }
    memcpy((void *)((longlong)(int)uVar4 + (longlong)_Dst),param_3,uVar5);
    param_4 = param_4 - uVar5;
    param_3 = (void *)((longlong)param_3 + uVar5);
    if (param_2 == 0) {
      iVar1 = CRYPTO_ocb128_aad(lVar3 + 0x1f8,_Dst,0x10);
    }
    else {
      iVar1 = EVP_CIPHER_CTX_encrypting(param_1);
      if (iVar1 == 0) {
        iVar1 = CRYPTO_ocb128_decrypt(lVar3 + 0x1f8,_Dst,param_2,0x10);
      }
      else {
        iVar1 = CRYPTO_ocb128_encrypt();
      }
    }
    if (iVar1 != 0) {
      *puVar6 = 0;
      iVar1 = 0x10;
      if (param_2 != 0) {
        param_2 = param_2 + 0x10;
      }
      goto LAB_14f6c2c7f;
    }
LAB_14f6c2ca8:
    iVar1 = -1;
  }
  return iVar1;
}

// FUN_14f6c2e20 @ 14f6c2e20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6c2e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  uVar4 = EVP_CIPHER_CTX_cipher(param_1);
  uVar1 = EVP_CIPHER_flags(uVar4);
  if (((uVar1 & 0xf0007) - 1 < 2) && (param_4 == 0)) {
    if ((DAT_15540a9f4 & 0x200) != 0) {
      iVar2 = EVP_CIPHER_CTX_key_length(param_1);
      iVar2 = vpaes_set_decrypt_key(param_2,iVar2 << 3,lVar3);
      pcVar5 = vpaes_decrypt;
      pcVar6 = vpaes_cbc_encrypt;
      goto LAB_14f6c2f23;
    }
    iVar2 = EVP_CIPHER_CTX_key_length(param_1);
    iVar2 = AES_set_decrypt_key(param_2,iVar2 << 3,lVar3);
    pcVar5 = AES_decrypt;
  }
  else {
    if ((DAT_15540a9f4 & 0x200) != 0) {
      iVar2 = EVP_CIPHER_CTX_key_length(param_1);
      iVar2 = vpaes_set_encrypt_key(param_2,iVar2 << 3,lVar3);
      pcVar5 = vpaes_encrypt;
      pcVar6 = vpaes_cbc_encrypt;
      goto LAB_14f6c2f23;
    }
    iVar2 = EVP_CIPHER_CTX_key_length(param_1);
    iVar2 = AES_set_encrypt_key(param_2,iVar2 << 3,lVar3);
    pcVar5 = AES_encrypt;
  }
  pcVar6 = AES_cbc_encrypt;
LAB_14f6c2f23:
  *(code **)(lVar3 + 0xf8) = pcVar5;
  pcVar5 = (code *)0x0;
  if ((uVar1 & 0xf0007) == 2) {
    pcVar5 = pcVar6;
  }
  *(code **)(lVar3 + 0x100) = pcVar5;
  if (-1 >= iVar2) {
    ERR_put_error(6,0x85,0x8f,"crypto\\evp\\e_aes.c",0xa87);
  }
  return -1 < iVar2;
}

// FUN_14f6c2f90 @ 14f6c2f90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6c2f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  if (*(longlong *)(lVar3 + 0x100) == 0) {
    iVar2 = EVP_CIPHER_CTX_encrypting(param_1);
    if (iVar2 == 0) {
      uVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
      CRYPTO_cbc128_decrypt(param_3,param_2,param_4,lVar3,uVar4,*(undefined8 *)(lVar3 + 0xf8));
    }
    else {
      uVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
      CRYPTO_cbc128_encrypt(param_3,param_2,param_4,lVar3,uVar4,*(undefined8 *)(lVar3 + 0xf8));
    }
  }
  else {
    uVar1 = EVP_CIPHER_CTX_encrypting(param_1);
    uVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
    (**(code **)(lVar3 + 0x100))(param_3,param_2,param_4,lVar3,uVar4,CONCAT44(uVar5,uVar1));
  }
  return 1;
}

// FUN_14f6c3080 @ 14f6c3080

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6c3080(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  iVar1 = EVP_CIPHER_CTX_block_size();
  uVar4 = (ulonglong)iVar1;
  lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  if (uVar4 <= param_4) {
    lVar3 = param_3;
    do {
      (**(code **)(lVar2 + 0xf8))(lVar3,(param_2 - param_3) + lVar3,lVar2);
      lVar3 = lVar3 + uVar4;
    } while ((ulonglong)(lVar3 - param_3) <= param_4 - uVar4);
  }
  return 1;
}

// FUN_14f6c3110 @ 14f6c3110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6c3110(undefined8 *param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  switch(param_2) {
  case 0:
    *(undefined8 *)(lVar3 + 0x1f0) = 0;
    uVar1 = EVP_CIPHER_iv_length(*param_1);
    *(undefined4 *)(lVar3 + 0x2e8) = uVar1;
    uVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
    *(undefined8 *)(lVar3 + 0x2a8) = uVar4;
    uVar4 = 1;
    *(undefined4 *)(lVar3 + 0x2ec) = 0x10;
    *(undefined8 *)(lVar3 + 0x2e0) = 0;
    break;
  default:
    uVar4 = 0xffffffff;
    break;
  case 8:
    lVar5 = EVP_CIPHER_CTX_get_cipher_data(param_4);
    uVar4 = CRYPTO_ocb128_copy_ctx(lVar5 + 0x1f8,lVar3 + 0x1f8,lVar5,lVar5 + 0xf8);
    break;
  case 9:
    if (param_3 - 1 < 0xf) {
      *(uint *)(lVar3 + 0x2e8) = param_3;
      return 1;
    }
    goto LAB_14f6c31d6;
  case 0x10:
    if ((param_3 == *(uint *)(lVar3 + 0x2ec)) &&
       (iVar2 = EVP_CIPHER_CTX_encrypting(param_1), iVar2 != 0)) {
      memcpy(param_4,(void *)(lVar3 + 0x2b0),(longlong)(int)param_3);
      return 1;
    }
    goto LAB_14f6c31d6;
  case 0x11:
    if (param_4 == (undefined4 *)0x0) {
      if (param_3 < 0x11) {
        *(uint *)(lVar3 + 0x2ec) = param_3;
        return 1;
      }
    }
    else if ((param_3 == *(uint *)(lVar3 + 0x2ec)) &&
            (iVar2 = EVP_CIPHER_CTX_encrypting(param_1), iVar2 == 0)) {
      memcpy((void *)(lVar3 + 0x2b0),param_4,(longlong)(int)param_3);
      return 1;
    }
LAB_14f6c31d6:
    uVar4 = 0;
    break;
  case 0x25:
    *param_4 = *(undefined4 *)(lVar3 + 0x2e8);
    uVar4 = 1;
  }
  return uVar4;
}

// FUN_14f6c32e0 @ 14f6c32e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6c32e0(undefined8 param_1,longlong param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(lVar2 + 0x1f0) == 0) {
      memcpy(*(void **)(lVar2 + 0x2a8),param_3,(longlong)*(int *)(lVar2 + 0x2e8));
    }
    else {
      CRYPTO_ocb128_setiv(lVar2 + 0x1f8,param_3,(longlong)*(int *)(lVar2 + 0x2e8),
                          (longlong)*(int *)(lVar2 + 0x2ec));
    }
    *(undefined4 *)(lVar2 + 500) = 1;
    return 1;
  }
  if ((DAT_15540a9f4 & 0x200) == 0) {
    iVar1 = EVP_CIPHER_CTX_key_length(param_1);
    AES_set_encrypt_key(param_2,iVar1 << 3,lVar2);
    iVar1 = EVP_CIPHER_CTX_key_length(param_1);
    AES_set_decrypt_key(param_2,iVar1 << 3,lVar2 + 0xf8);
    uVar3 = CRYPTO_ocb128_init(lVar2 + 0x1f8,lVar2,lVar2 + 0xf8,AES_encrypt,AES_decrypt,0);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
  }
  else {
    iVar1 = EVP_CIPHER_CTX_key_length(param_1);
    vpaes_set_encrypt_key(param_2,iVar1 << 3,lVar2);
    iVar1 = EVP_CIPHER_CTX_key_length(param_1);
    vpaes_set_decrypt_key(param_2,iVar1 << 3,lVar2 + 0xf8);
    iVar1 = CRYPTO_ocb128_init(lVar2 + 0x1f8,lVar2,lVar2 + 0xf8,vpaes_encrypt,vpaes_decrypt,0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  if ((param_3 != (void *)0x0) ||
     ((*(int *)(lVar2 + 500) != 0 && (param_3 = *(void **)(lVar2 + 0x2a8), param_3 != (void *)0x0)))
     ) {
    iVar1 = CRYPTO_ocb128_setiv(lVar2 + 0x1f8,param_3,(longlong)*(int *)(lVar2 + 0x2e8),
                                (longlong)*(int *)(lVar2 + 0x2ec));
    if (iVar1 != 1) {
      return 0;
    }
    *(undefined4 *)(lVar2 + 500) = 1;
  }
  *(undefined4 *)(lVar2 + 0x1f0) = 1;
  return 1;
}

// FUN_14f6c34d0 @ 14f6c34d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6c34d0(void)

{
  longlong lVar1;
  
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  CRYPTO_ocb128_cleanup(lVar1 + 0x1f8);
  return 1;
}

// FUN_14f6c3500 @ 14f6c3500

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6c3500(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  if (lVar1 == 0) {
    return 0;
  }
  OPENSSL_cleanse(lVar1 + 0x100,0x1b8);
  lVar1 = *(longlong *)(lVar1 + 0x2b8);
  lVar2 = EVP_CIPHER_CTX_iv_noconst(param_1);
  if (lVar1 != lVar2) {
    CRYPTO_free(lVar1,"crypto\\evp\\e_aes.c",0xb19);
  }
  return 1;
}

// FUN_14f6c3580 @ 14f6c3580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f6c3580(undefined8 *param_1,undefined4 param_2,int param_3,undefined8 *param_4)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Dst;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  size_t _Size;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f6c3598;
  _Size = (size_t)param_3;
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  switch(param_2) {
  case 0:
    *(undefined8 *)(lVar3 + 0xf8) = 0;
    uVar8 = EVP_CIPHER_iv_length(*param_1);
    *(undefined4 *)(lVar3 + 0x2c0) = uVar8;
    *(undefined8 **)(lVar3 + 0x2b8) = param_1 + 5;
    *(undefined4 *)(lVar3 + 0x2c4) = 0xffffffff;
    *(undefined4 *)(lVar3 + 0x2c8) = 0;
    *(undefined4 *)(lVar3 + 0x2cc) = 0xffffffff;
    return 1;
  default:
    return 0xffffffff;
  case 8:
    lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_4);
    if (*(longlong *)(lVar3 + 0x280) != 0) {
      if (*(longlong *)(lVar3 + 0x280) != lVar3) {
        return 0;
      }
      *(longlong *)(lVar4 + 0x280) = lVar4;
    }
    if (*(undefined8 **)(lVar3 + 0x2b8) == param_1 + 5) {
      *(undefined8 **)(lVar4 + 0x2b8) = param_4 + 5;
      return 1;
    }
    _Dst = (void *)CRYPTO_malloc((longlong)*(int *)(lVar3 + 0x2c0),"crypto\\evp\\e_aes.c",0xb9b);
    *(void **)(lVar4 + 0x2b8) = _Dst;
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,*(void **)(lVar3 + 0x2b8),(longlong)*(int *)(lVar3 + 0x2c0));
      return 1;
    }
    uVar8 = 0xb9c;
    goto LAB_14f6c3688;
  case 9:
    if (param_3 < 1) {
      return 0;
    }
    if ((param_3 < 0x11) || (param_3 <= *(int *)(lVar3 + 0x2c0))) {
LAB_14f6c36a9:
      *(int *)(lVar3 + 0x2c0) = param_3;
      return 1;
    }
    if (*(undefined8 **)(lVar3 + 0x2b8) != param_1 + 5) {
      CRYPTO_free(*(undefined8 **)(lVar3 + 0x2b8),"crypto\\evp\\e_aes.c",0xb35);
    }
    lVar4 = CRYPTO_malloc(_Size,"crypto\\evp\\e_aes.c",0xb36);
    *(longlong *)(lVar3 + 0x2b8) = lVar4;
    if (lVar4 != 0) goto LAB_14f6c36a9;
    uVar8 = 0xb37;
LAB_14f6c3688:
    ERR_put_error(6,0xc4,0x41,"crypto\\evp\\e_aes.c",uVar8,uVar9);
    break;
  case 0x10:
    if (((param_3 - 1U < 0x10) && (*(int *)(param_1 + 2) != 0)) && (-1 < *(int *)(lVar3 + 0x2c4))) {
      memcpy(param_4,param_1 + 7,_Size);
      return 1;
    }
    break;
  case 0x11:
    if ((param_3 - 1U < 0x10) && (*(int *)(param_1 + 2) == 0)) {
      memcpy(param_1 + 7,param_4,_Size);
      *(int *)(lVar3 + 0x2c4) = param_3;
      return 1;
    }
    break;
  case 0x12:
    if (param_3 == -1) {
      memcpy(*(void **)(lVar3 + 0x2b8),param_4,(longlong)*(int *)(lVar3 + 0x2c0));
      *(undefined4 *)(lVar3 + 0x2c8) = 1;
      return 1;
    }
    if ((3 < param_3) && (7 < *(int *)(lVar3 + 0x2c0) - param_3)) {
      memcpy(*(void **)(lVar3 + 0x2b8),param_4,_Size);
      if ((*(int *)(param_1 + 2) != 0) &&
         (iVar2 = RAND_bytes(*(longlong *)(lVar3 + 0x2b8) + _Size,*(int *)(lVar3 + 0x2c0) - param_3)
         , iVar2 < 1)) {
        return 0;
      }
      *(undefined4 *)(lVar3 + 0x2c8) = 1;
      return 1;
    }
    break;
  case 0x13:
    if ((*(int *)(lVar3 + 0x2c8) != 0) && (*(int *)(lVar3 + 0xf8) != 0)) {
      CRYPTO_gcm128_setiv(lVar3 + 0x100,*(undefined8 *)(lVar3 + 0x2b8),
                          (longlong)*(int *)(lVar3 + 0x2c0));
      if ((param_3 < 1) || (iVar2 = *(int *)(lVar3 + 0x2c0), iVar2 < param_3)) {
        iVar2 = *(int *)(lVar3 + 0x2c0);
        param_3 = iVar2;
      }
      memcpy(param_4,(void *)(((longlong)iVar2 - (longlong)param_3) + *(longlong *)(lVar3 + 0x2b8)),
             (longlong)param_3);
      lVar7 = *(longlong *)(lVar3 + 0x2b8) + (longlong)*(int *)(lVar3 + 0x2c0) + -8;
      lVar4 = lVar7 + 8;
      do {
        pcVar1 = (char *)(lVar4 + -1);
        *pcVar1 = *pcVar1 + '\x01';
        lVar4 = lVar4 + -1;
        if (*pcVar1 != '\0') break;
      } while (lVar4 != lVar7);
      *(undefined4 *)(lVar3 + 0xfc) = 1;
      return 1;
    }
    break;
  case 0x16:
    if (param_3 == 0xd) {
      param_1[7] = *param_4;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_4 + 1);
      *(undefined1 *)((longlong)param_1 + 0x44) = *(undefined1 *)((longlong)param_4 + 0xc);
      *(undefined4 *)(lVar3 + 0x2cc) = 0xd;
      uVar5 = (uint)CONCAT11(*(undefined1 *)((longlong)param_1 + 0x43),
                             *(undefined1 *)((longlong)param_1 + 0x44));
      if (7 < uVar5) {
        uVar6 = uVar5 - 8;
        if (*(int *)(param_1 + 2) == 0) {
          if (uVar6 < 0x10) {
            return 0;
          }
          uVar6 = uVar5 - 0x18;
        }
        *(char *)((longlong)param_1 + 0x44) = (char)uVar6;
        *(char *)((longlong)param_1 + 0x43) = (char)(uVar6 >> 8);
        return 0x10;
      }
    }
    break;
  case 0x18:
    if (((*(int *)(lVar3 + 0x2c8) != 0) && (*(int *)(lVar3 + 0xf8) != 0)) &&
       (*(int *)(param_1 + 2) == 0)) {
      memcpy((void *)(((longlong)*(int *)(lVar3 + 0x2c0) - _Size) + *(longlong *)(lVar3 + 0x2b8)),
             param_4,_Size);
      CRYPTO_gcm128_setiv(lVar3 + 0x100,*(undefined8 *)(lVar3 + 0x2b8),
                          (longlong)*(int *)(lVar3 + 0x2c0));
      *(undefined4 *)(lVar3 + 0xfc) = 1;
      return 1;
    }
    break;
  case 0x25:
    *(undefined4 *)param_4 = *(undefined4 *)(lVar3 + 0x2c0);
    return 1;
  }
  return 0;
}

// FUN_14f6c3a40 @ 14f6c3a40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6c3a40(longlong param_1,longlong param_2,void *param_3)

{
  longlong lVar1;
  code *pcVar2;
  
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(lVar1 + 0xf8) == 0) {
      memcpy(*(void **)(lVar1 + 0x2b8),param_3,(longlong)*(int *)(lVar1 + 0x2c0));
    }
    else {
      CRYPTO_gcm128_setiv(lVar1 + 0x100);
    }
    *(undefined4 *)(lVar1 + 0xfc) = 1;
    *(undefined4 *)(lVar1 + 0x2c8) = 0;
    return 1;
  }
  if ((DAT_15540a9f4 & 0x200) == 0) {
    AES_set_encrypt_key(param_2,*(int *)(param_1 + 0x68) << 3,lVar1);
    pcVar2 = AES_encrypt;
  }
  else {
    vpaes_set_encrypt_key();
    pcVar2 = vpaes_encrypt;
  }
  CRYPTO_gcm128_init(lVar1 + 0x100,lVar1,pcVar2);
  *(undefined8 *)(lVar1 + 0x2d0) = 0;
  if ((param_3 != (void *)0x0) ||
     ((*(int *)(lVar1 + 0xfc) != 0 && (param_3 = *(void **)(lVar1 + 0x2b8), param_3 != (void *)0x0))
     )) {
    CRYPTO_gcm128_setiv(lVar1 + 0x100,param_3,(longlong)*(int *)(lVar1 + 0x2c0));
    *(undefined4 *)(lVar1 + 0xfc) = 1;
  }
  *(undefined4 *)(lVar1 + 0xf8) = 1;
  return 1;
}

// FUN_14f6c3b80 @ 14f6c3b80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6c3b80(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_2 == 8) {
    lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_4);
    if (*(longlong *)(lVar1 + 0x1f0) != 0) {
      if (*(longlong *)(lVar1 + 0x1f0) != lVar1) {
        return 0;
      }
      *(longlong *)(lVar2 + 0x1f0) = lVar2;
    }
    if (*(longlong *)(lVar1 + 0x1f8) != 0) {
      if (*(longlong *)(lVar1 + 0x1f8) != lVar1 + 0xf8) {
        return 0;
      }
      *(longlong *)(lVar2 + 0x1f8) = lVar2 + 0xf8;
    }
  }
  else {
    if (param_2 != 0) {
      return 0xffffffff;
    }
    *(undefined8 *)(lVar1 + 0x1f0) = 0;
    *(undefined8 *)(lVar1 + 0x1f8) = 0;
  }
  return 1;
}

// FUN_14f6c3c50 @ 14f6c3c50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6c3c50(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f6c3c69;
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 == (undefined8 *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_14f6c3df5;
  iVar1 = EVP_CIPHER_CTX_key_length(param_1);
  if ((param_4 != 0) && (iVar1 = CRYPTO_memcmp(param_2,iVar1 / 2 + param_2), iVar1 == 0)) {
    ERR_put_error(6,0xd1,0xb7,"crypto\\evp\\e_aes.c",0xd32,uVar6);
    return 0;
  }
  *(undefined8 *)(lVar3 + 0x210) = 0;
  if ((DAT_15540a9f4 & 0x200) == 0) {
    pcVar5 = AES_encrypt;
    iVar1 = EVP_CIPHER_CTX_key_length(param_1);
    if (param_4 == 0) {
      AES_set_decrypt_key(param_2,iVar1 << 2,lVar3);
      *(code **)(lVar3 + 0x200) = AES_decrypt;
    }
    else {
      AES_set_encrypt_key();
      *(code **)(lVar3 + 0x200) = AES_encrypt;
    }
    iVar1 = EVP_CIPHER_CTX_key_length(param_1);
    iVar2 = EVP_CIPHER_CTX_key_length(param_1);
    AES_set_encrypt_key(iVar2 / 2 + param_2,iVar1 << 2,lVar3 + 0xf8);
  }
  else {
    pcVar5 = vpaes_encrypt;
    iVar1 = EVP_CIPHER_CTX_key_length(param_1);
    if (param_4 == 0) {
      vpaes_set_decrypt_key(param_2,iVar1 << 2,lVar3);
      *(code **)(lVar3 + 0x200) = vpaes_decrypt;
    }
    else {
      vpaes_set_encrypt_key();
      *(code **)(lVar3 + 0x200) = vpaes_encrypt;
    }
    iVar1 = EVP_CIPHER_CTX_key_length(param_1);
    iVar2 = EVP_CIPHER_CTX_key_length(param_1);
    vpaes_set_encrypt_key(iVar2 / 2 + param_2,iVar1 << 2,lVar3 + 0xf8);
  }
  *(code **)(lVar3 + 0x208) = pcVar5;
  *(longlong *)(lVar3 + 0x1f0) = lVar3;
LAB_14f6c3df5:
  if (param_3 != (undefined8 *)0x0) {
    *(longlong *)(lVar3 + 0x1f8) = lVar3 + 0xf8;
    puVar4 = (undefined8 *)EVP_CIPHER_CTX_iv_noconst(param_1);
    uVar6 = param_3[1];
    *puVar4 = *param_3;
    puVar4[1] = uVar6;
  }
  return 1;
}

// FUN_14f6c3e40 @ 14f6c3e40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6c3e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  bool bVar7;
  
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  uVar4 = EVP_CIPHER_CTX_cipher(param_1);
  uVar1 = EVP_CIPHER_flags(uVar4);
  uVar1 = uVar1 & 0xf0007;
  if ((uVar1 - 1 < 2) && (param_4 == 0)) {
    iVar2 = EVP_CIPHER_CTX_key_length(param_1);
    iVar2 = aesni_set_decrypt_key(param_2,iVar2 << 3,lVar3);
    *(undefined1 **)(lVar3 + 0xf8) = &aesni_decrypt;
    pcVar6 = aesni_cbc_encrypt;
    bVar7 = uVar1 == 2;
  }
  else {
    iVar2 = EVP_CIPHER_CTX_key_length(param_1);
    iVar2 = aesni_set_encrypt_key(param_2,iVar2 << 3,lVar3);
    *(undefined1 **)(lVar3 + 0xf8) = &aesni_encrypt;
    if (uVar1 == 2) {
      *(code **)(lVar3 + 0x100) = aesni_cbc_encrypt;
      goto LAB_14f6c3f20;
    }
    pcVar6 = aesni_ctr32_encrypt_blocks;
    bVar7 = uVar1 == 5;
  }
  pcVar5 = (code *)0x0;
  if (bVar7) {
    pcVar5 = pcVar6;
  }
  *(code **)(lVar3 + 0x100) = pcVar5;
LAB_14f6c3f20:
  if (-1 >= iVar2) {
    ERR_put_error(6,0xa5,0x8f,"crypto\\evp\\e_aes.c",0x126);
  }
  return -1 < iVar2;
}

// FUN_14f6c3f70 @ 14f6c3f70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6c3f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  uVar1 = EVP_CIPHER_CTX_encrypting();
  uVar2 = EVP_CIPHER_CTX_iv_noconst(param_1);
  uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  aesni_cbc_encrypt(param_3,param_2,param_4,uVar3,uVar2,CONCAT44(uVar4,uVar1));
  return 1;
}

// FUN_14f6c4000 @ 14f6c4000

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f6c4000(undefined8 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int *piVar6;
  void *_Dst;
  ushort uVar7;
  ulonglong _Size;
  
  _Size = (ulonglong)param_3;
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  switch(param_2) {
  case 0:
    *(undefined4 *)(lVar3 + 0x108) = 8;
    *(undefined8 *)(lVar3 + 0xf8) = 0;
    *(undefined8 *)(lVar3 + 0x100) = 0;
    *(undefined4 *)(lVar3 + 0x10c) = 0xc;
    *(undefined4 *)(lVar3 + 0x110) = 0xffffffff;
    return 1;
  default:
    return 0xffffffff;
  case 8:
    lVar5 = EVP_CIPHER_CTX_get_cipher_data(param_4);
    if (*(longlong *)(lVar3 + 0x148) != 0) {
      if (*(longlong *)(lVar3 + 0x148) != lVar3) {
        return 0;
      }
      *(longlong *)(lVar5 + 0x148) = lVar5;
    }
    return 1;
  case 9:
    param_3 = 0xf - param_3;
  case 0x14:
    if (param_3 - 2U < 7) {
      *(int *)(lVar3 + 0x108) = param_3;
      return 1;
    }
    break;
  case 0x10:
    iVar2 = EVP_CIPHER_CTX_encrypting(param_1);
    if (((iVar2 != 0) && (*(int *)(lVar3 + 0x100) != 0)) &&
       (lVar5 = CRYPTO_ccm128_tag(lVar3 + 0x118,param_4,_Size), lVar5 != 0)) {
      *(undefined8 *)(lVar3 + 0xfc) = 0;
      *(undefined4 *)(lVar3 + 0x104) = 0;
      return 1;
    }
    break;
  case 0x11:
    if (((_Size & 1) == 0) && (param_3 - 4U < 0xd)) {
      iVar2 = EVP_CIPHER_CTX_encrypting(param_1);
      if (iVar2 == 0) {
        if (param_4 != (int *)0x0) {
          *(undefined4 *)(lVar3 + 0x100) = 1;
          _Dst = (void *)EVP_CIPHER_CTX_buf_noconst(param_1);
          memcpy(_Dst,param_4,_Size);
        }
      }
      else if (param_4 != (int *)0x0) {
        return 0;
      }
      *(int *)(lVar3 + 0x10c) = param_3;
      return 1;
    }
    break;
  case 0x12:
    if (param_3 == 4) {
      piVar6 = (int *)EVP_CIPHER_CTX_iv_noconst(param_1);
      *piVar6 = *param_4;
      return 1;
    }
    break;
  case 0x16:
    if (param_3 == 0xd) {
      puVar4 = (undefined8 *)EVP_CIPHER_CTX_buf_noconst(param_1);
      *puVar4 = *(undefined8 *)param_4;
      *(int *)(puVar4 + 1) = param_4[2];
      *(char *)((longlong)puVar4 + 0xc) = (char)param_4[3];
      *(undefined4 *)(lVar3 + 0x110) = 0xd;
      lVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
      uVar1 = *(undefined1 *)(lVar5 + 0xb);
      lVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
      uVar7 = CONCAT11(uVar1,*(undefined1 *)(lVar5 + 0xc));
      if (7 < uVar7) {
        uVar7 = uVar7 - 8;
        iVar2 = EVP_CIPHER_CTX_encrypting(param_1);
        if (iVar2 == 0) {
          if ((int)(uint)uVar7 < *(int *)(lVar3 + 0x10c)) {
            return 0;
          }
          uVar7 = uVar7 - *(short *)(lVar3 + 0x10c);
        }
        lVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
        *(char *)(lVar5 + 0xb) = (char)(uVar7 >> 8);
        lVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
        *(char *)(lVar5 + 0xc) = (char)uVar7;
        return *(undefined4 *)(lVar3 + 0x10c);
      }
    }
    break;
  case 0x25:
    *param_4 = 0xf - *(int *)(lVar3 + 0x108);
    return 1;
  }
  return 0;
}

// FUN_14f6c42d0 @ 14f6c42d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6c42d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6c42eb;
  iVar1 = EVP_CIPHER_CTX_block_size();
  if ((ulonglong)(longlong)iVar1 <= param_4) {
    uVar2 = EVP_CIPHER_CTX_encrypting(param_1);
    uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    aesni_ecb_encrypt(param_3,param_2,param_4,uVar3,uVar2,uVar4);
  }
  return 1;
}

// FUN_14f6c4360 @ 14f6c4360

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6c4360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_18 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6c4380;
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  local_18[0] = EVP_CIPHER_CTX_num(param_1);
  uVar2 = EVP_CIPHER_CTX_iv_noconst(param_1);
  CRYPTO_ofb128_encrypt(param_3,param_2,param_4,lVar1,uVar2,local_18,*(undefined8 *)(lVar1 + 0xf8));
  EVP_CIPHER_CTX_set_num(param_1,local_18[0]);
  return 1;
}

// FUN_14f6c4410 @ 14f6c4410

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6c4410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x14f6c442e;
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  local_28[0] = EVP_CIPHER_CTX_num(param_1);
  uVar1 = EVP_CIPHER_CTX_encrypting(param_1);
  uVar3 = EVP_CIPHER_CTX_iv_noconst(param_1);
  CRYPTO_cfb128_encrypt
            (param_3,param_2,param_4,lVar2,uVar3,local_28,uVar1,*(undefined8 *)(lVar2 + 0xf8));
  EVP_CIPHER_CTX_set_num(param_1,local_28[0]);
  return 1;
}

// FUN_14f6c44d0 @ 14f6c44d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6c44d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x14f6c44ee;
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  local_28[0] = EVP_CIPHER_CTX_num(param_1);
  uVar1 = EVP_CIPHER_CTX_encrypting(param_1);
  uVar3 = EVP_CIPHER_CTX_iv_noconst(param_1);
  CRYPTO_cfb128_8_encrypt
            (param_3,param_2,param_4,lVar2,uVar3,local_28,uVar1,*(undefined8 *)(lVar2 + 0xf8));
  EVP_CIPHER_CTX_set_num(param_1,local_28[0]);
  return 1;
}

// FUN_14f6c4590 @ 14f6c4590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6c4590(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 local_38 [2];
  undefined8 uStack_30;
  
  uStack_30 = 0x14f6c45a7;
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  iVar1 = EVP_CIPHER_CTX_test_flags(param_1,0x2000);
  if (iVar1 == 0) {
    if (0xfffffffffffffff < param_4) {
      uVar5 = param_4 >> 0x3c;
      param_4 = param_4 + uVar5 * -0x1000000000000000;
      do {
        local_38[0] = EVP_CIPHER_CTX_num(param_1);
        uVar2 = EVP_CIPHER_CTX_encrypting(param_1);
        uVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
        CRYPTO_cfb128_1_encrypt
                  (param_3,param_2,0x8000000000000000,lVar3,uVar4,local_38,uVar2,
                   *(undefined8 *)(lVar3 + 0xf8));
        EVP_CIPHER_CTX_set_num(param_1,local_38[0]);
        param_2 = param_2 + 0x1000000000000000;
        param_3 = param_3 + 0x1000000000000000;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (param_4 == 0) {
      return 1;
    }
    local_38[0] = EVP_CIPHER_CTX_num(param_1);
    uVar2 = EVP_CIPHER_CTX_encrypting(param_1);
    uVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
    param_4 = param_4 * 8;
  }
  else {
    local_38[0] = EVP_CIPHER_CTX_num(param_1);
    uVar2 = EVP_CIPHER_CTX_encrypting(param_1);
    uVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
  }
  CRYPTO_cfb128_1_encrypt
            (param_3,param_2,param_4,lVar3,uVar4,local_38,uVar2,*(undefined8 *)(lVar3 + 0xf8));
  EVP_CIPHER_CTX_set_num(param_1,local_38[0]);
  return 1;
}

// FUN_14f6c4740 @ 14f6c4740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6c4740(undefined8 param_1,longlong param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  void *_Dst;
  undefined8 uVar4;
  
  uVar4 = 0x14f6c475a;
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_14f6c4801;
  if ((DAT_15540a9f4 & 0x200) == 0) {
    iVar1 = EVP_CIPHER_CTX_key_length(param_1);
    AES_set_encrypt_key(param_2,iVar1 << 3,lVar2);
    pcVar3 = AES_encrypt;
  }
  else {
    iVar1 = EVP_CIPHER_CTX_key_length(param_1);
    vpaes_set_encrypt_key(param_2,iVar1 << 3,lVar2);
    pcVar3 = vpaes_encrypt;
  }
  CRYPTO_ccm128_init(lVar2 + 0x118,*(undefined4 *)(lVar2 + 0x10c),*(undefined4 *)(lVar2 + 0x108),
                     lVar2,pcVar3,uVar4);
  *(undefined4 *)(lVar2 + 0xf8) = 1;
  *(undefined8 *)(lVar2 + 0x150) = 0;
LAB_14f6c4801:
  if (param_3 != (void *)0x0) {
    iVar1 = *(int *)(lVar2 + 0x108);
    _Dst = (void *)EVP_CIPHER_CTX_iv_noconst(param_1);
    memcpy(_Dst,param_3,(longlong)(0xf - iVar1));
    *(undefined4 *)(lVar2 + 0xfc) = 1;
  }
  return 1;
}

// FUN_14f6c4860 @ 14f6c4860

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6c4860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x14f6c4884;
  local_28[0] = EVP_CIPHER_CTX_num();
  lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  lVar1 = *(longlong *)(lVar2 + 0x100);
  uVar3 = EVP_CIPHER_CTX_buf_noconst(param_1);
  uVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
  if (lVar1 == 0) {
    CRYPTO_ctr128_encrypt
              (param_3,param_2,param_4,lVar2,uVar4,uVar3,local_28,*(undefined8 *)(lVar2 + 0xf8));
  }
  else {
    CRYPTO_ctr128_encrypt_ctr32(param_3);
  }
  EVP_CIPHER_CTX_set_num(param_1,local_28[0]);
  return 1;
}

// FUN_14f6c4950 @ 14f6c4950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6c4950(undefined8 param_1,longlong param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(lVar2 + 0xf8) == 0) {
      memcpy(*(void **)(lVar2 + 0x2b8),param_3,(longlong)*(int *)(lVar2 + 0x2c0));
    }
    else {
      CRYPTO_gcm128_setiv(lVar2 + 0x100);
    }
    *(undefined4 *)(lVar2 + 0xfc) = 1;
    *(undefined4 *)(lVar2 + 0x2c8) = 0;
    return 1;
  }
  iVar1 = EVP_CIPHER_CTX_key_length(param_1);
  aesni_set_encrypt_key(param_2,iVar1 << 3,lVar2);
  CRYPTO_gcm128_init(lVar2 + 0x100,lVar2,&aesni_encrypt);
  *(code **)(lVar2 + 0x2d0) = aesni_ctr32_encrypt_blocks;
  if ((param_3 != (void *)0x0) ||
     ((*(int *)(lVar2 + 0xfc) != 0 && (param_3 = *(void **)(lVar2 + 0x2b8), param_3 != (void *)0x0))
     )) {
    CRYPTO_gcm128_setiv(lVar2 + 0x100,param_3,(longlong)*(int *)(lVar2 + 0x2c0));
    *(undefined4 *)(lVar2 + 0xfc) = 1;
  }
  *(undefined4 *)(lVar2 + 0xf8) = 1;
  return 1;
}

// FUN_14f6c4a80 @ 14f6c4a80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6c4a80(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = 0x14f6c4a98;
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  if (*(int *)(lVar3 + 0xf8) == 0) {
    return 0xffffffff;
  }
  if (-1 < *(int *)(lVar3 + 0x2cc)) {
    uVar4 = FUN_14f6c5740(param_1,param_2,param_3,param_4);
    return uVar4;
  }
  if (*(int *)(lVar3 + 0xfc) == 0) {
    return 0xffffffff;
  }
  if (param_3 != 0) {
    if (param_2 == 0) {
      iVar2 = CRYPTO_gcm128_aad(lVar3 + 0x100,param_3,param_4);
    }
    else {
      pcVar1 = *(code **)(lVar3 + 0x2d0);
      if (*(int *)(param_1 + 0x10) == 0) {
        if (pcVar1 == (code *)0x0) {
          iVar2 = CRYPTO_gcm128_decrypt(lVar3 + 0x100,param_3,param_2,param_4);
        }
        else {
          lVar5 = 0;
          if (((0xf < param_4) && (pcVar1 == aesni_ctr32_encrypt_blocks)) &&
             (*(undefined1 **)(lVar3 + 0x268) == &gcm_ghash_avx)) {
            uVar4 = (ulonglong)(-*(int *)(lVar3 + 0x270) & 0xf);
            iVar2 = CRYPTO_gcm128_decrypt(lVar3 + 0x100,param_3,param_2,uVar4);
            if (iVar2 != 0) {
              return 0xffffffff;
            }
            lVar6 = lVar3 + 0x140;
            lVar5 = aesni_gcm_decrypt(uVar4 + param_3,uVar4 + param_2,param_4 - uVar4,
                                      *(undefined8 *)(lVar3 + 0x280),lVar3 + 0x100,lVar6);
            *(longlong *)(lVar3 + 0x138) = *(longlong *)(lVar3 + 0x138) + lVar5;
            lVar5 = lVar5 + uVar4;
          }
          iVar2 = CRYPTO_gcm128_decrypt_ctr32
                            (lVar3 + 0x100,lVar5 + param_3,lVar5 + param_2,param_4 - lVar5,
                             *(undefined8 *)(lVar3 + 0x2d0),lVar6);
        }
      }
      else if (pcVar1 == (code *)0x0) {
        iVar2 = CRYPTO_gcm128_encrypt(lVar3 + 0x100,param_3,param_2,param_4);
      }
      else {
        lVar6 = 0;
        if (((0x1f < param_4) && (pcVar1 == aesni_ctr32_encrypt_blocks)) &&
           (*(undefined1 **)(lVar3 + 0x268) == &gcm_ghash_avx)) {
          uVar4 = (ulonglong)(-*(int *)(lVar3 + 0x270) & 0xf);
          iVar2 = CRYPTO_gcm128_encrypt(lVar3 + 0x100,param_3,param_2,uVar4);
          if (iVar2 != 0) {
            return 0xffffffff;
          }
          lVar6 = aesni_gcm_encrypt(uVar4 + param_3,uVar4 + param_2,param_4 - uVar4,
                                    *(undefined8 *)(lVar3 + 0x280),lVar3 + 0x100,lVar3 + 0x140);
          *(longlong *)(lVar3 + 0x138) = *(longlong *)(lVar3 + 0x138) + lVar6;
          lVar6 = lVar6 + uVar4;
        }
        iVar2 = CRYPTO_gcm128_encrypt_ctr32
                          (lVar3 + 0x100,lVar6 + param_3,lVar6 + param_2,param_4 - lVar6,
                           *(undefined8 *)(lVar3 + 0x2d0));
      }
    }
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    return param_4 & 0xffffffff;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    if (*(int *)(lVar3 + 0x2c4) < 0) {
      return 0xffffffff;
    }
    iVar2 = CRYPTO_gcm128_finish(lVar3 + 0x100,param_1 + 0x38,(longlong)*(int *)(lVar3 + 0x2c4));
    if (iVar2 != 0) {
      return 0xffffffff;
    }
  }
  else {
    CRYPTO_gcm128_tag(lVar3 + 0x100,param_1 + 0x38,0x10);
    *(undefined4 *)(lVar3 + 0x2c4) = 0x10;
  }
  *(undefined4 *)(lVar3 + 0xfc) = 0;
  return 0;
}

// FUN_14f6c4d60 @ 14f6c4d60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6c4d60(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f6c4d7f;
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 == (undefined8 *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_14f6c4ea2;
  iVar1 = EVP_CIPHER_CTX_key_length(param_1);
  if (param_4 == 0) {
    iVar1 = EVP_CIPHER_CTX_key_length(param_1);
    aesni_set_decrypt_key(param_2,iVar1 << 2,lVar3);
    *(undefined1 **)(lVar3 + 0x200) = &aesni_decrypt;
    pcVar4 = aesni_xts_decrypt;
  }
  else {
    iVar1 = CRYPTO_memcmp(param_2,iVar1 / 2 + param_2);
    if (iVar1 == 0) {
      ERR_put_error(6,0xcf,0xb7,"crypto\\evp\\e_aes.c",0x191,uVar6);
      return 0;
    }
    iVar1 = EVP_CIPHER_CTX_key_length(param_1);
    aesni_set_encrypt_key(param_2,iVar1 << 2,lVar3);
    pcVar4 = aesni_xts_encrypt;
    *(undefined1 **)(lVar3 + 0x200) = &aesni_encrypt;
  }
  *(code **)(lVar3 + 0x210) = pcVar4;
  iVar1 = EVP_CIPHER_CTX_key_length(param_1);
  iVar2 = EVP_CIPHER_CTX_key_length(param_1);
  aesni_set_encrypt_key(iVar2 / 2 + param_2,iVar1 << 2,lVar3 + 0xf8);
  *(undefined1 **)(lVar3 + 0x208) = &aesni_encrypt;
  *(longlong *)(lVar3 + 0x1f0) = lVar3;
LAB_14f6c4ea2:
  if (param_3 != (undefined8 *)0x0) {
    *(longlong *)(lVar3 + 0x1f8) = lVar3 + 0xf8;
    puVar5 = (undefined8 *)EVP_CIPHER_CTX_iv_noconst(param_1);
    uVar6 = param_3[1];
    *puVar5 = *param_3;
    puVar5[1] = uVar6;
  }
  return 1;
}

// EVP_aes_128_cbc @ 14f6c4ef0

undefined * EVP_aes_128_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348ba10;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348b9b0;
  }
  return puVar1;
}

// EVP_aes_128_ccm @ 14f6c4f20

undefined * EVP_aes_128_ccm(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348b590;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348b530;
  }
  return puVar1;
}

// EVP_aes_128_cfb1 @ 14f6c4f50

undefined * EVP_aes_128_cfb1(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348be90;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348bd70;
  }
  return puVar1;
}

// EVP_aes_128_cfb128 @ 14f6c4f80

undefined * EVP_aes_128_cfb128(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348bcb0;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348bbf0;
  }
  return puVar1;
}

// EVP_aes_128_cfb8 @ 14f6c4fb0

undefined * EVP_aes_128_cfb8(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348c010;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348bf50;
  }
  return puVar1;
}

// EVP_aes_128_ctr @ 14f6c4fe0

undefined * EVP_aes_128_ctr(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348c0d0;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348c070;
  }
  return puVar1;
}

// EVP_aes_128_ecb @ 14f6c5010

undefined * EVP_aes_128_ecb(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348bad0;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348ba70;
  }
  return puVar1;
}

// EVP_aes_128_gcm @ 14f6c5040

undefined * EVP_aes_128_gcm(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348cc10;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348cbb0;
  }
  return puVar1;
}

// EVP_aes_128_ocb @ 14f6c5070

undefined * EVP_aes_128_ocb(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348bd10;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348bc50;
  }
  return puVar1;
}

// EVP_aes_128_ofb @ 14f6c50a0

undefined * EVP_aes_128_ofb(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348bb90;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348bb30;
  }
  return puVar1;
}

// EVP_aes_128_wrap @ 14f6c50d0

undefined * EVP_aes_128_wrap(void)

{
  return &DAT_15348b770;
}

// EVP_aes_128_wrap_pad @ 14f6c50e0

undefined * EVP_aes_128_wrap_pad(void)

{
  return &DAT_15348b890;
}

// EVP_aes_128_xts @ 14f6c50f0

undefined * EVP_aes_128_xts(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348ce50;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348cdf0;
  }
  return puVar1;
}

// EVP_aes_192_cbc @ 14f6c5120

undefined * EVP_aes_192_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348c190;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348c130;
  }
  return puVar1;
}

// EVP_aes_192_ccm @ 14f6c5150

undefined * EVP_aes_192_ccm(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348b650;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348b5f0;
  }
  return puVar1;
}

// EVP_aes_192_cfb1 @ 14f6c5180

undefined * EVP_aes_192_cfb1(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348c490;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348c430;
  }
  return puVar1;
}

// EVP_aes_192_cfb128 @ 14f6c51b0

undefined * EVP_aes_192_cfb128(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348c3d0;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348c370;
  }
  return puVar1;
}

// EVP_aes_192_cfb8 @ 14f6c51e0

undefined * EVP_aes_192_cfb8(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348c550;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348c4f0;
  }
  return puVar1;
}

// EVP_aes_192_ctr @ 14f6c5210

undefined * EVP_aes_192_ctr(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348c610;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348c5b0;
  }
  return puVar1;
}

// EVP_aes_192_ecb @ 14f6c5240

undefined * EVP_aes_192_ecb(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348c250;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348c1f0;
  }
  return puVar1;
}

// EVP_aes_192_gcm @ 14f6c5270

undefined * EVP_aes_192_gcm(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348ccd0;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348cc70;
  }
  return puVar1;
}

// EVP_aes_192_ocb @ 14f6c52a0

undefined * EVP_aes_192_ocb(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348be30;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348bdd0;
  }
  return puVar1;
}

// EVP_aes_192_ofb @ 14f6c52d0

undefined * EVP_aes_192_ofb(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348c310;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348c2b0;
  }
  return puVar1;
}

// EVP_aes_192_wrap @ 14f6c5300

undefined * EVP_aes_192_wrap(void)

{
  return &DAT_15348b7d0;
}

// EVP_aes_192_wrap_pad @ 14f6c5310

undefined * EVP_aes_192_wrap_pad(void)

{
  return &DAT_15348b8f0;
}

// EVP_aes_256_cbc @ 14f6c5320

undefined * EVP_aes_256_cbc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348c6d0;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348c670;
  }
  return puVar1;
}

// EVP_aes_256_ccm @ 14f6c5350

undefined * EVP_aes_256_ccm(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348b710;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348b6b0;
  }
  return puVar1;
}

// EVP_aes_256_cfb1 @ 14f6c5380

undefined * EVP_aes_256_cfb1(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348c9d0;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348c970;
  }
  return puVar1;
}

// EVP_aes_256_cfb128 @ 14f6c53b0

undefined * EVP_aes_256_cfb128(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348c910;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348c8b0;
  }
  return puVar1;
}

// EVP_aes_256_cfb8 @ 14f6c53e0

undefined * EVP_aes_256_cfb8(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348ca90;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348ca30;
  }
  return puVar1;
}

// EVP_aes_256_ctr @ 14f6c5410

undefined * EVP_aes_256_ctr(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348cb50;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348caf0;
  }
  return puVar1;
}

// EVP_aes_256_ecb @ 14f6c5440

undefined * EVP_aes_256_ecb(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348c790;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348c730;
  }
  return puVar1;
}

// EVP_aes_256_gcm @ 14f6c5470

undefined * EVP_aes_256_gcm(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348cd90;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348cd30;
  }
  return puVar1;
}

// EVP_aes_256_ocb @ 14f6c54a0

undefined * EVP_aes_256_ocb(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348bfb0;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348bef0;
  }
  return puVar1;
}

// EVP_aes_256_ofb @ 14f6c54d0

undefined * EVP_aes_256_ofb(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348c850;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348c7f0;
  }
  return puVar1;
}

// EVP_aes_256_wrap @ 14f6c5500

undefined * EVP_aes_256_wrap(void)

{
  return &DAT_15348b830;
}

// EVP_aes_256_wrap_pad @ 14f6c5510

undefined * EVP_aes_256_wrap_pad(void)

{
  return &DAT_15348b950;
}

// EVP_aes_256_xts @ 14f6c5520

undefined * EVP_aes_256_xts(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_15348cf10;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_15348ceb0;
  }
  return puVar1;
}

// FUN_14f6c5550 @ 14f6c5550

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14f6c5550(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4
                       )

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_88;
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  lVar6 = lVar2 + 0x118;
  if ((param_2 != param_3) || (param_4 < (longlong)*(int *)(lVar2 + 0x10c) + 8U)) {
    return 0xffffffff;
  }
  iVar1 = EVP_CIPHER_CTX_encrypting(param_1);
  if (iVar1 != 0) {
    puVar3 = (undefined8 *)EVP_CIPHER_CTX_buf_noconst(param_1);
    *param_2 = *puVar3;
  }
  lVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
  *(undefined8 *)(lVar4 + 4) = *param_3;
  param_4 = param_4 - (longlong)(*(int *)(lVar2 + 0x10c) + 8);
  iVar1 = *(int *)(lVar2 + 0x108);
  uVar5 = EVP_CIPHER_CTX_iv_noconst(param_1);
  iVar1 = CRYPTO_ccm128_setiv(lVar6,uVar5,(longlong)(0xf - iVar1),param_4);
  if (iVar1 == 0) {
    iVar1 = *(int *)(lVar2 + 0x110);
    uVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
    CRYPTO_ccm128_aad(lVar6,uVar5,(longlong)iVar1);
    param_2 = param_2 + 1;
    iVar1 = EVP_CIPHER_CTX_encrypting(param_1);
    lVar4 = *(longlong *)(lVar2 + 0x150);
    if (iVar1 == 0) {
      if (lVar4 == 0) {
        iVar1 = CRYPTO_ccm128_decrypt(lVar6,param_3 + 1,param_2,param_4);
      }
      else {
        local_68 = lVar4;
        iVar1 = CRYPTO_ccm128_decrypt_ccm64();
      }
      if (((iVar1 == 0) &&
          (lVar6 = CRYPTO_ccm128_tag(lVar6,local_58,(longlong)*(int *)(lVar2 + 0x10c)), lVar6 != 0))
         && (iVar1 = CRYPTO_memcmp(local_58,param_4 + (longlong)(param_3 + 1),
                                   (longlong)*(int *)(lVar2 + 0x10c)), iVar1 == 0)) {
        return param_4 & 0xffffffff;
      }
      OPENSSL_cleanse(param_2,param_4);
    }
    else {
      if (lVar4 == 0) {
        iVar1 = CRYPTO_ccm128_encrypt();
      }
      else {
        local_68 = lVar4;
        iVar1 = CRYPTO_ccm128_encrypt_ccm64();
      }
      if ((iVar1 == 0) &&
         (lVar6 = CRYPTO_ccm128_tag(lVar6,param_4 + (longlong)param_2,
                                    (longlong)*(int *)(lVar2 + 0x10c)), lVar6 != 0)) {
        return (ulonglong)*(uint *)(lVar2 + 0x10c) + 8 + param_4;
      }
    }
  }
  return 0xffffffff;
}

// FUN_14f6c5740 @ 14f6c5740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6c5740(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  
  lVar9 = 0x14f6c5757;
  lVar5 = EVP_CIPHER_CTX_get_cipher_data();
  iVar4 = -1;
  if ((param_2 == param_3) && (0x17 < param_4)) {
    uVar7 = 0x18;
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar7 = 0x13;
    }
    iVar3 = EVP_CIPHER_CTX_ctrl(param_1,uVar7,8,param_2);
    iVar8 = -1;
    if (0 < iVar3) {
      lVar1 = lVar5 + 0x100;
      iVar3 = CRYPTO_gcm128_aad(lVar1,param_1 + 0x38,(longlong)*(int *)(lVar5 + 0x2cc));
      iVar8 = iVar4;
      if (iVar3 == 0) {
        pcVar2 = *(code **)(lVar5 + 0x2d0);
        param_3 = param_3 + 8;
        param_2 = param_2 + 8;
        param_4 = param_4 - 0x18;
        if (*(int *)(param_1 + 0x10) == 0) {
          if (pcVar2 == (code *)0x0) {
            iVar3 = CRYPTO_gcm128_decrypt(lVar1,param_3,param_2,param_4);
          }
          else {
            lVar6 = 0;
            if (((0xf < param_4) && (pcVar2 == aesni_ctr32_encrypt_blocks)) &&
               (*(undefined1 **)(lVar5 + 0x268) == &gcm_ghash_avx)) {
              iVar3 = CRYPTO_gcm128_decrypt(lVar1,0,0,0);
              if (iVar3 != 0) {
                return -1;
              }
              lVar9 = lVar5 + 0x140;
              lVar6 = aesni_gcm_decrypt(param_3,param_2,param_4,*(undefined8 *)(lVar5 + 0x280),lVar1
                                        ,lVar9);
              *(longlong *)(lVar5 + 0x138) = *(longlong *)(lVar5 + 0x138) + lVar6;
            }
            iVar3 = CRYPTO_gcm128_decrypt_ctr32
                              (lVar1,lVar6 + param_3,lVar6 + param_2,param_4 - lVar6,
                               *(undefined8 *)(lVar5 + 0x2d0),lVar9);
          }
          if (iVar3 == 0) {
            CRYPTO_gcm128_tag(lVar1,param_1 + 0x38,0x10);
            iVar3 = CRYPTO_memcmp(param_1 + 0x38,param_3 + param_4,0x10);
            iVar8 = (int)param_4;
            if (iVar3 != 0) {
              OPENSSL_cleanse(param_2,param_4);
              iVar8 = iVar4;
            }
          }
        }
        else {
          if (pcVar2 == (code *)0x0) {
            iVar4 = CRYPTO_gcm128_encrypt(lVar1,param_3,param_2,param_4);
          }
          else {
            lVar9 = 0;
            if (((0x1f < param_4) && (pcVar2 == aesni_ctr32_encrypt_blocks)) &&
               (*(undefined1 **)(lVar5 + 0x268) == &gcm_ghash_avx)) {
              iVar4 = CRYPTO_gcm128_encrypt(lVar1,0,0,0);
              if (iVar4 != 0) {
                return -1;
              }
              lVar9 = aesni_gcm_encrypt(param_3,param_2,param_4,*(undefined8 *)(lVar5 + 0x280),lVar1
                                        ,lVar5 + 0x140);
              *(longlong *)(lVar5 + 0x138) = *(longlong *)(lVar5 + 0x138) + lVar9;
            }
            iVar4 = CRYPTO_gcm128_encrypt_ctr32
                              (lVar1,lVar9 + param_3,lVar9 + param_2,param_4 - lVar9,
                               *(undefined8 *)(lVar5 + 0x2d0));
          }
          if (iVar4 == 0) {
            CRYPTO_gcm128_tag(lVar1,param_2 + param_4,0x10);
            iVar8 = (int)param_4 + 0x18;
          }
        }
      }
    }
    *(undefined4 *)(lVar5 + 0xfc) = 0;
    *(undefined4 *)(lVar5 + 0x2cc) = 0xffffffff;
    return iVar8;
  }
  return -1;
}

