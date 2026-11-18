// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// FUN_14f7c06a0 @ 14f7c06a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f7c06a0(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  
  piVar3 = (int *)BIO_get_data();
  lVar4 = BIO_next(param_1);
  if ((piVar3 == (int *)0x0) || (lVar4 == 0)) {
    return 0;
  }
  BIO_clear_flags(param_1,0xf);
  for (iVar5 = *piVar3 - piVar3[1]; 0 < iVar5; iVar5 = iVar5 - iVar1) {
    iVar1 = BIO_write(lVar4,(longlong)piVar3[1] + 0x30 + (longlong)piVar3,iVar5);
    if (iVar1 < 1) {
      BIO_copy_next_retry(param_1);
      return iVar1;
    }
    piVar3[1] = piVar3[1] + iVar1;
  }
  if ((param_2 == 0) || (param_3 < 1)) {
LAB_14f7c082c:
    param_3 = 0;
  }
  else {
    piVar3[1] = 0;
    iVar5 = param_3;
    do {
      iVar1 = iVar5;
      if (0x1000 < iVar5) {
        iVar1 = 0x1000;
      }
      iVar2 = EVP_CipherUpdate(*(undefined8 *)(piVar3 + 6),piVar3 + 0xc,piVar3,param_2,iVar1);
      if (iVar2 == 0) {
        BIO_clear_flags(param_1,0xf);
        piVar3[4] = 0;
        goto LAB_14f7c082c;
      }
      iVar5 = iVar5 - iVar1;
      iVar2 = *piVar3;
      param_2 = param_2 + iVar1;
      piVar3[1] = 0;
      for (; 0 < iVar2; iVar2 = iVar2 - iVar1) {
        iVar1 = BIO_write(lVar4,(longlong)piVar3[1] + 0x30 + (longlong)piVar3,iVar2);
        if (iVar1 < 1) {
          BIO_copy_next_retry(param_1);
          if (param_3 == iVar5) {
            return iVar1;
          }
          return param_3 - iVar5;
        }
        piVar3[1] = piVar3[1] + iVar1;
      }
      piVar3[0] = 0;
      piVar3[1] = 0;
    } while (0 < iVar5);
    BIO_copy_next_retry(param_1);
  }
  return param_3;
}

