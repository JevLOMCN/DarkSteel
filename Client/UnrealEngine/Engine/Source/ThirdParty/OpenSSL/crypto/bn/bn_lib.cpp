// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 52

// BN_GENCB_free @ 14f6b6e80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_GENCB_free(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    CRYPTO_free(param_1,"crypto\\bn\\bn_lib.c",0x3c1,param_4,0x14f6b6e8f);
  }
  return;
}

// BN_GENCB_get_arg @ 14f6b6eb0

undefined8 BN_GENCB_get_arg(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}

// BN_GENCB_new @ 14f6b6ec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BN_GENCB_new(void)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_malloc(0x18,"crypto\\bn\\bn_lib.c",0x3b5);
  if (lVar1 == 0) {
    ERR_put_error(3,0x8f,0x41,"crypto\\bn\\bn_lib.c",0x3b6);
    lVar1 = 0;
  }
  return lVar1;
}

// BN_GENCB_set @ 14f6b6f20

void BN_GENCB_set(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 2;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 4) = param_2;
  return;
}

// BN_abs_is_word @ 14f6b6f60

undefined8 BN_abs_is_word(undefined8 *param_1,longlong param_2)

{
  if (((*(int *)(param_1 + 1) != 1) || (*(longlong *)*param_1 != param_2)) &&
     ((param_2 != 0 || (*(int *)(param_1 + 1) != 0)))) {
    return 0;
  }
  return 1;
}

// BN_bin2bn @ 14f6b6f90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * BN_bin2bn(byte *param_1,int param_2,longlong *param_3)

{
  byte bVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined8 uVar10;
  
  uVar10 = 0x14f6b6fa3;
  plVar2 = (longlong *)0x0;
  if (param_3 == (longlong *)0x0) {
    plVar2 = (longlong *)CRYPTO_zalloc(0x18,"crypto\\bn\\bn_lib.c",0xf6);
    if (plVar2 == (longlong *)0x0) {
      ERR_put_error(3,0x71,0x41,"crypto\\bn\\bn_lib.c",0xf7,uVar10);
      return (longlong *)0x0;
    }
    *(undefined4 *)((longlong)plVar2 + 0x14) = 1;
    param_3 = plVar2;
  }
  for (; (0 < param_2 && (*param_1 == 0)); param_1 = param_1 + 1) {
    param_2 = param_2 + -1;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_3 + 1) = 0;
    return param_3;
  }
  uVar8 = param_2 - 1U & 7;
  uVar6 = (param_2 - 1U >> 3) + 1;
  uVar5 = (ulonglong)uVar6;
  plVar3 = param_3;
  if (*(int *)((longlong)param_3 + 0xc) < (int)uVar6) {
    plVar3 = (longlong *)bn_expand2(param_3);
  }
  if (plVar3 == (longlong *)0x0) {
    BN_free(plVar2);
    param_3 = (longlong *)0x0;
  }
  else {
    *(uint *)(param_3 + 1) = uVar6;
    uVar4 = 0;
    *(undefined4 *)(param_3 + 2) = 0;
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
      uVar4 = uVar4 << 8 | (ulonglong)bVar1;
      bVar9 = uVar8 == 0;
      uVar8 = uVar8 - 1;
      if (bVar9) {
        uVar5 = (ulonglong)((int)uVar5 - 1);
        *(ulonglong *)(*param_3 + uVar5 * 8) = uVar4;
        uVar4 = 0;
        uVar8 = 7;
      }
    } while (param_2 != 0);
    uVar5 = (ulonglong)(int)param_3[1];
    if (0 < (int)param_3[1]) {
      lVar7 = *param_3 + uVar5 * 8;
      do {
        uVar8 = (uint)uVar5;
        plVar2 = (longlong *)(lVar7 + -8);
        lVar7 = lVar7 + -8;
        if (*plVar2 != 0) break;
        uVar8 = uVar8 - 1;
        uVar5 = (ulonglong)uVar8;
      } while (0 < (int)uVar8);
      *(uint *)(param_3 + 1) = uVar8;
    }
    if ((int)param_3[1] == 0) {
      *(undefined4 *)(param_3 + 2) = 0;
    }
  }
  return param_3;
}

// BN_bn2bin @ 14f6b7120

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int BN_bn2bin(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  
  iVar2 = (int)param_1[1];
  uVar5 = 0;
  if ((*(byte *)((longlong)param_1 + 0x14) & 4) == 0) {
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = BN_num_bits_word(*(undefined8 *)(*param_1 + (longlong)(iVar2 + -1) * 8));
      iVar4 = iVar4 + (iVar2 + -1) * 0x40;
    }
  }
  else {
    iVar4 = FUN_14f6b8840();
  }
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  iVar4 = (int)(iVar4 + 7 + (iVar4 + 7 >> 0x1f & 7U)) >> 3;
  uVar6 = (ulonglong)iVar4;
  if ((uVar3 & 0x1fffffff) == 0) {
    OPENSSL_cleanse(param_2,uVar6);
    return iVar4;
  }
  pbVar8 = (byte *)(uVar6 + param_2);
  if (iVar4 != 0) {
    uVar7 = uVar5;
    do {
      lVar1 = uVar7 - (longlong)(iVar2 * 8);
      pbVar8 = pbVar8 + -1;
      uVar7 = uVar7 + 1;
      *pbVar8 = (byte)(*(ulonglong *)(*param_1 + (uVar5 & 0xfffffffffffffff8)) >>
                      (((byte)uVar5 & 7) << 3)) & (byte)(lVar1 >> 0x3f);
      uVar5 = uVar5 - ((longlong)(uVar5 - ((longlong)(int)(uVar3 << 3) + -1)) >> 0x3f);
    } while (uVar7 < uVar6);
  }
  return iVar4;
}

