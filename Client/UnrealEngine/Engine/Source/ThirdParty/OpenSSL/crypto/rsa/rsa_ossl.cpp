// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 13

// FUN_14f724260 @ 14f724260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_14f724260(undefined4 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar10;
  undefined4 uVar11;
  ulonglong in_stack_ffffffffffffffc0;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  iVar2 = 0;
  uVar9 = 0xffffffff;
  lVar7 = 0;
  iVar1 = BN_num_bits(*(undefined8 *)(param_4 + 0x18));
  if (0x4000 < iVar1) {
    ERR_put_error(4,0x68,0x69,"crypto\\rsa\\rsa_ossl.c",CONCAT44(uVar11,0x4d));
    return 0xffffffff;
  }
  iVar1 = BN_ucmp(*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x20));
  if (iVar1 < 1) {
    uVar5 = CONCAT44(uVar11,0x52);
LAB_14f7242e4:
    ERR_put_error(4,0x68,0x65,"crypto\\rsa\\rsa_ossl.c",uVar5);
    return 0xffffffff;
  }
  iVar1 = BN_num_bits(*(undefined8 *)(param_4 + 0x18));
  if ((0xc00 < iVar1) && (iVar1 = BN_num_bits(*(undefined8 *)(param_4 + 0x20)), 0x40 < iVar1)) {
    uVar5 = CONCAT44(uVar11,0x59);
    goto LAB_14f7242e4;
  }
  lVar4 = BN_CTX_new();
  uVar3 = 0xffffffff;
  if (lVar4 == 0) goto LAB_14f724509;
  BN_CTX_start(lVar4);
  uVar5 = BN_CTX_get(lVar4);
  lVar6 = BN_CTX_get(lVar4);
  iVar1 = BN_num_bits(*(undefined8 *)(param_4 + 0x18));
  iVar2 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  lVar7 = CRYPTO_malloc((longlong)iVar2,"crypto\\rsa\\rsa_ossl.c",100);
  if ((lVar6 == 0) || (lVar7 == 0)) {
    uVar10 = CONCAT44(uVar11,0x66);
    uVar5 = 0x41;
  }
  else {
    if (param_5 == 1) {
      iVar1 = RSA_padding_add_PKCS1_type_2(lVar7,iVar2,param_2,param_1);
    }
    else if (param_5 == 2) {
      iVar1 = RSA_padding_add_SSLv23(lVar7,iVar2,param_2,param_1);
    }
    else if (param_5 == 3) {
      iVar1 = RSA_padding_add_none(lVar7,iVar2,param_2,param_1);
    }
    else {
      if (param_5 != 4) {
        uVar10 = CONCAT44(uVar11,0x78);
        uVar5 = 0x76;
        goto LAB_14f7244f0;
      }
      uVar11 = 0;
      iVar1 = RSA_padding_add_PKCS1_OAEP
                        (lVar7,iVar2,param_2,param_1,0,
                         in_stack_ffffffffffffffc0 & 0xffffffff00000000);
    }
    uVar3 = uVar9;
    if ((iVar1 < 1) || (lVar8 = BN_bin2bn(lVar7,iVar2,uVar5), lVar8 == 0)) goto LAB_14f724509;
    iVar1 = BN_ucmp(uVar5,*(undefined8 *)(param_4 + 0x18));
    if (iVar1 < 0) {
      if ((((*(byte *)(param_4 + 0x74) & 2) == 0) ||
          (lVar8 = BN_MONT_CTX_set_locked
                             (param_4 + 0x78,*(undefined8 *)(param_4 + 0xa8),
                              *(undefined8 *)(param_4 + 0x18),lVar4), lVar8 != 0)) &&
         (iVar1 = (**(code **)(*(longlong *)(param_4 + 8) + 0x30))
                            (lVar6,uVar5,*(undefined8 *)(param_4 + 0x20),
                             *(undefined8 *)(param_4 + 0x18),lVar4,*(undefined8 *)(param_4 + 0x78)),
         iVar1 != 0)) {
        uVar3 = BN_bn2binpad(lVar6,param_3,iVar2);
      }
      goto LAB_14f724509;
    }
    uVar10 = CONCAT44(uVar11,0x84);
    uVar5 = 0x84;
  }
LAB_14f7244f0:
  ERR_put_error(4,0x68,uVar5,"crypto\\rsa\\rsa_ossl.c",uVar10);
  uVar3 = 0xffffffff;
LAB_14f724509:
  BN_CTX_end(lVar4);
  BN_CTX_free(lVar4);
  CRYPTO_clear_free(lVar7,(longlong)iVar2,"crypto\\rsa\\rsa_ossl.c",0x99);
  return uVar3;
}

