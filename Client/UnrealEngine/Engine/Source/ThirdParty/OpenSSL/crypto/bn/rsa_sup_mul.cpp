// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 11

// FUN_14f77c4e0 @ 14f77c4e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f77c4e0(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = BN_num_bits();
  iVar1 = ((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3) + 7;
  lVar4 = (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3);
  lVar2 = 0;
  if (0 < lVar4) {
    lVar3 = lVar4 * 8;
    do {
      lVar3 = lVar3 + -8;
      *(undefined8 *)(param_2 + (param_3 - lVar4) * 8 + lVar2 * 8) =
           *(undefined8 *)(*param_1 + lVar3);
      lVar2 = lVar2 + 1;
    } while (lVar2 < lVar4);
  }
  return;
}

// FUN_14f77c5a0 @ 14f77c5a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f77c5a0(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                      undefined8 *param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  longlong lVar13;
  
  memset(param_5,0,(param_3 + 1) * 0x10);
  uVar10 = 0;
  plVar1 = param_5 + param_3 + 1;
  if (param_3 != 0) {
    puVar5 = param_5;
    do {
      puVar7 = puVar5 + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_4;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = *(ulonglong *)((param_2 - (longlong)param_5) + -8 + (longlong)puVar7);
      uVar9 = SUB168(auVar3 * auVar4,8);
      uVar6 = SUB168(auVar3 * auVar4,0);
      if ((uVar10 & 1) == 0) {
        *(undefined8 *)(((longlong)plVar1 - (longlong)param_5) + -8 + (longlong)puVar7) = uVar9;
        *(undefined8 *)(((longlong)plVar1 - (longlong)param_5) + (longlong)puVar7) = uVar6;
      }
      else {
        *puVar5 = uVar9;
        *puVar7 = uVar6;
      }
      uVar10 = uVar10 + 1;
      puVar5 = puVar7;
    } while (uVar10 < param_3);
  }
  lVar12 = 0;
  if (-1 < (longlong)param_3) {
    lVar13 = param_3 + 1;
    puVar11 = (ulonglong *)(plVar1 + param_3);
    do {
      uVar2 = *puVar11;
      uVar10 = uVar2 + lVar12;
      uVar8 = *(longlong *)(((longlong)param_5 - (longlong)plVar1) + (longlong)puVar11) + uVar10;
      *puVar11 = uVar8;
      lVar12 = (ulonglong)(uVar10 < uVar2) + (ulonglong)(uVar8 < uVar10);
      lVar13 = lVar13 + -1;
      puVar11 = puVar11 + -1;
    } while (lVar13 != 0);
  }
  lVar12 = 0;
  if (-1 < (longlong)(param_3 - 1)) {
    puVar11 = (ulonglong *)(param_1 + (param_3 - 1) * 8);
    do {
      uVar2 = *puVar11;
      uVar10 = uVar2 + lVar12;
      uVar8 = *(longlong *)((longlong)plVar1 + (8 - param_1) + (longlong)puVar11) + uVar10;
      *puVar11 = uVar8;
      lVar12 = (ulonglong)(uVar10 < uVar2) + (ulonglong)(uVar8 < uVar10);
      param_3 = param_3 - 1;
      puVar11 = puVar11 + -1;
    } while (param_3 != 0);
  }
  return *plVar1 + lVar12;
}

// FUN_14f77c750 @ 14f77c750