// BN_bn2binpad @ 14f6b7240

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_bn2binpad(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_14f6b81c0();
  return uVar1;
}

// BN_bn2lebinpad @ 14f6b7270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_bn2lebinpad(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_14f6b81c0();
  return uVar1;
}

// BN_clear @ 14f6b72a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_clear(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if (*param_1 != 0) {
      OPENSSL_cleanse(*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 3);
    }
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}

// BN_clear_bit @ 14f6b72e0

undefined8 BN_clear_bit(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (-1 < param_2) {
    uVar4 = param_2 >> 0x1f & 0x3f;
    uVar2 = param_2 + uVar4;
    iVar3 = (int)uVar2 >> 6;
    if (iVar3 < (int)param_1[1]) {
      *(ulonglong *)(*param_1 + (longlong)iVar3 * 8) =
           *(ulonglong *)(*param_1 + (longlong)iVar3 * 8) &
           ~(1L << ((longlong)(int)((uVar2 & 0x3f) - uVar4) & 0x3fU));
      uVar5 = (ulonglong)(int)param_1[1];
      if (0 < (int)param_1[1]) {
        lVar6 = *param_1 + uVar5 * 8;
        do {
          uVar2 = (uint)uVar5;
          plVar1 = (longlong *)(lVar6 + -8);
          lVar6 = lVar6 + -8;
          if (*plVar1 != 0) break;
          uVar2 = uVar2 - 1;
          uVar5 = (ulonglong)uVar2;
        } while (0 < (int)uVar2);
        *(uint *)(param_1 + 1) = uVar2;
      }
      if ((int)param_1[1] == 0) {
        *(undefined4 *)(param_1 + 2) = 0;
      }
      return 1;
    }
  }
  return 0;
}

// BN_clear_free @ 14f6b7360

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_clear_free(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if ((*param_1 != 0) && ((*(uint *)((longlong)param_1 + 0x14) & 2) == 0)) {
      if ((*(uint *)((longlong)param_1 + 0x14) & 8) == 0) {
        CRYPTO_clear_free(*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 3,
                          "crypto\\bn\\bn_lib.c",0xce);
      }
      else {
        CRYPTO_secure_clear_free();
      }
    }
    if ((*(byte *)((longlong)param_1 + 0x14) & 1) != 0) {
      OPENSSL_cleanse(param_1,0x18);
      CRYPTO_free(param_1,"crypto\\bn\\bn_lib.c",0xdc);
    }
  }
  return;
}

// BN_cmp @ 14f6b73f0

uint BN_cmp(longlong *param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  uint uVar7;
  
  if (param_1 == (longlong *)0x0) {
    uVar4 = (uint)(param_2 != (longlong *)0x0);
  }
  else {
    uVar4 = 0xffffffff;
    if (param_2 != (longlong *)0x0) {
      iVar1 = (int)param_1[2];
      if (iVar1 == (int)param_2[2]) {
        uVar4 = 0xffffffff;
        if (iVar1 != 0) {
          uVar4 = 1;
        }
        uVar7 = 1;
        if (iVar1 != 0) {
          uVar7 = 0xffffffff;
        }
        iVar1 = (int)param_1[1];
        if (iVar1 <= (int)param_2[1]) {
          if (iVar1 < (int)param_2[1]) {
            return uVar4;
          }
          if (-1 < iVar1 + -1) {
            lVar6 = (longlong)(iVar1 + -1);
            puVar5 = (ulonglong *)(*param_2 + lVar6 * 8);
            do {
              uVar2 = *(ulonglong *)((*param_1 - *param_2) + (longlong)puVar5);
              uVar3 = *puVar5;
              if (uVar2 >= uVar3 && uVar2 != uVar3) {
                return uVar7;
              }
              if (uVar2 < uVar3) {
                return uVar4;
              }
              puVar5 = puVar5 + -1;
              lVar6 = lVar6 + -1;
            } while (-1 < lVar6);
          }
          return 0;
        }
      }
      else {
        uVar7 = 1;
        if (iVar1 != 0) {
          uVar7 = 0xffffffff;
        }
      }
      return uVar7;
    }
  }
  return uVar4;
}