// FUN_14f724550 @ 14f724550

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_14f724550(undefined4 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined8 in_stack_ffffffffffffffa8;
  undefined8 uVar10;
  int local_48;
  undefined4 local_44;
  longlong local_40;
  longlong local_38;
  undefined8 uStack_30;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uStack_30 = 0x14f72456c;
  lVar6 = 0;
  local_44 = 0xffffffff;
  iVar1 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  lVar3 = BN_CTX_new();
  if (lVar3 == 0) goto LAB_14f7248cc;
  BN_CTX_start(lVar3);
  lVar4 = BN_CTX_get(lVar3);
  lVar5 = BN_CTX_get(lVar3);
  iVar1 = BN_num_bits(*(undefined8 *)(param_4 + 0x18));
  iVar1 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  lVar6 = CRYPTO_malloc((longlong)iVar1,"crypto\\rsa\\rsa_ossl.c",0xff);
  if ((lVar5 == 0) || (lVar6 == 0)) {
    uVar10 = CONCAT44(uVar9,0x101);
LAB_14f7248a2:
    uVar9 = 0x41;
  }
  else if (param_5 == 1) {
    iVar2 = RSA_padding_add_PKCS1_type_1(lVar6,iVar1,param_2,param_1);
LAB_14f724671:
    if ((iVar2 < 1) || (lVar7 = BN_bin2bn(lVar6,iVar1,lVar4), lVar7 == 0)) goto LAB_14f7248cc;
    iVar2 = BN_ucmp(lVar4,*(undefined8 *)(param_4 + 0x18));
    if (iVar2 < 0) {
      if (((*(byte *)(param_4 + 0x74) & 2) != 0) &&
         (lVar7 = BN_MONT_CTX_set_locked
                            (param_4 + 0x78,*(undefined8 *)(param_4 + 0xa8),
                             *(undefined8 *)(param_4 + 0x18),lVar3), lVar7 == 0))
      goto LAB_14f7248cc;
      lVar7 = local_38;
      if ((*(byte *)(param_4 + 0x74) & 0x80) == 0) {
        lVar7 = FUN_14f725b50(param_4,&local_48,lVar3);
        if (lVar7 == 0) {
          uVar10 = CONCAT44(uVar9,0x129);
          uVar9 = 0x44;
          goto LAB_14f7248a8;
        }
        if ((local_48 == 0) && (local_40 = BN_CTX_get(lVar3), local_40 == 0)) {
          uVar10 = CONCAT44(uVar9,0x130);
          goto LAB_14f7248a2;
        }
        iVar2 = FUN_14f725aa0(lVar7,lVar4,local_40,lVar3);
        if (iVar2 == 0) goto LAB_14f7248cc;
      }
      if ((((*(byte *)(param_4 + 0x74) & 0x20) == 0) && (*(int *)(param_4 + 4) != 1)) &&
         (((*(longlong *)(param_4 + 0x30) == 0 ||
           (((*(longlong *)(param_4 + 0x38) == 0 || (*(longlong *)(param_4 + 0x40) == 0)) ||
            (*(longlong *)(param_4 + 0x48) == 0)))) || (*(longlong *)(param_4 + 0x50) == 0)))) {
        lVar8 = BN_new();
        if (lVar8 == 0) {
          uVar10 = CONCAT44(uVar9,0x141);
          goto LAB_14f7248a2;
        }
        if (*(longlong *)(param_4 + 0x28) == 0) {
          ERR_put_error(4,0x66,0xb3,"crypto\\rsa\\rsa_ossl.c",CONCAT44(uVar9,0x145));
        }
        else {
          BN_with_flags(lVar8,*(longlong *)(param_4 + 0x28),4);
          iVar2 = (**(code **)(*(longlong *)(param_4 + 8) + 0x30))
                            (lVar5,lVar4,lVar8,*(undefined8 *)(param_4 + 0x18),lVar3,
                             *(undefined8 *)(param_4 + 0x78));
          if (iVar2 != 0) {
            BN_free(lVar8);
            goto LAB_14f724837;
          }
        }
        BN_free(lVar8);
      }
      else {
        iVar2 = (**(code **)(*(longlong *)(param_4 + 8) + 0x28))(lVar5,lVar4,param_4,lVar3);
        if (iVar2 == 0) goto LAB_14f7248cc;
LAB_14f724837:
        if ((lVar7 == 0) || (iVar2 = BN_BLINDING_invert_ex(lVar5,local_40,lVar7,lVar3), iVar2 != 0))
        {
          if (param_5 == 5) {
            iVar2 = BN_sub(lVar4,*(undefined8 *)(param_4 + 0x18),lVar5);
            if (iVar2 == 0) goto LAB_14f7248cc;
            iVar2 = BN_cmp(lVar5,lVar4);
            if (0 < iVar2) {
              lVar5 = lVar4;
            }
          }
          local_44 = BN_bn2binpad(lVar5,param_3,iVar1);
        }
      }
      goto LAB_14f7248cc;
    }
    uVar10 = CONCAT44(uVar9,0x11d);
    uVar9 = 0x84;
  }
  else {
    if (param_5 == 3) {
      iVar2 = RSA_padding_add_none(lVar6,iVar1,param_2,param_1);
      goto LAB_14f724671;
    }
    if (param_5 == 5) {
      iVar2 = RSA_padding_add_X931(lVar6,iVar1,param_2,param_1);
      goto LAB_14f724671;
    }
    uVar10 = CONCAT44(uVar9,0x111);
    uVar9 = 0x76;
  }
LAB_14f7248a8:
  ERR_put_error(4,0x66,uVar9,"crypto\\rsa\\rsa_ossl.c",uVar10);
LAB_14f7248cc:
  BN_CTX_end(lVar3);
  BN_CTX_free(lVar3);
  CRYPTO_clear_free(lVar6,(longlong)iVar1,"crypto\\rsa\\rsa_ossl.c",0x16b);
  return local_44;
}