// FUN_14f7c0850 @ 14f7c0850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f7c0850(undefined8 param_1,void *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  int local_res20 [2];
  
  uVar10 = 0;
  if (param_2 == (void *)0x0) {
    return 0;
  }
  puVar5 = (uint *)BIO_get_data();
  lVar6 = BIO_next(param_1);
  if ((puVar5 == (uint *)0x0) || (lVar6 == 0)) {
    uVar10 = 0;
  }
  else {
    if (0 < (int)*puVar5) {
      uVar9 = *puVar5 - puVar5[1];
      if ((int)param_3 < (int)uVar9) {
        uVar9 = param_3;
      }
      uVar10 = (ulonglong)uVar9;
      memcpy(param_2,(void *)((longlong)(int)puVar5[1] + 0x30 + (longlong)puVar5),
             (longlong)(int)uVar9);
      puVar5[1] = puVar5[1] + uVar9;
      param_2 = (void *)((longlong)param_2 + (longlong)(int)uVar9);
      param_3 = param_3 - uVar9;
      if (*puVar5 == puVar5[1]) {
        puVar5[0] = 0;
        puVar5[1] = 0;
      }
    }
    iVar2 = EVP_CIPHER_CTX_block_size(*(undefined8 *)(puVar5 + 6));
    if (iVar2 == 1) {
      iVar2 = 0;
    }
    if (0 < (int)param_3) {
      while (0 < (int)puVar5[2]) {
        if (*(longlong *)(puVar5 + 8) == *(longlong *)(puVar5 + 10)) {
          puVar1 = puVar5 + 0x54;
          *(uint **)(puVar5 + 8) = puVar1;
          *(uint **)(puVar5 + 10) = puVar1;
          iVar3 = BIO_read(lVar6,puVar1,0x1000);
          uVar8 = (ulonglong)iVar3;
          if (0 < iVar3) {
            *(ulonglong *)(puVar5 + 10) = *(longlong *)(puVar5 + 10) + uVar8;
            goto LAB_14f7c097a;
          }
LAB_14f7c097e:
          iVar3 = BIO_test_flags(lVar6,8);
          if (iVar3 != 0) {
            if ((int)uVar10 == 0) {
              uVar10 = uVar8 & 0xffffffff;
            }
            break;
          }
          puVar5[2] = (uint)uVar8;
          uVar9 = EVP_CipherFinal_ex(*(undefined8 *)(puVar5 + 6),puVar5 + 0xc,puVar5);
          puVar5[4] = uVar9;
          puVar5[1] = 0;
LAB_14f7c0a50:
          uVar9 = param_3;
          if ((int)*puVar5 <= (int)param_3) {
            uVar9 = *puVar5;
          }
          if ((int)uVar9 < 1) break;
          memcpy(param_2,puVar5 + 0xc,(longlong)(int)uVar9);
          uVar10 = (ulonglong)((int)uVar10 + uVar9);
          puVar5[1] = uVar9;
          param_3 = param_3 - uVar9;
          param_2 = (void *)((longlong)param_2 + (longlong)(int)uVar9);
        }
        else {
          uVar8 = (ulonglong)((int)*(longlong *)(puVar5 + 10) - puVar5[8]);
LAB_14f7c097a:
          iVar3 = (int)uVar8;
          if (iVar3 < 1) goto LAB_14f7c097e;
          if ((int)param_3 < 0x101) {
LAB_14f7c0a13:
            if (0x100 < iVar3) {
              iVar3 = 0x100;
            }
            iVar4 = EVP_CipherUpdate(*(undefined8 *)(puVar5 + 6),puVar5 + 0xc,puVar5,
                                     *(undefined8 *)(puVar5 + 8),iVar3);
            if (iVar4 == 0) {
              BIO_clear_flags(param_1,0xf);
              puVar5[4] = 0;
              return 0;
            }
            *(longlong *)(puVar5 + 8) = *(longlong *)(puVar5 + 8) + (longlong)iVar3;
            puVar5[2] = 1;
            if (*puVar5 == 0) goto LAB_14f7c0a7d;
            goto LAB_14f7c0a50;
          }
          iVar7 = param_3 - iVar2;
          iVar4 = iVar3;
          if (iVar7 < iVar3) {
            iVar4 = iVar7;
          }
          iVar4 = EVP_CipherUpdate(*(undefined8 *)(puVar5 + 6),param_2,local_res20,
                                   *(undefined8 *)(puVar5 + 8),iVar4);
          if (iVar4 == 0) {
            BIO_clear_flags(param_1,0xf);
            return 0;
          }
          iVar3 = iVar3 - iVar7;
          uVar10 = (ulonglong)(uint)((int)uVar10 + local_res20[0]);
          param_2 = (void *)((longlong)param_2 + (longlong)local_res20[0]);
          param_3 = param_3 - local_res20[0];
          if (0 < iVar3) {
            *(longlong *)(puVar5 + 8) = *(longlong *)(puVar5 + 8) + (longlong)iVar7;
            goto LAB_14f7c0a13;
          }
          *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar5 + 10);
        }
LAB_14f7c0a7d:
        if ((int)param_3 < 1) break;
      }
    }
    BIO_clear_flags(param_1,0xf);
    BIO_copy_next_retry(param_1);
    if ((int)uVar10 == 0) {
      uVar10 = (ulonglong)puVar5[2];
    }
  }
  return uVar10;
}

// FUN_14f7c0b10 @ 14f7c0b10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f7c0b10(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar13 = 0x14f7c0b32;
  iVar10 = 1;
  piVar4 = (int *)BIO_get_data();
  uVar5 = BIO_next(param_1);
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  switch(param_2) {
  case 1:
    piVar4[3] = 0;
    piVar4[4] = 1;
    uVar12 = uVar5;
    uVar2 = EVP_CIPHER_CTX_encrypting(*(undefined8 *)(piVar4 + 6));
    iVar10 = EVP_CipherInit_ex(*(undefined8 *)(piVar4 + 6),0,0,0,0,uVar2,uVar12,uVar13);
    if (iVar10 == 0) goto LAB_14f7c0bd2;
  default:
switchD_14f7c0b9e_caseD_3:
LAB_14f7c0be8:
    iVar10 = BIO_ctrl(uVar5,param_2,param_3,param_4);
    break;
  case 2:
    if (piVar4[2] < 1) {
      return 1;
    }
    goto switchD_14f7c0b9e_caseD_3;
  case 10:
  case 0xd:
    if (0 < *piVar4 - piVar4[1]) {
      return *piVar4 - piVar4[1];
    }
    goto switchD_14f7c0b9e_caseD_3;
  case 0xb:
    iVar11 = 0;
    do {
      iVar10 = *piVar4;
      iVar1 = piVar4[1];
      if (iVar10 != iVar1) {
        do {
          iVar9 = iVar10 - iVar1;
          piVar6 = (int *)BIO_get_data(param_1);
          lVar7 = BIO_next(param_1);
          iVar3 = iVar11;
          if ((piVar6 != (int *)0x0) && (lVar7 != 0)) {
            BIO_clear_flags(param_1,0xf);
            for (iVar10 = *piVar6 - piVar6[1]; iVar3 = iVar11, 0 < iVar10; iVar10 = iVar10 - iVar3)
            {
              iVar3 = BIO_write(lVar7,(longlong)piVar6[1] + 0x30 + (longlong)piVar6,iVar10);
              if (iVar3 < 1) {
                BIO_copy_next_retry(param_1);
                if (iVar3 < 0) {
                  return iVar3;
                }
                break;
              }
              piVar6[1] = piVar6[1] + iVar3;
            }
          }
          iVar10 = *piVar4;
          iVar1 = piVar4[1];
          if (iVar10 - iVar1 == iVar9) {
            return iVar3;
          }
        } while (iVar10 != iVar1);
      }
      if (piVar4[3] != 0) goto LAB_14f7c0be8;
      piVar4[3] = 1;
      piVar4[1] = 0;
      iVar10 = EVP_CipherFinal_ex(*(undefined8 *)(piVar4 + 6),piVar4 + 0xc,piVar4);
      piVar4[4] = iVar10;
    } while (0 < iVar10);
    break;
  case 0xc:
    lVar7 = BIO_get_data(param_4);
    lVar8 = EVP_CIPHER_CTX_new();
    *(longlong *)(lVar7 + 0x18) = lVar8;
    if (lVar8 != 0) {
      iVar10 = EVP_CIPHER_CTX_copy(lVar8,*(undefined8 *)(piVar4 + 6));
      if (iVar10 == 0) {
        return 0;
      }
      BIO_set_init(param_4,1);
      return iVar10;
    }
LAB_14f7c0bd2:
    iVar10 = 0;
    break;
  case 0x65:
    BIO_clear_flags(param_1,0xf);
    iVar10 = BIO_ctrl(uVar5,param_2,param_3,param_4);
    BIO_copy_next_retry(param_1);
    break;
  case 0x71:
    iVar10 = piVar4[4];
    break;
  case 0x81:
    *param_4 = *(undefined8 *)(piVar4 + 6);
    BIO_set_init(param_1,1);
  }
  return iVar10;
}