// BN_consttime_swap @ 14f6b7480

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_consttime_swap(ulonglong param_1,ulonglong *param_2,ulonglong *param_3,uint param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  if (param_2 != param_3) {
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0xffffffffffffffff - ((longlong)(param_1 - 1 & ~param_1) >> 0x3f);
    uVar8 = (uint)uVar11;
    uVar7 = ((uint)param_2[1] ^ (uint)param_3[1]) & uVar8;
    *(uint *)(param_2 + 1) = (uint)param_2[1] ^ uVar7;
    *(uint *)(param_3 + 1) = (uint)param_3[1] ^ uVar7;
    uVar7 = ((uint)param_2[2] ^ (uint)param_3[2]) & uVar8;
    *(uint *)(param_2 + 2) = (uint)param_2[2] ^ uVar7;
    *(uint *)(param_3 + 2) = (uint)param_3[2] ^ uVar7;
    uVar8 = (*(uint *)((longlong)param_2 + 0x14) ^ *(uint *)((longlong)param_3 + 0x14)) & 4 & uVar8;
    *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) ^ uVar8;
    *(uint *)((longlong)param_3 + 0x14) = *(uint *)((longlong)param_3 + 0x14) ^ uVar8;
    if ((0 < (int)param_4) && (3 < param_4)) {
      puVar3 = (ulonglong *)*param_3;
      puVar4 = (ulonglong *)*param_2;
      puVar1 = puVar3 + (int)(param_4 - 1);
      puVar2 = puVar4 + (int)(param_4 - 1);
      if (((puVar2 < puVar3) || (puVar1 < puVar4)) &&
         ((((param_3 < puVar3 || (puVar1 < param_3)) && ((param_2 < puVar3 || (puVar1 < param_2))))
          && (((param_3 < puVar4 || (puVar2 < param_3)) &&
              ((param_2 < puVar4 || (puVar2 < param_2)))))))) {
        uVar8 = param_4 & 0x80000003;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
        }
        uVar12 = uVar9;
        do {
          uVar5 = *(ulonglong *)(uVar12 + (longlong)puVar4);
          uVar6 = ((ulonglong *)(uVar12 + (longlong)puVar4))[1];
          uVar10 = (int)uVar9 + 4;
          uVar9 = (ulonglong)uVar10;
          uVar14 = (uVar5 ^ *(ulonglong *)(uVar12 + (longlong)puVar3)) & uVar11;
          uVar15 = (uVar6 ^ ((ulonglong *)(uVar12 + (longlong)puVar3))[1]) & uVar11;
          *(ulonglong *)(uVar12 + (longlong)puVar4) = uVar14 ^ uVar5;
          ((ulonglong *)(uVar12 + (longlong)puVar4))[1] = uVar15 ^ uVar6;
          uVar5 = ((ulonglong *)(uVar12 + (longlong)puVar3))[1];
          *(ulonglong *)(uVar12 + (longlong)puVar3) =
               uVar14 ^ *(ulonglong *)(uVar12 + (longlong)puVar3);
          ((ulonglong *)(uVar12 + (longlong)puVar3))[1] = uVar15 ^ uVar5;
          puVar1 = (ulonglong *)(uVar12 + 0x10 + (longlong)puVar4);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (ulonglong *)(uVar12 + 0x10 + (longlong)puVar3);
          uVar14 = (uVar5 ^ *puVar1) & uVar11;
          uVar15 = (uVar6 ^ puVar1[1]) & uVar11;
          puVar1 = (ulonglong *)(uVar12 + 0x10 + (longlong)puVar4);
          *puVar1 = uVar14 ^ uVar5;
          puVar1[1] = uVar15 ^ uVar6;
          puVar1 = (ulonglong *)(uVar12 + 0x10 + (longlong)puVar3);
          uVar5 = puVar1[1];
          puVar2 = (ulonglong *)(uVar12 + 0x10 + (longlong)puVar3);
          *puVar2 = uVar14 ^ *puVar1;
          puVar2[1] = uVar15 ^ uVar5;
          uVar12 = uVar12 + 0x20;
        } while ((int)uVar10 < (int)(param_4 - uVar8));
      }
    }
    for (lVar13 = (longlong)(int)uVar10; lVar13 < (int)param_4; lVar13 = lVar13 + 1) {
      uVar9 = *(ulonglong *)(*param_2 + lVar13 * 8);
      uVar12 = (*(ulonglong *)(*param_3 + lVar13 * 8) ^ uVar9) & uVar11;
      *(ulonglong *)(*param_2 + lVar13 * 8) = uVar9 ^ uVar12;
      puVar1 = (ulonglong *)(*param_3 + lVar13 * 8);
      *puVar1 = *puVar1 ^ uVar12;
    }
  }
  return;
}

// BN_copy @ 14f6b7680

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * BN_copy(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  if ((*(byte *)((longlong)param_2 + 0x14) & 4) == 0) {
    iVar2 = *(int *)(param_2 + 1);
  }
  else {
    iVar2 = *(int *)((longlong)param_2 + 0xc);
  }
  if (param_1 != param_2) {
    puVar1 = param_1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      puVar1 = (undefined8 *)bn_expand2(param_1,iVar2);
    }
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if (0 < *(int *)(param_2 + 1)) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)iVar2 << 3);
    }
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  return param_1;
}

// BN_dup @ 14f6b7720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * BN_dup(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if ((*(byte *)((longlong)param_1 + 0x14) & 8) == 0) {
    puVar1 = (undefined8 *)BN_new();
  }
  else {
    puVar1 = (undefined8 *)BN_secure_new();
  }
  if (puVar1 != (undefined8 *)0x0) {
    if ((*(byte *)((longlong)param_1 + 0x14) & 4) == 0) {
      iVar3 = *(int *)(param_1 + 1);
    }
    else {
      iVar3 = *(int *)((longlong)param_1 + 0xc);
    }
    if (puVar1 != param_1) {
      puVar2 = puVar1;
      if (*(int *)((longlong)puVar1 + 0xc) < iVar3) {
        puVar2 = (undefined8 *)bn_expand2(puVar1,iVar3);
      }
      if (puVar2 == (undefined8 *)0x0) {
        BN_free(puVar1);
        return (undefined8 *)0x0;
      }
      if (0 < *(int *)(param_1 + 1)) {
        memcpy((void *)*puVar1,(void *)*param_1,(longlong)iVar3 << 3);
      }
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 2);
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 1);
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}