// FUN_14f724920 @ 14f724920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f724920(int param_1,undefined8 param_2,void *param_3,longlong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  void *_Src;
  longlong lVar7;
  byte *pbVar8;
  int iVar9;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar11;
  undefined8 uVar10;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  _Src = (void *)0x0;
  iVar2 = 0;
  iVar3 = -1;
  iVar9 = -1;
  iVar1 = BN_num_bits(*(undefined8 *)(param_4 + 0x18));
  if (0x4000 < iVar1) {
    ERR_put_error(4,0x67,0x69,"crypto\\rsa\\rsa_ossl.c",CONCAT44(uVar11,0x208));
    return -1;
  }
  iVar1 = BN_ucmp(*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x20));
  if (iVar1 < 1) {
    uVar5 = CONCAT44(uVar11,0x20d);
LAB_14f7249a0:
    ERR_put_error(4,0x67,0x65,"crypto\\rsa\\rsa_ossl.c",uVar5);
    return -1;
  }
  iVar1 = BN_num_bits(*(undefined8 *)(param_4 + 0x18));
  if ((0xc00 < iVar1) && (iVar1 = BN_num_bits(*(undefined8 *)(param_4 + 0x20)), 0x40 < iVar1)) {
    uVar5 = CONCAT44(uVar11,0x214);
    goto LAB_14f7249a0;
  }
  lVar4 = BN_CTX_new();
  if (lVar4 == 0) goto LAB_14f724bfd;
  BN_CTX_start(lVar4);
  uVar5 = BN_CTX_get(lVar4);
  lVar6 = BN_CTX_get(lVar4);
  iVar1 = BN_num_bits(*(undefined8 *)(param_4 + 0x18));
  iVar2 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  _Src = (void *)CRYPTO_malloc((longlong)iVar2,"crypto\\rsa\\rsa_ossl.c",0x21f);
  if ((lVar6 == 0) || (_Src == (void *)0x0)) {
    uVar10 = 0x221;
    uVar5 = 0x41;
  }
  else if (iVar2 < param_1) {
    uVar10 = 0x22a;
    uVar5 = 0x6c;
    iVar9 = iVar3;
  }
  else {
    lVar7 = BN_bin2bn(param_2,param_1,uVar5);
    if (lVar7 == 0) goto LAB_14f724bfd;
    iVar3 = BN_ucmp(uVar5,*(undefined8 *)(param_4 + 0x18));
    if (iVar3 < 0) {
      iVar3 = iVar9;
      if (((*(byte *)(param_4 + 0x74) & 2) != 0) &&
         (lVar7 = BN_MONT_CTX_set_locked
                            (param_4 + 0x78,*(undefined8 *)(param_4 + 0xa8),
                             *(undefined8 *)(param_4 + 0x18),lVar4), lVar7 == 0))
      goto LAB_14f724bfd;
      lVar7 = lVar4;
      iVar1 = (**(code **)(*(longlong *)(param_4 + 8) + 0x30))
                        (lVar6,uVar5,*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x18)
                         ,lVar4,*(undefined8 *)(param_4 + 0x78));
      uVar11 = (undefined4)((ulonglong)lVar7 >> 0x20);
      if ((iVar1 == 0) ||
         (((param_5 == 5 && (pbVar8 = (byte *)bn_get_words(lVar6), (*pbVar8 & 0xf) != 0xc)) &&
          (iVar1 = BN_sub(lVar6,*(undefined8 *)(param_4 + 0x18),lVar6), iVar1 == 0))))
      goto LAB_14f724bfd;
      iVar3 = BN_bn2binpad(lVar6,_Src,iVar2);
      if (param_5 == 1) {
        iVar3 = RSA_padding_check_PKCS1_type_1(param_3,iVar2,_Src,iVar3,CONCAT44(uVar11,iVar2));
      }
      else if (param_5 == 3) {
        memcpy(param_3,_Src,(longlong)iVar3);
      }
      else {
        if (param_5 != 5) {
          uVar10 = CONCAT44(uVar11,0x251);
          uVar5 = 0x76;
          goto LAB_14f724bdc;
        }
        iVar3 = RSA_padding_check_X931(param_3,iVar2,_Src,iVar3,CONCAT44(uVar11,iVar2));
      }
      if (-1 < iVar3) goto LAB_14f724bfd;
      uVar10 = 0x255;
      uVar5 = 0x72;
      iVar9 = iVar3;
    }
    else {
      uVar10 = 0x233;
      uVar5 = 0x84;
    }
  }