// FUN_14f7c0e60 @ 14f7c0e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7c0e60(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f7c0e70;
  lVar1 = CRYPTO_zalloc(0x1150,"crypto\\evp\\bio_enc.c",0x44);
  if (lVar1 == 0) {
    ERR_put_error(6,199,0x41,"crypto\\evp\\bio_enc.c",0x45,uVar3);
    return 0;
  }
  lVar2 = EVP_CIPHER_CTX_new();
  *(longlong *)(lVar1 + 0x18) = lVar2;
  if (lVar2 == 0) {
    CRYPTO_free(lVar1,"crypto\\evp\\bio_enc.c",0x4b);
    return 0;
  }
  *(undefined4 *)(lVar1 + 8) = 1;
  *(longlong *)(lVar1 + 0x20) = lVar1 + 0x150;
  *(longlong *)(lVar1 + 0x28) = lVar1 + 0x150;
  *(undefined4 *)(lVar1 + 0x10) = 1;
  BIO_set_data(param_1,lVar1);
  BIO_set_init(param_1,1);
  return 1;
}

// FUN_14f7c0f40 @ 14f7c0f40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7c0f40(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = BIO_get_data();
  if (lVar1 == 0) {
    return 0;
  }
  EVP_CIPHER_CTX_free(*(undefined8 *)(lVar1 + 0x18));
  CRYPTO_clear_free(lVar1,0x1150,"crypto\\evp\\bio_enc.c",99);
  BIO_set_data(param_1,0);
  BIO_set_init(param_1,0);
  return 1;
}

// FUN_14f7c0fd0 @ 14f7c0fd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7c0fd0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = BIO_next();
  if (lVar1 == 0) {
    return;
  }
  BIO_callback_ctrl(lVar1,param_2,param_3);
  return;
}

// BIO_f_cipher @ 14f7c1020

undefined * BIO_f_cipher(void)

{
  return &DAT_1534eaba0;
}

// BIO_set_cipher @ 14f7c1030

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
BIO_set_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar6 = 0x14f7c104a;
  lVar2 = BIO_get_data();
  if (lVar2 == 0) {
    return 0;
  }
  pcVar3 = (code *)BIO_get_callback(param_1);
  uVar7 = (undefined4)(uVar6 >> 0x20);
  if (pcVar3 != (code *)0x0) {
    uVar6 = uVar6 & 0xffffffff00000000;
    iVar1 = (*pcVar3)(param_1,6,param_2,4,CONCAT44(uVar5,param_5),uVar6);
    uVar7 = (undefined4)(uVar6 >> 0x20);
    if (iVar1 < 1) {
      return 0;
    }
  }
  BIO_set_init(param_1,1);
  iVar1 = EVP_CipherInit_ex(*(undefined8 *)(lVar2 + 0x18),param_2,0,param_3,param_4,
                            CONCAT44(uVar7,param_5));
  if (iVar1 == 0) {
    return 0;
  }
  if (pcVar3 == (code *)0x0) {
    return 1;
  }
  uVar4 = (*pcVar3)(param_1,6,param_2,4,param_5,1);
  return uVar4;
}