// BN_free @ 14f6b7800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((*(uint *)((longlong)param_1 + 0x14) & 2) == 0) {
      if ((*(uint *)((longlong)param_1 + 0x14) & 8) == 0) {
        CRYPTO_free(*param_1,"crypto\\bn\\bn_lib.c",0xd0);
      }
      else {
        CRYPTO_secure_clear_free
                  (*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 3,"crypto\\bn\\bn_lib.c",
                   0xcc);
      }
    }
    if ((*(byte *)((longlong)param_1 + 0x14) & 1) != 0) {
      CRYPTO_free(param_1,"crypto\\bn\\bn_lib.c",0xe7);
    }
  }
  return;
}

// BN_get_flags @ 14f6b7880

uint BN_get_flags(longlong param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x14) & param_2;
}

// BN_get_word @ 14f6b78d0

undefined8 BN_get_word(undefined8 *param_1)

{
  if (1 < *(int *)(param_1 + 1)) {
    return 0xffffffffffffffff;
  }
  if (*(int *)(param_1 + 1) == 1) {
    return *(undefined8 *)*param_1;
  }
  return 0;
}

// BN_is_bit_set @ 14f6b78f0

uint BN_is_bit_set(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (-1 < param_2) {
    uVar2 = param_2 >> 0x1f & 0x3f;
    param_2 = param_2 + uVar2;
    iVar1 = param_2 >> 6;
    if (iVar1 < (int)param_1[1]) {
      return (uint)(*(ulonglong *)(*param_1 + (longlong)iVar1 * 8) >>
                   (((byte)param_2 & 0x3f) - (char)uVar2 & 0x3f)) & 1;
    }
  }
  return 0;
}

// BN_is_negative @ 14f6b7930

bool BN_is_negative(longlong param_1)

{
  return *(int *)(param_1 + 0x10) != 0;
}

// BN_is_odd @ 14f6b7940

undefined8 BN_is_odd(undefined8 *param_1)

{
  if ((0 < *(int *)(param_1 + 1)) && ((*(byte *)*param_1 & 1) != 0)) {
    return 1;
  }
  return 0;
}

// BN_is_one @ 14f6b7960

undefined8 BN_is_one(undefined8 *param_1)

{
  if (((*(int *)(param_1 + 1) == 1) && (*(longlong *)*param_1 == 1)) && (*(int *)(param_1 + 2) == 0)
     ) {
    return 1;
  }
  return 0;
}

// BN_is_word @ 14f6b7990

undefined8 BN_is_word(undefined8 *param_1,longlong param_2)

{
  if ((((*(int *)(param_1 + 1) == 1) && (*(longlong *)*param_1 == param_2)) ||
      ((param_2 == 0 && (*(int *)(param_1 + 1) == 0)))) &&
     ((param_2 == 0 || (*(int *)(param_1 + 2) == 0)))) {
    return 1;
  }
  return 0;
}

// BN_is_zero @ 14f6b79d0

bool BN_is_zero(longlong param_1)

{
  return *(int *)(param_1 + 8) == 0;
}

// BN_lebin2bn @ 14f6b79e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * BN_lebin2bn(longlong param_1,int param_2,longlong *param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined8 uVar11;
  
  uVar11 = 0x14f6b79f3;
  uVar5 = (ulonglong)param_2;
  plVar9 = (longlong *)0x0;
  if (param_3 == (longlong *)0x0) {
    param_3 = (longlong *)CRYPTO_zalloc(0x18,"crypto\\bn\\bn_lib.c",0xf6);
    if (param_3 == (longlong *)0x0) {
      ERR_put_error(3,0x71,0x41,"crypto\\bn\\bn_lib.c",0xf7,uVar11);
      return (longlong *)0x0;
    }
    *(undefined4 *)((longlong)param_3 + 0x14) = 1;
    plVar9 = param_3;
  }
  param_1 = param_1 + uVar5;
  if (0 < param_2) {
    do {
      if (*(char *)(param_1 + -1) != '\0') break;
      param_1 = param_1 + -1;
      uVar4 = (int)uVar5 - 1;
      uVar5 = (ulonglong)uVar4;
    } while (0 < (int)uVar4);
    param_2 = (int)uVar5;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_3 + 1) = 0;
    return param_3;
  }
  uVar8 = (int)uVar5 - 1;
  uVar4 = uVar8 & 7;
  uVar8 = (uVar8 >> 3) + 1;
  uVar6 = (ulonglong)uVar8;
  plVar2 = param_3;
  if (*(int *)((longlong)param_3 + 0xc) < (int)uVar8) {
    plVar2 = (longlong *)bn_expand2(param_3);
  }
  if (plVar2 == (longlong *)0x0) {
    BN_free(plVar9);
    param_3 = (longlong *)0x0;
  }
  else {
    *(uint *)(param_3 + 1) = uVar8;
    uVar3 = 0;
    *(undefined4 *)(param_3 + 2) = 0;
    do {
      pbVar1 = (byte *)(param_1 + -1);
      param_1 = param_1 + -1;
      uVar8 = (int)uVar5 - 1;
      uVar5 = (ulonglong)uVar8;
      uVar3 = uVar3 << 8 | (ulonglong)*pbVar1;
      bVar10 = uVar4 == 0;
      uVar4 = uVar4 - 1;
      if (bVar10) {
        uVar6 = (ulonglong)((int)uVar6 - 1);
        *(ulonglong *)(*param_3 + uVar6 * 8) = uVar3;
        uVar3 = 0;
        uVar4 = 7;
      }
    } while (uVar8 != 0);
    uVar5 = (ulonglong)(int)param_3[1];
    if (0 < (int)param_3[1]) {
      lVar7 = *param_3 + uVar5 * 8;
      do {
        uVar4 = (uint)uVar5;
        plVar9 = (longlong *)(lVar7 + -8);
        lVar7 = lVar7 + -8;
        if (*plVar9 != 0) break;
        uVar4 = uVar4 - 1;
        uVar5 = (ulonglong)uVar4;
      } while (0 < (int)uVar4);
      *(uint *)(param_3 + 1) = uVar4;
    }
    if ((int)param_3[1] == 0) {
      *(undefined4 *)(param_3 + 2) = 0;
    }
  }
  return param_3;
}