LAB_14f724bdc:
  ERR_put_error(4,0x67,uVar5,"crypto\\rsa\\rsa_ossl.c",uVar10);
  iVar3 = iVar9;
LAB_14f724bfd:
  BN_CTX_end(lVar4);
  BN_CTX_free(lVar4);
  CRYPTO_clear_free(_Src,(longlong)iVar2,"crypto\\rsa\\rsa_ossl.c",0x25a);
  return iVar3;
}

// FUN_14f724c40 @ 14f724c40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f724c40(int param_1,undefined8 param_2,void *param_3,longlong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  void *_Src;
  longlong lVar6;
  void *pvVar7;
  longlong lVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 in_stack_ffffffffffffff88;
  int local_58 [2];
  longlong local_50;
  longlong local_48;
  undefined8 uStack_40;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  uStack_40 = 0x14f724c5e;
  pvVar7 = (void *)0x0;
  iVar1 = 0;
  local_58[0] = 0;
  local_48 = 0;
  uVar11 = 0xffffffff;
  lVar4 = BN_CTX_new();
  _Src = pvVar7;
  uVar10 = 0xffffffff;
  if (lVar4 == 0) goto LAB_14f725014;
  BN_CTX_start(lVar4);
  uVar5 = BN_CTX_get(lVar4);
  local_50 = BN_CTX_get(lVar4);
  iVar1 = BN_num_bits(*(undefined8 *)(param_4 + 0x18));
  iVar1 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  _Src = (void *)CRYPTO_malloc((longlong)iVar1,"crypto\\rsa\\rsa_ossl.c",0x185);
  if ((local_50 == 0) || (_Src == (void *)0x0)) {
    uVar5 = CONCAT44(uVar9,0x187);
LAB_14f724ff2:
    uVar9 = 0x41;
  }
  else {
    if (param_1 <= iVar1) {
      lVar6 = BN_bin2bn(param_2,param_1,uVar5);
      uVar10 = uVar11;
      if (lVar6 == 0) goto LAB_14f725014;
      iVar2 = BN_ucmp(uVar5,*(undefined8 *)(param_4 + 0x18));
      if (-1 < iVar2) {
        uVar5 = CONCAT44(uVar9,0x19b);
        uVar9 = 0x84;
        goto LAB_14f724ff8;
      }
      if ((*(byte *)(param_4 + 0x74) & 0x80) == 0) {
        pvVar7 = (void *)FUN_14f725b50(param_4,local_58,lVar4);
        if (pvVar7 == (void *)0x0) {
          uVar5 = CONCAT44(uVar9,0x1a2);
          uVar9 = 0x44;
          goto LAB_14f724ff8;
        }
        if ((local_58[0] == 0) && (local_48 = BN_CTX_get(lVar4), local_48 == 0)) {
          uVar5 = CONCAT44(uVar9,0x1a9);
          goto LAB_14f724ff2;
        }
        iVar2 = FUN_14f725aa0(pvVar7,uVar5,local_48,lVar4);
        if (iVar2 == 0) goto LAB_14f725014;
      }
      lVar6 = local_50;
      if ((((*(byte *)(param_4 + 0x74) & 0x20) == 0) && (*(int *)(param_4 + 4) != 1)) &&
         (((*(longlong *)(param_4 + 0x30) == 0 ||
           (((*(longlong *)(param_4 + 0x38) == 0 || (*(longlong *)(param_4 + 0x40) == 0)) ||
            (*(longlong *)(param_4 + 0x48) == 0)))) || (*(longlong *)(param_4 + 0x50) == 0)))) {
        lVar6 = BN_new();
        if (lVar6 == 0) {
          uVar5 = CONCAT44(uVar9,0x1bb);
          goto LAB_14f724ff2;
        }
        if (*(longlong *)(param_4 + 0x28) == 0) {
          ERR_put_error(4,0x65,0xb3,"crypto\\rsa\\rsa_ossl.c",CONCAT44(uVar9,0x1bf));
        }
        else {
          BN_with_flags(lVar6,*(longlong *)(param_4 + 0x28),4);
          if (((*(byte *)(param_4 + 0x74) & 2) == 0) ||
             (lVar8 = BN_MONT_CTX_set_locked
                                (param_4 + 0x78,*(undefined8 *)(param_4 + 0xa8),
                                 *(undefined8 *)(param_4 + 0x18),lVar4), lVar8 != 0)) {
            lVar8 = lVar4;
            iVar2 = (**(code **)(*(longlong *)(param_4 + 8) + 0x30))
                              (local_50,uVar5,lVar6,*(undefined8 *)(param_4 + 0x18),lVar4,
                               *(undefined8 *)(param_4 + 0x78));
            uVar9 = (undefined4)((ulonglong)lVar8 >> 0x20);
            if (iVar2 != 0) {
              BN_free(lVar6);
              lVar6 = local_50;
              goto LAB_14f724ed4;
            }
          }
        }
        BN_free(lVar6);
        goto LAB_14f725014;
      }
      iVar2 = (**(code **)(*(longlong *)(param_4 + 8) + 0x28))(local_50,uVar5,param_4,lVar4);
      if (iVar2 == 0) goto LAB_14f725014;
LAB_14f724ed4:
      if (pvVar7 == (void *)0x0) {
        uVar11 = BN_bn2binpad(lVar6,_Src,iVar1);
        if ((int)uVar11 < 0) goto LAB_14f725014;
      }
      else {
        lVar8 = lVar4;
        uVar11 = ossl_bn_rsa_do_unblind
                           (lVar6,pvVar7,local_48,*(undefined8 *)(param_4 + 0x18),lVar4,_Src,iVar1);
        uVar9 = (undefined4)((ulonglong)lVar8 >> 0x20);
        if ((int)uVar11 == 0) goto LAB_14f725014;
      }
      uVar10 = uVar11 & 0xffffffff;
      if (param_5 == 1) {
        uVar3 = RSA_padding_check_PKCS1_type_2(param_3,iVar1,_Src,uVar10,CONCAT44(uVar9,iVar1));
LAB_14f724fb5:
        uVar10 = (ulonglong)uVar3;
      }
      else {
        if (param_5 == 2) {
          uVar3 = RSA_padding_check_SSLv23(param_3,iVar1,_Src,uVar10,CONCAT44(uVar9,iVar1));
          goto LAB_14f724fb5;
        }
        if (param_5 != 3) {
          if (param_5 != 4) {
            uVar5 = CONCAT44(uVar9,0x1f1);
            uVar9 = 0x76;
            goto LAB_14f724ff8;
          }
          uVar3 = RSA_padding_check_PKCS1_OAEP(param_3,iVar1,_Src,uVar10,CONCAT44(uVar9,iVar1),0,0);
          goto LAB_14f724fb5;
        }
        memcpy(param_3,_Src,(longlong)(int)uVar11);
      }
      ERR_put_error(4,0x65,0x72,"crypto\\rsa\\rsa_ossl.c",500);
      err_clear_last_constant_time((int)(uVar10 >> 0x1f) - 1U & 1);
      goto LAB_14f725014;
    }
    uVar5 = CONCAT44(uVar9,0x191);
    uVar9 = 0x6c;
  }