void FUN_14f77c750(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  
  lVar4 = 0;
  if (-1 < param_4 + -1) {
    puVar6 = (ulonglong *)(param_2 + (param_4 + -1) * 8);
    do {
      uVar3 = *puVar6;
      plVar1 = (longlong *)((param_3 - param_2) + (longlong)puVar6);
      puVar6 = puVar6 + -1;
      uVar2 = uVar3 + lVar4;
      uVar5 = *plVar1 + uVar2;
      *(ulonglong *)((param_1 - param_2) + 8 + (longlong)puVar6) = uVar5;
      lVar4 = (ulonglong)(uVar2 < uVar3) + (ulonglong)(uVar5 < uVar2);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

// FUN_14f77c850 @ 14f77c850

ulonglong FUN_14f77c850(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  return ~param_1 & param_3 | param_1 & param_2;
}

// FUN_14f77c880 @ 14f77c880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f77c880(ulonglong param_1,longlong param_2,longlong param_3,ulonglong *param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  
  param_1 = param_1 * 2 | param_1;
  param_1 = param_1 | param_1 * 4;
  param_1 = param_1 | param_1 << 4;
  param_1 = param_1 | param_1 << 8;
  param_1 = param_1 | param_1 << 0x10;
  param_1 = param_1 << 0x20 | param_1;
  if (param_5 != 0) {
    puVar2 = param_4;
    do {
      puVar1 = puVar2 + 1;
      *(ulonglong *)((param_2 - (longlong)param_4) + -8 + (longlong)puVar1) =
           ~param_1 & *puVar2 |
           *(ulonglong *)((param_3 - (longlong)param_4) + -8 + (longlong)puVar1) & param_1;
      param_5 = param_5 + -1;
      puVar2 = puVar1;
    } while (param_5 != 0);
  }
  return;
}

// FUN_14f77c930 @ 14f77c930

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f77c930(void *param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  ulonglong local_58;
  
  puVar1 = param_5 + param_4 * 2;
  memset(param_1,0,param_4 * 0x10);
  if (param_4 != 0) {
    param_3 = param_3 - (longlong)param_5;
    puVar15 = puVar1 + param_4;
    lVar16 = (longlong)puVar1 - (longlong)param_5;
    uVar10 = param_4;
    local_58 = param_4;
    do {
      uVar14 = 0;
      param_3 = param_3 + -8;
      uVar11 = uVar10 + 1;
      if (uVar11 != 0) {
        uVar12 = uVar14;
        if ((1 < uVar11) &&
           ((puVar15 < param_5 ||
            ((undefined8 *)(((longlong)param_5 - (longlong)puVar1) + (longlong)puVar15) < puVar1))))
        {
          do {
            uVar12 = uVar12 + 2;
          } while (uVar12 < (uVar11 & 0xfffffffffffffffe));
          puVar4 = puVar1;
          for (uVar6 = uVar11 & 0x1ffffffffffffffe; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          puVar4 = param_5;
          for (uVar6 = uVar11 & 0x1ffffffffffffffe; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
        }
        if (uVar12 < uVar11) {
          puVar4 = param_5 + uVar12;
          lVar7 = uVar11 - uVar12;
          do {
            *(undefined8 *)(lVar16 + (longlong)puVar4) = 0;
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
      }
      puVar4 = (undefined8 *)
               ((longlong)param_5 + (param_4 * -8 - (longlong)puVar1) + 8 + (longlong)puVar15);
      uVar12 = uVar14;
      do {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulonglong *)((longlong)puVar4 + param_3);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *(ulonglong *)
                        (((param_2 + param_4 * -8) - (longlong)puVar1) + (longlong)puVar15);
        uVar9 = SUB168(auVar2 * auVar3,8);
        uVar5 = SUB168(auVar2 * auVar3,0);
        if ((uVar12 & 1) == 0) {
          *(undefined8 *)(lVar16 + -8 + (longlong)puVar4) = uVar9;
          *(undefined8 *)((longlong)puVar4 + lVar16) = uVar5;
        }
        else {
          puVar4[-1] = uVar9;
          *puVar4 = uVar5;
        }
        uVar12 = uVar12 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar12 < param_4);
      if (-1 < (longlong)uVar10) {
        uVar12 = uVar11;
        puVar13 = (ulonglong *)(((longlong)param_1 - (longlong)puVar1) + (longlong)puVar15);
        do {
          uVar6 = *puVar13;
          uVar14 = uVar6 + uVar14;
          uVar8 = *(longlong *)(((longlong)puVar1 - (longlong)param_1) + (longlong)puVar13) + uVar14
          ;
          *puVar13 = uVar8;
          uVar14 = (ulonglong)(uVar14 < uVar6) + (ulonglong)(uVar8 < uVar14);
          uVar12 = uVar12 - 1;
          puVar13 = puVar13 + -1;
        } while (uVar12 != 0);
      }
      lVar7 = 0;
      if (-1 < (longlong)uVar10) {
        uVar10 = uVar11;
        puVar13 = (ulonglong *)(((longlong)param_1 - (longlong)puVar1) + (longlong)puVar15);
        do {
          uVar12 = *puVar13;
          uVar14 = uVar12 + lVar7;
          uVar6 = *(longlong *)(((longlong)param_5 - (longlong)param_1) + (longlong)puVar13) +
                  uVar14;
          *puVar13 = uVar6;
          lVar7 = (ulonglong)(uVar14 < uVar12) + (ulonglong)(uVar6 < uVar14);
          uVar10 = uVar10 - 1;
          puVar13 = puVar13 + -1;
        } while (uVar10 != 0);
      }
      puVar15 = puVar15 + 1;
      local_58 = local_58 - 1;
      uVar10 = uVar11;
    } while (local_58 != 0);
  }
  return;
}

// FUN_14f77cc10 @ 14f77cc10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f77cc10(void *param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,ulonglong *param_6)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar1 = param_3 + param_5;
  memset(param_6,0,uVar1 * 0x18);
  puVar2 = param_6 + uVar1;
  if (param_5 < uVar1) {
    puVar5 = param_6 + param_5;
    uVar6 = param_5;
    do {
      uVar6 = uVar6 + 1;
      *puVar5 = *(ulonglong *)(((param_2 + param_5 * -8) - (longlong)param_6) + (longlong)puVar5);
      puVar5 = puVar5 + 1;
    } while (uVar6 < uVar1);
  }
  if (param_5 != 0) {
    puVar5 = puVar2;
    uVar6 = param_5;
    do {
      *puVar5 = *(ulonglong *)((param_4 - (longlong)puVar2) + (longlong)puVar5);
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  lVar7 = param_3 << 6;
  if (lVar7 != 0) {
    do {
      uVar6 = 0;
      uVar8 = 0;
      if (uVar1 != 0) {
        do {
          uVar3 = puVar2[uVar8];
          puVar2[uVar8] = uVar3 >> 1 | uVar6 << 0x3f;
          uVar6 = (ulonglong)((uint)uVar3 & 1);
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar1);
      }
      uVar6 = 0;
      if (-1 < (longlong)(uVar1 - 1)) {
        puVar5 = param_6 + (uVar1 - 1);
        uVar8 = uVar1;
        do {
          uVar3 = *puVar5;
          puVar5 = puVar5 + -1;
          uVar6 = uVar3 - uVar6;
          uVar4 = uVar6 - *(longlong *)
                           ((longlong)puVar2 + (8 - (longlong)param_6) + (longlong)puVar5);
          puVar5[uVar1 * 2 + 1] = uVar4;
          uVar6 = (ulonglong)(uVar6 < uVar4) + (ulonglong)(uVar3 < uVar6);
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      uVar6 = uVar6 * 2 | uVar6;
      uVar6 = uVar6 | uVar6 * 4;
      uVar6 = uVar6 | uVar6 << 4;
      uVar6 = uVar6 | uVar6 << 8;
      uVar6 = uVar6 | uVar6 << 0x10;
      uVar6 = uVar6 << 0x20 | uVar6;
      puVar5 = param_6;
      for (uVar8 = uVar1; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar5 = uVar6 & *puVar5 | puVar5[uVar1 * 2] & ~uVar6;
        puVar5 = puVar5 + 1;
      }
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  memcpy(param_1,param_6 + param_3,param_5 * 8);
  return;
}

// FUN_14f77ce50 @ 14f77ce50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f77ce50(longlong param_1,void *param_2,longlong param_3,longlong param_4,longlong param_5
                  ,longlong param_6,void *param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f77ce72;
  memset(param_7,0,param_5 * 0x10);
  memcpy((void *)((longlong)param_7 + (param_5 * 2 - param_3) * 8),param_2,param_3 * 8);
  puVar7 = (ulonglong *)((longlong)param_7 + param_5 * 8);
  uVar5 = 0;
  for (lVar6 = param_5; 0 < lVar6; lVar6 = lVar6 + -1) {
    lVar2 = FUN_14f77c5a0(puVar7,param_4,param_5,puVar7[param_5 + -1] * param_6,
                          (void *)(param_5 * 0x10 + (longlong)param_7),uVar9);
    uVar1 = puVar7[-1];
    puVar7 = puVar7 + -1;
    uVar3 = lVar2 + uVar1 + uVar5;
    *puVar7 = uVar3;
    uVar5 = (uVar5 | uVar3 != uVar1) & (ulonglong)(uVar3 <= uVar1);
  }
  lVar6 = 0;
  if (-1 < param_5 + -1) {
    puVar8 = puVar7 + param_5 + -1;
    do {
      uVar1 = *puVar8;
      uVar4 = uVar1 - lVar6;
      uVar3 = uVar4 - *(longlong *)((longlong)puVar8 + (param_4 - (longlong)puVar7));
      *(ulonglong *)((param_1 - (longlong)puVar7) + 8 + (longlong)(puVar8 + -1)) = uVar3;
      lVar6 = (ulonglong)(uVar4 < uVar3) + (ulonglong)(uVar1 < uVar4);
      param_5 = param_5 + -1;
      puVar8 = puVar8 + -1;
    } while (param_5 != 0);
  }
  FUN_14f77c880(uVar5 - lVar6,param_1,puVar7,param_1);
  return;
}

// ossl_bn_rsa_do_unblind @ 14f77cff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ossl_bn_rsa_do_unblind
                    (undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                    undefined8 param_5,void *param_6,uint param_7)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong *_Dst;
  ulonglong uVar12;
  size_t _Size;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined8 local_40;
  
  local_40 = 0x14f77d014;
  uVar10 = 0;
  uVar9 = 0;
  if (param_3 == 0) {
    param_3 = *(longlong *)(param_2 + 8);
  }
  iVar2 = BN_num_bits();
  iVar2 = ((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3) + 7;
  uVar12 = (ulonglong)((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3);
  iVar2 = BN_num_bits(param_3);
  iVar2 = ((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3) + 7;
  uVar11 = (ulonglong)((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3);
  iVar2 = BN_num_bits(param_4);
  iVar2 = ((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3) + 7;
  iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
  uVar14 = (ulonglong)iVar2;
  if (uVar11 < uVar12) {
    uVar11 = uVar12;
  }
  lVar4 = CRYPTO_zalloc(uVar11 * 8,"crypto\\bn\\rsa_sup_mul.c",0x221);
  lVar5 = CRYPTO_zalloc(uVar11 * 8,"crypto\\bn\\rsa_sup_mul.c",0x222);
  lVar6 = CRYPTO_zalloc(uVar14 * 8,"crypto\\bn\\rsa_sup_mul.c",0x223);
  uVar12 = uVar10;
  uVar8 = uVar10;
  uVar7 = uVar10;
  if (((lVar4 != 0) && (uVar8 = 0, uVar7 = 0, lVar5 != 0)) && (lVar6 != 0)) {
    FUN_14f77c4e0(param_1,lVar4,uVar11);
    FUN_14f77c4e0(param_3,lVar5,uVar11);
    FUN_14f77c4e0(param_4,lVar6,uVar14);
    uVar7 = CRYPTO_malloc(uVar11 << 4,"crypto\\bn\\rsa_sup_mul.c",0x22c);
    if (*(longlong *)(param_2 + 0x30) == 0) {
      lVar1 = uVar14 + uVar11 * 2;
      uVar13 = 0x235;
      uVar12 = lVar1 * 3;
      uVar8 = uVar11 * 4;
      if (uVar12 <= uVar8 && uVar8 + lVar1 * -3 != 0) {
        uVar12 = uVar8;
      }
    }
    else {
      uVar8 = uVar11 * 4;
      uVar13 = 0x231;
      uVar12 = uVar14 * 4 + 2;
      if (uVar12 <= uVar8 && uVar8 - uVar12 != 0) {
        uVar12 = uVar8;
      }
    }
    uVar8 = CRYPTO_malloc(uVar12 * 8,"crypto\\bn\\rsa_sup_mul.c",uVar13);
    uVar12 = uVar9;
    if ((uVar7 != 0) && (uVar8 != 0)) {
      if (*(longlong *)(param_2 + 0x30) == 0) {
        FUN_14f77c930(uVar7,lVar4,lVar5,uVar11,uVar8);
        uVar9 = uVar14;
        FUN_14f77cc10(uVar7,uVar7,uVar11 * 2,lVar6,uVar14,uVar8);
        uVar15 = (undefined4)(uVar9 >> 0x20);
      }
      else {
        FUN_14f77c930(uVar7,lVar4,lVar5,uVar11,uVar8);
        uVar9 = uVar14;
        FUN_14f77ce50(uVar7,uVar7,uVar11 * 2,lVar6,uVar14,
                      *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x50),uVar8);
        uVar15 = (undefined4)(uVar9 >> 0x20);
      }
      iVar3 = BN_num_bits(param_4);
      if ((int)param_7 < (int)(iVar3 + 7 + (iVar3 + 7 >> 0x1f & 7U)) >> 3) {
        ERR_put_error(3,0x97,7,"crypto\\bn\\rsa_sup_mul.c",CONCAT44(uVar15,0x246));
      }
      else {
        memset(param_6,0,(longlong)(int)param_7);
        iVar3 = BN_num_bits(param_4);
        _Dst = (ulonglong *)
               (((longlong)(int)param_7 -
                (longlong)((int)(iVar3 + 7 + (iVar3 + 7 >> 0x1f & 7U)) >> 3)) + (longlong)param_6);
        if (uVar14 != 0) {
          do {
            uVar9 = *(ulonglong *)(uVar7 + uVar10 * 8);
            if (uVar10 == 0) {
              _Size = (size_t)(int)(param_7 + iVar2 * -8 + 8);
              memcpy(_Dst,(void *)((longlong)&local_40 - _Size),_Size);
            }
            else {
              *_Dst = (((uVar9 & 0xff000000000000 | uVar9 >> 0x10) >> 0x10 | uVar9 & 0xff0000000000)
                       >> 0x10 | uVar9 & 0xff00000000) >> 8 |
                      (((uVar9 << 0x10 | (ulonglong)((uint)uVar9 & 0xff00)) << 0x10 |
                       (ulonglong)((uint)uVar9 & 0xff0000)) << 0x10 | uVar9 & 0xff000000) << 8;
              _Size = 8;
            }
            uVar10 = uVar10 + 1;
            _Dst = (ulonglong *)((longlong)_Dst + _Size);
          } while (uVar10 < uVar14);
        }
        uVar12 = (ulonglong)param_7;
      }
    }
  }
  CRYPTO_free(lVar4,"crypto\\bn\\rsa_sup_mul.c",0x25f);
  CRYPTO_free(lVar5,"crypto\\bn\\rsa_sup_mul.c",0x260);
  CRYPTO_free(lVar6,"crypto\\bn\\rsa_sup_mul.c",0x261);
  CRYPTO_free(uVar8,"crypto\\bn\\rsa_sup_mul.c",0x262);
  CRYPTO_free(uVar7,"crypto\\bn\\rsa_sup_mul.c",0x263);
  return uVar12;
}

// FUN_14f77d4c0 @ 14f77d4c0

void FUN_14f77d4c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  
  lVar2 = 0;
  if (-1 < param_4 + -1) {
    puVar5 = (ulonglong *)(param_2 + (param_4 + -1) * 8);
    do {
      uVar1 = *puVar5;
      puVar5 = puVar5 + -1;
      uVar4 = uVar1 - lVar2;
      uVar3 = uVar4 - *(longlong *)((param_3 - param_2) + 8 + (longlong)puVar5);
      *(ulonglong *)((param_1 - param_2) + 8 + (longlong)puVar5) = uVar3;
      lVar2 = (ulonglong)(uVar4 < uVar3) + (ulonglong)(uVar1 < uVar4);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

// FUN_14f77d530 @ 14f77d530

undefined8 FUN_14f77d530(undefined8 param_1)

{
  return param_1;
}