// BN_mask_bits @ 14f6b7b70

undefined8 BN_mask_bits(longlong *param_1,int param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (-1 < param_2) {
    uVar6 = param_2 >> 0x1f & 0x3f;
    uVar3 = param_2 + uVar6;
    iVar4 = (uVar3 & 0x3f) - uVar6;
    iVar5 = (int)uVar3 >> 6;
    if (iVar5 < (int)param_1[1]) {
      if (iVar4 == 0) {
        *(int *)(param_1 + 1) = iVar5;
      }
      else {
        *(int *)(param_1 + 1) = iVar5 + 1;
        puVar2 = (ulonglong *)(*param_1 + (longlong)iVar5 * 8);
        *puVar2 = *puVar2 & ~(-1L << ((byte)iVar4 & 0x3f));
      }
      uVar7 = (ulonglong)(int)param_1[1];
      if (0 < (int)param_1[1]) {
        lVar8 = *param_1 + uVar7 * 8;
        do {
          uVar3 = (uint)uVar7;
          plVar1 = (longlong *)(lVar8 + -8);
          lVar8 = lVar8 + -8;
          if (*plVar1 != 0) break;
          uVar3 = uVar3 - 1;
          uVar7 = (ulonglong)uVar3;
        } while (0 < (int)uVar3);
        *(uint *)(param_1 + 1) = uVar3;
      }
      if ((int)param_1[1] == 0) {
        *(undefined4 *)(param_1 + 2) = 0;
      }
      return 1;
    }
  }
  return 0;
}

// BN_new @ 14f6b7c00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BN_new(void)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_zalloc(0x18,"crypto\\bn\\bn_lib.c",0xf6);
  if (lVar1 == 0) {
    ERR_put_error(3,0x71,0x41,"crypto\\bn\\bn_lib.c",0xf7);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x14) = 1;
  return lVar1;
}

// BN_num_bits @ 14f6b7c60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BN_num_bits(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = (int)param_1[1] + -1;
  if ((*(byte *)((longlong)param_1 + 0x14) & 4) != 0) {
    uVar2 = FUN_14f6b8840();
    return uVar2;
  }
  if ((int)param_1[1] == 0) {
    return 0;
  }
  iVar1 = BN_num_bits_word(*(undefined8 *)(*param_1 + (longlong)iVar3 * 8));
  return (ulonglong)(uint)(iVar1 + iVar3 * 0x40);
}

// BN_num_bits_word @ 14f6b7cb0

int BN_num_bits_word(ulonglong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar5 = -(param_1 >> 0x20);
  uVar6 = param_1 ^ (param_1 >> 0x20 ^ param_1) & lVar5 >> 0x3f;
  lVar2 = -(uVar6 >> 0x10);
  uVar6 = uVar6 ^ (uVar6 >> 0x10 ^ uVar6) & lVar2 >> 0x3f;
  lVar3 = -(uVar6 >> 8);
  uVar6 = uVar6 ^ (uVar6 >> 8 ^ uVar6) & lVar3 >> 0x3f;
  lVar4 = -(uVar6 >> 4);
  uVar6 = uVar6 ^ (uVar6 >> 4 ^ uVar6) & lVar4 >> 0x3f;
  lVar1 = -(uVar6 >> 2);
  return ((uint)(lVar1 >> 0x3f) & 2) +
         ((uint)((longlong)-(((uVar6 >> 2 ^ uVar6) & lVar1 >> 0x3f ^ uVar6) >> 1) >> 0x3f) & 1) +
         (uint)(param_1 != 0) + ((uint)(lVar5 >> 0x3f) & 0x20) + ((uint)(lVar2 >> 0x3f) & 0x10) +
         ((uint)(lVar3 >> 0x3f) & 8) + ((uint)(lVar4 >> 0x3f) & 4);
}

// BN_secure_new @ 14f6b7d90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BN_secure_new(void)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_zalloc(0x18,"crypto\\bn\\bn_lib.c",0xf6);
  if (lVar1 == 0) {
    ERR_put_error(3,0x71,0x41,"crypto\\bn\\bn_lib.c",0xf7);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x14) = 9;
  return lVar1;
}

// BN_security_bits @ 14f6b7df0