LAB_14f724ff8:
  ERR_put_error(4,0x65,uVar9,"crypto\\rsa\\rsa_ossl.c",uVar5);
  uVar10 = 0xffffffff;
LAB_14f725014:
  BN_CTX_end(lVar4);
  BN_CTX_free(lVar4);
  CRYPTO_clear_free(_Src,(longlong)iVar1,"crypto\\rsa\\rsa_ossl.c",0x1fa);
  return uVar10;
}

// FUN_14f725060 @ 14f725060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14f725060(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  longlong local_88;
  ulonglong local_80;
  undefined8 local_78;
  longlong local_70;
  longlong alStack_68 [4];
  undefined8 uStack_48;
  
  uStack_48 = 0x14f725077;
  alStack_68[3] = __security_cookie.value ^ (ulonglong)auStack_d8;
  iVar13 = 0;
  iVar2 = 0;
  local_80 = 0;
  bVar1 = false;
  local_a4 = 0;
  local_a0 = param_2;
  BN_CTX_start(param_4);
  uVar4 = BN_CTX_get(param_4);
  local_78 = BN_CTX_get(param_4);
  uVar5 = BN_CTX_get(param_4);
  local_90 = uVar5;
  local_70 = BN_CTX_get(param_4);
  if ((local_70 == 0) ||
     ((*(int *)(param_3 + 4) == 1 &&
      (iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_3 + 0x58)), local_a4 = iVar2, 2 < iVar2 - 1U))))
  goto LAB_14f72596d;
  if ((*(byte *)(param_3 + 0x74) & 4) != 0) {
    lVar6 = BN_new();
    if (lVar6 == 0) goto LAB_14f72596d;
    BN_with_flags(lVar6,*(undefined8 *)(param_3 + 0x30),4);
    lVar7 = BN_MONT_CTX_set_locked(param_3 + 0x80,*(undefined8 *)(param_3 + 0xa8),lVar6,param_4);
    if (lVar7 != 0) {
      BN_with_flags(lVar6,*(undefined8 *)(param_3 + 0x38),4);
      lVar7 = BN_MONT_CTX_set_locked(param_3 + 0x88,*(undefined8 *)(param_3 + 0xa8),lVar6,param_4);
      if (lVar7 != 0) {
        if (0 < iVar2) {
          do {
            puVar8 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_3 + 0x58),iVar13);
            BN_with_flags(lVar6,*puVar8,4);
            lVar7 = BN_MONT_CTX_set_locked(puVar8 + 4,*(undefined8 *)(param_3 + 0xa8),lVar6,param_4)
            ;
            if (lVar7 == 0) goto LAB_14f725859;
            iVar13 = iVar13 + 1;
          } while (iVar13 < iVar2);
        }
        BN_free(lVar6);
        if ((iVar2 == 0) && (*(code **)(*(longlong *)(param_3 + 8) + 0x30) == BN_mod_exp_mont)) {
          iVar13 = BN_num_bits(*(undefined8 *)(param_3 + 0x38));
          iVar3 = BN_num_bits(*(undefined8 *)(param_3 + 0x30));
          if (iVar13 == iVar3) {
            bVar1 = true;
            uVar5 = local_90;
            goto LAB_14f72522a;
          }
        }
        bVar1 = false;
        uVar5 = local_90;
        goto LAB_14f72522a;
      }
    }
    goto LAB_14f725859;
  }