int BN_security_bits(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0x3c00) {
    if (param_1 < 0x1e00) {
      if (param_1 < 0xc00) {
        if (param_1 < 0x800) {
          if (param_1 < 0x400) {
            return 0;
          }
          iVar1 = 0x50;
        }
        else {
          iVar1 = 0x70;
        }
      }
      else {
        iVar1 = 0x80;
      }
    }
    else {
      iVar1 = 0xc0;
    }
  }
  else {
    iVar1 = 0x100;
  }
  if (param_2 != -1) {
    param_2 = param_2 / 2;
    if (param_2 < 0x50) {
      return 0;
    }
    if (iVar1 <= param_2) {
      param_2 = iVar1;
    }
    return param_2;
  }
  return iVar1;
}

// BN_set_bit @ 14f6b7e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_set_bit(longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong *puVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  
  if (param_2 < 0) {
    return 0;
  }
  uVar6 = param_2 >> 0x1f & 0x3f;
  uVar3 = param_2 + uVar6;
  iVar7 = (int)uVar3 >> 6;
  if ((int)param_1[1] <= iVar7) {
    iVar1 = iVar7 + 1;
    plVar4 = param_1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
      plVar4 = (longlong *)bn_expand2(param_1,iVar1);
    }
    if (plVar4 == (longlong *)0x0) {
      return 0;
    }
    for (lVar5 = (longlong)(int)param_1[1]; lVar5 < iVar1; lVar5 = lVar5 + 1) {
      *(undefined8 *)(*param_1 + lVar5 * 8) = 0;
    }
    *(int *)(param_1 + 1) = iVar1;
  }
  puVar2 = (ulonglong *)(*param_1 + (longlong)iVar7 * 8);
  *puVar2 = *puVar2 | 1L << ((longlong)(int)((uVar3 & 0x3f) - uVar6) & 0x3fU);
  return 1;
}

// BN_set_flags @ 14f6b7f20

void BN_set_flags(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | param_2;
  return;
}

// BN_set_negative @ 14f6b7f30

void BN_set_negative(longlong param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(param_1 + 8) != 0)) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

// BN_set_word @ 14f6b7fe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_set_word(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (*(int *)((longlong)param_1 + 0xc) < 1) {
    puVar1 = (undefined8 *)bn_expand2();
  }
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 2) = 0;
    *(longlong *)*param_1 = param_2;
    *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
    return 1;
  }
  return 0;
}

// BN_swap @ 14f6b8050

void BN_swap(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x14);
  uVar2 = *(uint *)((longlong)param_2 + 0x14);
  uVar6 = *param_1;
  uVar3 = *(undefined4 *)(param_1 + 1);
  uVar4 = *(undefined4 *)((longlong)param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 2);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *param_2 = uVar6;
  *(undefined4 *)(param_2 + 1) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
  *(undefined4 *)(param_2 + 2) = uVar5;
  *(uint *)((longlong)param_1 + 0x14) = uVar2 & 0xe | uVar1 & 1;
  *(uint *)((longlong)param_2 + 0x14) = uVar2 & 1 | uVar1 & 0xe;
  return;
}

// BN_to_montgomery @ 14f6b80d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_to_montgomery(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  BN_mod_mul_montgomery(param_1,param_2,param_3 + 8,param_3,param_4);
  return;
}

// BN_ucmp @ 14f6b8100

int BN_ucmp(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  
  iVar2 = (int)param_1[1] - (int)param_2[1];
  if (iVar2 == 0) {
    iVar2 = (int)param_1[1] + -1;
    lVar4 = (longlong)iVar2;
    if (-1 < iVar2) {
      puVar3 = (ulonglong *)(*param_2 + lVar4 * 8);
      do {
        uVar1 = *(ulonglong *)((*param_1 - *param_2) + (longlong)puVar3);
        if (uVar1 != *puVar3) {
          iVar2 = -1;
          if (*puVar3 < uVar1) {
            iVar2 = 1;
          }
          return iVar2;
        }
        puVar3 = puVar3 + -1;
        lVar4 = lVar4 + -1;
      } while (-1 < lVar4);
    }
    iVar2 = 0;
  }
  return iVar2;
}

// BN_value_one @ 14f6b8160

undefined ** BN_value_one(void)

{
  return &PTR_DAT_15348a978;
}

// BN_with_flags @ 14f6b8170

void BN_with_flags(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(uint *)((longlong)param_1 + 0x14) =
       *(uint *)((longlong)param_2 + 0x14) & 0xfffffffe | *(uint *)((longlong)param_1 + 0x14) & 1 |
       param_3 | 2;
  return;
}

// FUN_14f6b81c0 @ 14f6b81c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6b81c0(longlong *param_1,byte *param_2,int param_3,int param_4)

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  byte bVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iStack_54;
  
  iVar15 = (int)param_1[1];
  uVar10 = 0;
  uVar5 = 0;
  if ((*(byte *)((longlong)param_1 + 0x14) & 4) == 0) {
    uVar3 = uVar5;
    if (iVar15 != 0) {
      iVar4 = BN_num_bits_word(*(undefined8 *)(*param_1 + (longlong)(iVar15 + -1) * 8));
      uVar3 = iVar4 + (iVar15 + -1) * 0x40;
    }
  }
  else {
    uVar3 = FUN_14f6b8840();
  }
  iVar4 = (int)(uVar3 + 7 + ((int)(uVar3 + 7) >> 0x1f & 7U)) >> 3;
  if ((param_3 != -1) && (bVar2 = param_3 < iVar4, iVar4 = param_3, bVar2)) {
    puVar13 = (undefined8 *)*param_1;
    iVar7 = (int)param_1[1];
    if (0 < iVar7) {
      puVar8 = puVar13 + iVar7;
      do {
        plVar1 = puVar8 + -1;
        puVar8 = puVar8 + -1;
        if (*plVar1 != 0) break;
        iVar7 = iVar7 + -1;
      } while (0 < iVar7);
    }
    uVar3 = iVar7 - 1;
    if ((param_1[2] & 0x400000000U) == 0) {
      if (iVar7 != 0) {
        iVar7 = BN_num_bits_word(puVar13[(int)uVar3]);
        uVar5 = iVar7 + uVar3 * 0x40;
      }
    }
    else {
      iStack_54 = (int)((ulonglong)param_1[1] >> 0x20);
      uVar12 = uVar10;
      uVar16 = uVar10;
      uVar17 = uVar10;
      if (0 < iStack_54) {
        do {
          uVar5 = (uint)uVar16 ^ uVar3;
          uVar5 = (int)(uVar5 - 1 & ~uVar5) >> 0x1f;
          uVar9 = (uint)uVar12 | uVar5;
          uVar6 = BN_num_bits_word(*puVar13);
          puVar13 = puVar13 + 1;
          uVar14 = (uint)uVar16 + 1;
          uVar5 = (int)uVar17 + (~uVar9 & 0x40) + (uVar6 & uVar5);
          uVar12 = (ulonglong)uVar9;
          uVar16 = (ulonglong)uVar14;
          uVar17 = (ulonglong)uVar5;
        } while ((int)uVar14 < iStack_54);
      }
      iVar15 = (int)param_1[1];
      uVar5 = 0xffffffffU - ((int)(~uVar3 - 1 & uVar3) >> 0x1f) & uVar5;
    }
    if (param_3 < (int)(uVar5 + 7 + ((int)(uVar5 + 7) >> 0x1f & 7U)) >> 3) {
      return -1;
    }
  }
  uVar5 = *(uint *)((longlong)param_1 + 0xc);
  if ((uVar5 & 0x1fffffff) == 0) {
    OPENSSL_cleanse(param_2,(longlong)iVar4);
  }
  else {
    if (param_4 == 0) {
      param_2 = param_2 + iVar4;
    }
    if (iVar4 != 0) {
      uVar12 = uVar10;
      do {
        bVar11 = (byte)(*(ulonglong *)(*param_1 + (uVar10 & 0xfffffffffffffff8)) >>
                       (((byte)uVar10 & 7) << 3)) &
                 (byte)((longlong)(uVar12 - (longlong)(iVar15 * 8)) >> 0x3f);
        if (param_4 == 0) {
          param_2 = param_2 + -1;
          *param_2 = bVar11;
        }
        else {
          *param_2 = bVar11;
          param_2 = param_2 + 1;
        }
        uVar12 = uVar12 + 1;
        uVar10 = uVar10 - ((longlong)(uVar10 - ((longlong)(int)(uVar5 << 3) + -1)) >> 0x3f);
      } while (uVar12 < (ulonglong)(longlong)iVar4);
    }
  }
  return iVar4;
}

// bn_cmp_part_words @ 14f6b8410

undefined8 bn_cmp_part_words(longlong param_1,longlong param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar5 = (longlong)(param_3 + -1);
  if (param_4 < 0) {
    lVar7 = (longlong)param_4;
    plVar3 = (longlong *)(param_2 + (lVar5 - lVar7) * 8);
    do {
      if (*plVar3 != 0) {
        return 0xffffffff;
      }
      plVar3 = plVar3 + -1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < 0);
  }
  if ((0 < param_4) && (lVar7 = (longlong)param_4, 0 < param_4)) {
    plVar3 = (longlong *)(param_1 + (lVar7 + lVar5) * 8);
    do {
      if (*plVar3 != 0) {
        return 1;
      }
      lVar7 = lVar7 + -1;
      plVar3 = plVar3 + -1;
    } while (0 < lVar7);
  }
  if (param_3 != 0) {
    uVar4 = *(ulonglong *)(param_1 + lVar5 * 8);
    uVar6 = *(ulonglong *)(param_2 + lVar5 * 8);
    if (uVar4 != uVar6) {
LAB_14f6b8488:
      uVar1 = 0xffffffff;
      if (uVar6 < uVar4) {
        uVar1 = 1;
      }
      return uVar1;
    }
    lVar5 = (longlong)(param_3 + -2);
    if (-1 < param_3 + -2) {
      puVar2 = (ulonglong *)(param_2 + lVar5 * 8);
      do {
        uVar4 = *(ulonglong *)((param_1 - param_2) + (longlong)puVar2);
        uVar6 = *puVar2;
        if (uVar4 != uVar6) goto LAB_14f6b8488;
        puVar2 = puVar2 + -1;
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
  }
  return 0;
}

// bn_cmp_words @ 14f6b8500

undefined8 bn_cmp_words(longlong param_1,longlong param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    uVar1 = *(ulonglong *)(param_1 + (longlong)(param_3 + -1) * 8);
    uVar2 = *(ulonglong *)(param_2 + (longlong)(param_3 + -1) * 8);
    if (uVar1 != uVar2) {
      uVar3 = 0xffffffff;
      if (uVar2 < uVar1) {
        uVar3 = 1;
      }
      return uVar3;
    }
    lVar5 = (longlong)(param_3 + -2);
    if (-1 < param_3 + -2) {
      puVar4 = (ulonglong *)(param_2 + lVar5 * 8);
      do {
        uVar1 = *(ulonglong *)((param_1 - param_2) + (longlong)puVar4);
        if (uVar1 != *puVar4) {
          uVar3 = 0xffffffff;
          if (*puVar4 < uVar1) {
            uVar3 = 1;
          }
          return uVar3;
        }
        puVar4 = puVar4 + -1;
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
  }
  return 0;
}

// bn_correct_top @ 14f6b8570

void bn_correct_top(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = (ulonglong)(int)param_1[1];
  if (0 < (int)param_1[1]) {
    lVar4 = *param_1 + uVar3 * 8;
    do {
      uVar2 = (uint)uVar3;
      plVar1 = (longlong *)(lVar4 + -8);
      lVar4 = lVar4 + -8;
      if (*plVar1 != 0) break;
      uVar2 = uVar2 - 1;
      uVar3 = (ulonglong)uVar2;
    } while (0 < (int)uVar2);
    *(uint *)(param_1 + 1) = uVar2;
  }
  if ((int)param_1[1] == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}

// FUN_14f6b85b0 @ 14f6b85b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f6b85b0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (0x7fffffc0 < param_2) {
    return 0;
  }
  iVar1 = (int)(param_2 + 0x3f + (param_2 + 0x3f >> 0x1f & 0x3fU)) >> 6;
  if (iVar1 <= *(int *)(param_1 + 0xc)) {
    return param_1;
  }
  lVar2 = bn_expand2(param_1,iVar1);
  return lVar2;
}

// bn_expand2 @ 14f6b8600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * bn_expand2(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    lVar1 = FUN_14f6b86a0();
    if (lVar1 == 0) {
      return (longlong *)0x0;
    }
    if (*param_1 != 0) {
      if ((*(byte *)((longlong)param_1 + 0x14) & 8) == 0) {
        CRYPTO_clear_free(*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 3,
                          "crypto\\bn\\bn_lib.c",0xce);
      }
      else {
        CRYPTO_secure_clear_free();
      }
    }
    *param_1 = lVar1;
    *(int *)((longlong)param_1 + 0xc) = param_2;
  }
  return param_1;
}