LAB_14f72522a:
  if (((*(byte *)(param_3 + 0x74) & 2) != 0) &&
     (lVar6 = BN_MONT_CTX_set_locked
                        (param_3 + 0x78,*(undefined8 *)(param_3 + 0xa8),
                         *(undefined8 *)(param_3 + 0x18),param_4), lVar6 == 0)) goto LAB_14f72596d;
  uVar14 = local_a0;
  if (bVar1) {
    iVar2 = bn_from_mont_fixed_top(uVar5,local_a0,*(undefined8 *)(param_3 + 0x88),param_4);
    if ((iVar2 == 0) ||
       (iVar2 = bn_to_mont_fixed_top(uVar5,uVar5,*(undefined8 *)(param_3 + 0x88),param_4),
       iVar2 == 0)) goto LAB_14f72596d;
    local_b0 = *(undefined8 *)(param_3 + 0x88);
    local_b8 = param_4;
    iVar2 = BN_mod_exp_mont_consttime
                      (uVar5,uVar5,*(undefined8 *)(param_3 + 0x48),*(undefined8 *)(param_3 + 0x38));
    if ((iVar2 == 0) ||
       ((iVar2 = bn_from_mont_fixed_top(uVar4,uVar14,*(undefined8 *)(param_3 + 0x80),param_4),
        iVar2 == 0 ||
        (iVar2 = bn_to_mont_fixed_top(uVar4,uVar4,*(undefined8 *)(param_3 + 0x80),param_4),
        iVar2 == 0)))) goto LAB_14f72596d;
    local_b0 = *(undefined8 *)(param_3 + 0x80);
    local_b8 = param_4;
    iVar2 = BN_mod_exp_mont_consttime
                      (uVar4,uVar4,*(undefined8 *)(param_3 + 0x40),*(undefined8 *)(param_3 + 0x30));
    if ((iVar2 == 0) ||
       ((((iVar2 = bn_mod_sub_fixed_top(uVar4,uVar4,uVar5,*(undefined8 *)(param_3 + 0x30)),
          iVar2 == 0 ||
          (iVar2 = bn_to_mont_fixed_top(uVar4,uVar4,*(undefined8 *)(param_3 + 0x80),param_4),
          iVar2 == 0)) ||
         (local_b8 = param_4,
         iVar2 = bn_mul_mont_fixed_top
                           (uVar4,uVar4,*(undefined8 *)(param_3 + 0x50),
                            *(undefined8 *)(param_3 + 0x80)), iVar2 == 0)) ||
        ((iVar2 = bn_mul_fixed_top(param_1,uVar4,*(undefined8 *)(param_3 + 0x38),param_4),
         iVar2 == 0 ||
         (iVar2 = bn_mod_add_fixed_top(param_1,param_1,uVar5,*(undefined8 *)(param_3 + 0x18)),
         iVar2 == 0)))))) goto LAB_14f72596d;
LAB_14f725803:
    lVar6 = local_70;
    if ((*(longlong *)(param_3 + 0x20) != 0) && (*(longlong *)(param_3 + 0x18) != 0)) {
      if (*(code **)(*(longlong *)(param_3 + 8) + 0x30) == BN_mod_exp_mont) {
        local_b0 = *(undefined8 *)(param_3 + 0x78);
        local_b8 = param_4;
        iVar2 = BN_mod_exp_mont(local_70,param_1);
      }
      else {
        bn_correct_top(param_1);
        lVar6 = local_70;
        local_b0 = *(undefined8 *)(param_3 + 0x78);
        local_b8 = param_4;
        iVar2 = (**(code **)(*(longlong *)(param_3 + 8) + 0x30))
                          (local_70,param_1,*(undefined8 *)(param_3 + 0x20),
                           *(undefined8 *)(param_3 + 0x18));
      }
      if ((iVar2 == 0) || (iVar2 = BN_sub(lVar6,lVar6,uVar14), iVar2 == 0)) goto LAB_14f72596d;
      iVar2 = BN_is_zero(lVar6);
      if (iVar2 == 0) {
        local_b8 = param_4;
        iVar2 = BN_div(0,lVar6,lVar6,*(undefined8 *)(param_3 + 0x18));
        if ((iVar2 == 0) ||
           ((iVar2 = BN_is_negative(lVar6), iVar2 != 0 &&
            (iVar2 = BN_add(lVar6,lVar6,*(undefined8 *)(param_3 + 0x18)), iVar2 == 0))))
        goto LAB_14f72596d;
        iVar2 = BN_is_zero(lVar6);
        if (iVar2 == 0) {
          lVar6 = BN_new();
          if (lVar6 == 0) goto LAB_14f72596d;
          BN_with_flags(lVar6,*(undefined8 *)(param_3 + 0x28),4);
          local_b0 = *(undefined8 *)(param_3 + 0x78);
          local_b8 = param_4;
          iVar2 = (**(code **)(*(longlong *)(param_3 + 8) + 0x30))
                            (param_1,uVar14,lVar6,*(undefined8 *)(param_3 + 0x18));
          if (iVar2 == 0) goto LAB_14f7253fd;
          BN_free(lVar6);
        }
      }
    }
    bn_correct_top(param_1);
    local_80 = CONCAT44(local_80._4_4_,1);
    goto LAB_14f72596d;
  }
  lVar6 = BN_new();
  if (lVar6 == 0) goto LAB_14f72596d;
  BN_with_flags(lVar6,local_a0,4);
  local_b8 = param_4;
  iVar13 = BN_div(0,uVar4,lVar6,*(undefined8 *)(param_3 + 0x38));
  if ((iVar13 == 0) || (lVar7 = BN_new(), lVar7 == 0)) {
LAB_14f7253fd:
    BN_free(lVar6);
  }
  else {
    BN_with_flags(lVar7,*(undefined8 *)(param_3 + 0x48),4);
    local_b0 = *(undefined8 *)(param_3 + 0x88);
    local_b8 = param_4;
    iVar13 = (**(code **)(*(longlong *)(param_3 + 8) + 0x30))
                       (uVar5,uVar4,lVar7,*(undefined8 *)(param_3 + 0x38));
    if (iVar13 == 0) {
      BN_free(lVar6);
      lVar6 = lVar7;
LAB_14f725458:
      BN_free(lVar6);
      goto LAB_14f72596d;
    }
    BN_free(lVar7);
    local_b8 = param_4;
    iVar13 = BN_div(0,uVar4,lVar6,*(undefined8 *)(param_3 + 0x30));
    if (iVar13 != 0) {
      BN_free(lVar6);
      lVar6 = BN_new();
      if (lVar6 == 0) goto LAB_14f72596d;
      BN_with_flags(lVar6,*(undefined8 *)(param_3 + 0x40),4);
      local_b0 = *(undefined8 *)(param_3 + 0x80);
      local_b8 = param_4;
      iVar13 = (**(code **)(*(longlong *)(param_3 + 8) + 0x30))
                         (param_1,uVar4,lVar6,*(undefined8 *)(param_3 + 0x30));
      if (iVar13 != 0) {
        BN_free(lVar6);
        lVar7 = (longlong)iVar2;
        local_88 = lVar7;
        if (0 < iVar2) {
          lVar6 = BN_new();
          lVar9 = BN_new();
          if ((lVar9 == 0) || (lVar6 == 0)) {
LAB_14f72584e:
            BN_free(lVar9);
            goto LAB_14f725859;
          }
          local_a8 = 0;
          lVar10 = 0;
          if (0 < lVar7) {
            do {
              lVar7 = BN_CTX_get(param_4);
              alStack_68[lVar10] = lVar7;
              if (lVar7 == 0) goto LAB_14f72584e;
              local_98 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_3 + 0x58),local_a8);
              BN_with_flags(lVar9,local_a0,4);
              BN_with_flags(lVar6,local_98[1],4);
              local_b8 = param_4;
              iVar2 = BN_div(0,uVar4,lVar9,*local_98);
              if (iVar2 == 0) goto LAB_14f72584e;
              local_b0 = local_98[4];
              local_b8 = param_4;
              iVar2 = (**(code **)(*(longlong *)(param_3 + 8) + 0x30))(lVar7,uVar4,lVar6,*local_98);
              if (iVar2 == 0) goto LAB_14f72584e;
              local_a8 = local_a8 + 1;
              lVar10 = lVar10 + 1;
            } while (lVar10 < local_88);
          }
          BN_free(lVar9);
          BN_free(lVar6);
          uVar5 = local_90;
          iVar2 = local_a4;
        }
        iVar13 = BN_sub(param_1,param_1,uVar5);
        if (((iVar13 == 0) ||
            (((iVar13 = BN_is_negative(param_1), iVar13 != 0 &&
              (iVar13 = BN_add(param_1,param_1,*(undefined8 *)(param_3 + 0x30)), iVar13 == 0)) ||
             (iVar13 = BN_mul(uVar4,param_1,*(undefined8 *)(param_3 + 0x50),param_4), iVar13 == 0)))
            ) || (lVar6 = BN_new(), lVar6 == 0)) goto LAB_14f72596d;
        BN_with_flags(lVar6,uVar4,4);
        local_b8 = param_4;
        iVar13 = BN_div(0,param_1,lVar6,*(undefined8 *)(param_3 + 0x30));
        if (iVar13 != 0) {
          BN_free(lVar6);
          iVar13 = BN_is_negative(param_1);
          if (((iVar13 != 0) &&
              (iVar13 = BN_add(param_1,param_1,*(undefined8 *)(param_3 + 0x30)), iVar13 == 0)) ||
             ((iVar13 = BN_mul(uVar4,param_1,*(undefined8 *)(param_3 + 0x38),param_4), iVar13 == 0
              || (iVar13 = BN_add(param_1,uVar4,uVar5), iVar13 == 0)))) goto LAB_14f72596d;
          uVar14 = local_a0;
          if (0 < iVar2) {
            lVar6 = BN_new();
            if (lVar6 == 0) goto LAB_14f72596d;
            uVar11 = 0;
            uVar12 = uVar11;
            if (0 < local_88) {
              do {
                puVar8 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_3 + 0x58),uVar12);
                iVar2 = BN_sub(uVar4,alStack_68[uVar11],param_1);
                if (iVar2 == 0) goto LAB_14f725458;
                iVar2 = BN_mul(local_78,uVar4,puVar8[2],param_4);
                if (iVar2 == 0) goto LAB_14f7253fd;
                BN_with_flags(lVar6,local_78,4);
                local_b8 = param_4;
                iVar2 = BN_div(0,uVar4,lVar6,*puVar8);
                if (((iVar2 == 0) ||
                    ((iVar2 = BN_is_negative(uVar4), iVar2 != 0 &&
                     (iVar2 = BN_add(uVar4,uVar4,*puVar8), iVar2 == 0)))) ||
                   ((iVar2 = BN_mul(uVar4,uVar4,puVar8[3],param_4), iVar2 == 0 ||
                    (iVar2 = BN_add(param_1,param_1,uVar4), iVar2 == 0)))) goto LAB_14f725458;
                uVar12 = (ulonglong)((int)uVar12 + 1);
                uVar11 = uVar11 + 1;
              } while ((longlong)uVar11 < local_88);
            }
            BN_free(lVar6);
            uVar14 = local_a0;
          }
          goto LAB_14f725803;
        }
        goto LAB_14f7253fd;
      }
    }