// FUN_14f6b86a0 @ 14f6b86a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * FUN_14f6b86a0(undefined8 *param_1,int param_2)

{
  void *_Dst;
  undefined8 uVar1;
  
  uVar1 = 0x14f6b86ac;
  if (0x7fffff < param_2) {
    ERR_put_error(3,0x78,0x72,"crypto\\bn\\bn_lib.c",0x10e,0x14f6b86ac);
    return (void *)0x0;
  }
  if ((*(uint *)((longlong)param_1 + 0x14) & 2) != 0) {
    ERR_put_error(3,0x78,0x69,"crypto\\bn\\bn_lib.c",0x112,0x14f6b86ac);
    return (void *)0x0;
  }
  if ((*(uint *)((longlong)param_1 + 0x14) & 8) == 0) {
    _Dst = (void *)CRYPTO_zalloc((longlong)param_2 << 3,"crypto\\bn\\bn_lib.c",0x118);
  }
  else {
    _Dst = (void *)CRYPTO_secure_zalloc((longlong)param_2 << 3,"crypto\\bn\\bn_lib.c",0x116);
  }
  if (_Dst == (void *)0x0) {
    ERR_put_error(3,0x78,0x41,"crypto\\bn\\bn_lib.c",0x11a,uVar1);
    return (void *)0x0;
  }
  if (0 < *(int *)(param_1 + 1)) {
    memcpy(_Dst,(void *)*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  }
  return _Dst;
}

// FUN_14f6b87a0 @ 14f6b87a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b87a0(undefined8 *param_1,int param_2)

{
  if ((*(byte *)((longlong)param_1 + 0x14) & 8) != 0) {
    CRYPTO_secure_clear_free
              (*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 3,"crypto\\bn\\bn_lib.c",0xcc
              );
    return;
  }
  if (param_2 != 0) {
    CRYPTO_clear_free(*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 3,
                      "crypto\\bn\\bn_lib.c",0xce);
    return;
  }
  CRYPTO_free(*param_1,"crypto\\bn\\bn_lib.c",0xd0);
  return;
}

// bn_init @ 14f6b8820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bn_init(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_1553e2a00;
  uVar1 = uRam00000001553e29f8;
  *param_1 = _DAT_1553e29f0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}

// FUN_14f6b8840 @ 14f6b8840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_14f6b8840(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0;
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  uVar4 = *(int *)(param_1 + 1) - 1;
  uVar7 = 0;
  uVar5 = 0;
  if (0 < iVar1) {
    param_1 = (undefined8 *)*param_1;
    do {
      uVar2 = (int)((uVar5 ^ uVar4) - 1 & ~(uVar5 ^ uVar4)) >> 0x1f;
      uVar6 = uVar6 | uVar2;
      uVar3 = BN_num_bits_word(*param_1);
      param_1 = param_1 + 1;
      uVar5 = uVar5 + 1;
      uVar7 = uVar7 + (~uVar6 & 0x40) + (uVar3 & uVar2);
    } while ((int)uVar5 < iVar1);
  }
  return 0xffffffffU - ((int)(~uVar4 - 1 & uVar4) >> 0x1f) & uVar7;
}

// bn_wexpand @ 14f6b88f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong bn_wexpand(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return param_1;
  }
  lVar1 = bn_expand2();
  return lVar1;
}