LAB_14f725859:
    BN_free(lVar6);
  }
LAB_14f72596d:
  BN_CTX_end(param_4);
  return local_80 & 0xffffffff;
}

// FUN_14f7259c0 @ 14f7259c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7259c0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x78));
  BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x80));
  BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x88));
  iVar3 = 0;
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x58));
  if (0 < iVar1) {
    do {
      lVar2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x58),iVar3);
      BN_MONT_CTX_free(*(undefined8 *)(lVar2 + 0x20));
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x58));
    } while (iVar3 < iVar1);
  }
  return 1;
}

// RSA_PKCS1_OpenSSL @ 14f725a50

undefined ** RSA_PKCS1_OpenSSL(void)

{
  return &PTR_s_OpenSSL_PKCS_1_RSA_154df9490;
}

// RSA_get_default_method @ 14f725a60

undefined * RSA_get_default_method(void)

{
  return PTR_PTR_154df9508;
}

// FUN_14f725aa0 @ 14f725aa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f725aa0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_3 == 0) {
    uVar2 = BN_BLINDING_convert_ex(param_2,0,param_1);
  }
  else {
    BN_BLINDING_lock();
    uVar1 = BN_BLINDING_convert_ex(param_2,param_3,param_1,param_4);
    uVar2 = (ulonglong)uVar1;
    BN_BLINDING_unlock(param_1);
  }
  return uVar2;
}

// FUN_14f725b20 @ 14f725b20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f725b20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  BN_BLINDING_invert_ex(param_2,param_3,param_1);
  return;
}

// FUN_14f725b50 @ 14f725b50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f725b50(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0x98) == 0) {
    uVar2 = RSA_setup_blinding(param_1,param_3);
    *(undefined8 *)(param_1 + 0x98) = uVar2;
  }
  lVar3 = *(longlong *)(param_1 + 0x98);
  if (lVar3 != 0) {
    iVar1 = BN_BLINDING_is_current_thread(lVar3);
    if (iVar1 == 0) {
      *param_2 = 0;
      if (*(longlong *)(param_1 + 0xa0) == 0) {
        uVar2 = RSA_setup_blinding(param_1,param_3);
        *(undefined8 *)(param_1 + 0xa0) = uVar2;
      }
      lVar3 = *(longlong *)(param_1 + 0xa0);
    }
    else {
      *param_2 = 1;
    }
  }
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0xa8));
  return lVar3;
}

// FUN_14f725c20 @ 14f725c20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f725c20(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f725c40 @ 14f725c40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f725c40(void)

{
  OPENSSL_sk_value();
  return;
}

