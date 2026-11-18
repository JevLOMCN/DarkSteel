// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 20

// BN_GF2m_add @ 14f7c81a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_GF2m_add(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = param_2;
  if ((int)param_3[1] <= (int)param_2[1]) {
    plVar3 = param_3;
    param_3 = param_2;
  }
  lVar2 = bn_wexpand(param_1,(int)param_3[1]);
  if (lVar2 != 0) {
    iVar1 = 0;
    if (0 < (int)plVar3[1]) {
      lVar2 = 0;
      do {
        iVar1 = iVar1 + 1;
        *(ulonglong *)(lVar2 + *param_1) =
             *(ulonglong *)(*plVar3 + -8 + lVar2 + 8) ^ *(ulonglong *)(lVar2 + *param_3);
        lVar2 = lVar2 + 8;
      } while (iVar1 < (int)plVar3[1]);
    }
    if (iVar1 < (int)param_3[1]) {
      lVar2 = (longlong)iVar1 * 8;
      do {
        iVar1 = iVar1 + 1;
        *(undefined8 *)(lVar2 + *param_1) = *(undefined8 *)(lVar2 + *param_3);
        lVar2 = lVar2 + 8;
      } while (iVar1 < (int)param_3[1]);
    }
    *(int *)(param_1 + 1) = (int)param_3[1];
    bn_correct_top(param_1);
    return 1;
  }
  return 0;
}

// BN_GF2m_arr2poly @ 14f7c8280

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_GF2m_arr2poly(int *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  BN_set_word(param_2,0);
  if (*param_1 != -1) {
    lVar3 = 0;
    piVar2 = param_1;
    do {
      iVar1 = BN_set_bit(param_2,*piVar2);
      if (iVar1 == 0) {
        return 0;
      }
      lVar3 = lVar3 + 1;
      piVar2 = param_1 + lVar3;
    } while (param_1[lVar3] != -1);
  }
  return 1;
}

// BN_GF2m_mod @ 14f7c8300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 BN_GF2m_mod(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  iVar1 = BN_GF2m_poly2arr(param_3,local_28,6);
  if ((iVar1 == 0) || (6 < iVar1)) {
    local_38 = 0x18e;
    ERR_put_error(3,0x83,0x6a,"crypto\\bn\\bn_gf2m.c");
    uVar2 = 0;
  }
  else {
    uVar2 = BN_GF2m_mod_arr(param_1,param_2,local_28);
  }
  return uVar2;
}

// BN_GF2m_mod_arr @ 14f7c83a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_GF2m_mod_arr(longlong *param_1,longlong *param_2,uint *param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  ulonglong *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  if (*param_3 == 0) {
    BN_set_word(param_1,0);
    return 1;
  }
  uVar13 = 0;
  if (param_2 != param_1) {
    lVar4 = bn_wexpand(param_1,(int)param_2[1]);
    if (lVar4 == 0) {
      return 0;
    }
    uVar5 = uVar13;
    if (0 < (int)param_2[1]) {
      do {
        uVar10 = (int)uVar5 + 1;
        *(undefined8 *)(uVar13 + *param_1) = *(undefined8 *)(uVar13 + *param_2);
        uVar13 = uVar13 + 8;
        uVar5 = (ulonglong)uVar10;
      } while ((int)uVar10 < (int)param_2[1]);
    }
    *(int *)(param_1 + 1) = (int)param_2[1];
  }
  puVar2 = (ulonglong *)*param_1;
  iVar8 = (int)param_1[1] + -1;
  lVar14 = (longlong)((int)(*param_3 + ((int)*param_3 >> 0x1f & 0x3fU)) >> 6);
  lVar4 = (longlong)iVar8;
  if (lVar14 < lVar4) {
    puVar9 = puVar2 + (lVar4 - lVar14);
    do {
      uVar13 = puVar9[lVar14];
      if (uVar13 == 0) {
        iVar8 = iVar8 + -1;
        lVar4 = lVar4 + -1;
        puVar9 = puVar9 + -1;
      }
      else {
        puVar1 = param_3 + 1;
        puVar9[lVar14] = 0;
        lVar11 = 1;
        uVar10 = *puVar1;
        while (uVar10 != 0) {
          uVar7 = (int)(*param_3 - *puVar1) >> 0x1f & 0x3f;
          uVar10 = (*param_3 - *puVar1) + uVar7;
          iVar12 = (uVar10 & 0x3f) - uVar7;
          iVar3 = iVar8 - ((int)uVar10 >> 6);
          bVar6 = (byte)iVar12;
          puVar2[iVar3] = puVar2[iVar3] ^ uVar13 >> (bVar6 & 0x3f);
          if (iVar12 != 0) {
            puVar2[iVar3 + -1] = puVar2[iVar3 + -1] ^ uVar13 << (0x40 - bVar6 & 0x3f);
          }
          lVar11 = lVar11 + 1;
          puVar1 = param_3 + lVar11;
          uVar10 = param_3[lVar11];
        }
        uVar10 = *param_3 & 0x8000003f;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xffffffc0) + 1;
        }
        *puVar9 = *puVar9 ^ uVar13 >> ((byte)uVar10 & 0x3f);
        if (uVar10 != 0) {
          puVar9[-1] = puVar9[-1] ^ uVar13 << (0x40 - (byte)uVar10 & 0x3f);
        }
      }
    } while (lVar14 < lVar4);
  }
  if (iVar8 == lVar14) {
    while( true ) {
      uVar10 = *param_3 & 0x8000003f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffc0) + 1;
      }
      uVar13 = puVar2[lVar14] >> ((byte)uVar10 & 0x3f);
      if (uVar13 == 0) break;
      bVar6 = 0x40 - (byte)uVar10;
      if (uVar10 == 0) {
        puVar2[lVar14] = 0;
      }
      else {
        puVar2[lVar14] = (puVar2[lVar14] << (bVar6 & 0x3f)) >> (bVar6 & 0x3f);
      }
      *puVar2 = *puVar2 ^ uVar13;
      puVar1 = param_3 + 1;
      lVar4 = 1;
      uVar10 = *puVar1;
      while (uVar10 != 0) {
        uVar7 = (int)*puVar1 >> 0x1f & 0x3f;
        uVar10 = *puVar1 + uVar7;
        iVar8 = (uVar10 & 0x3f) - uVar7;
        iVar12 = (int)uVar10 >> 6;
        bVar6 = (byte)iVar8;
        puVar2[iVar12] = puVar2[iVar12] ^ uVar13 << (bVar6 & 0x3f);
        if ((iVar8 != 0) && (uVar5 = uVar13 >> (0x40 - bVar6 & 0x3f), uVar5 != 0)) {
          puVar2[iVar12 + 1] = puVar2[iVar12 + 1] ^ uVar5;
        }
        lVar4 = lVar4 + 1;
        puVar1 = param_3 + lVar4;
        uVar10 = param_3[lVar4];
      }
    }
  }
  bn_correct_top(param_1);
  return 1;
}

// BN_GF2m_mod_div @ 14f7c8640

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
BN_GF2m_mod_div(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f7c8664;
  BN_CTX_start(param_5);
  lVar2 = BN_CTX_get(param_5);
  uVar3 = 0;
  if (lVar2 != 0) {
    iVar1 = BN_GF2m_mod_inv(lVar2,param_3,param_4,param_5);
    uVar3 = 0;
    if (iVar1 != 0) {
      iVar1 = BN_GF2m_mod_mul(param_1,param_2,lVar2,param_4,param_5,uVar4);
      uVar3 = 0;
      if (iVar1 != 0) {
        uVar3 = 1;
      }
    }
  }
  BN_CTX_end(param_5);
  return uVar3;
}

// BN_GF2m_mod_div_arr @ 14f7c8700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
BN_GF2m_mod_div_arr(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f7c8724;
  uVar2 = 0;
  BN_CTX_start(param_5);
  lVar3 = BN_CTX_get(param_5);
  if (lVar3 != 0) {
    iVar1 = BN_GF2m_arr2poly(param_4,lVar3);
    if (iVar1 != 0) {
      uVar2 = BN_GF2m_mod_div(param_1,param_2,param_3,lVar3,param_5,uVar4);
    }
  }
  BN_CTX_end(param_5);
  return uVar2;
}

// BN_GF2m_mod_exp @ 14f7c87b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int BN_GF2m_mod_exp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar5 = 0x14f7c87d4;
  iVar2 = 0;
  iVar1 = BN_num_bits(param_4);
  iVar1 = iVar1 + 1;
  lVar3 = CRYPTO_malloc((longlong)iVar1 << 2,"crypto\\bn\\bn_gf2m.c",0x38a);
  if (lVar3 != 0) {
    iVar2 = BN_GF2m_poly2arr(param_4,lVar3,iVar1);
    if ((iVar2 == 0) || (iVar1 < iVar2)) {
      ERR_put_error(3,0x84,0x6a,"crypto\\bn\\bn_gf2m.c",CONCAT44(uVar4,0x38e),uVar5);
    }
    else {
      iVar2 = BN_GF2m_mod_exp_arr(param_1,param_2,param_3,lVar3,param_5);
    }
  }
  CRYPTO_free(lVar3,"crypto\\bn\\bn_gf2m.c",0x394);
  return iVar2;
}

// BN_GF2m_mod_exp_arr @ 14f7c88b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BN_GF2m_mod_exp_arr(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                             undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  iVar1 = BN_is_zero(param_3);
  if (iVar1 != 0) {
    uVar3 = BN_set_word(param_1,1);
    return uVar3;
  }
  iVar1 = BN_abs_is_word(param_3,1);
  if (iVar1 == 0) {
    BN_CTX_start(param_5);
    lVar4 = BN_CTX_get(param_5);
    uVar5 = uVar3;
    if ((lVar4 != 0) && (iVar1 = BN_GF2m_mod_arr(lVar4,param_2,param_4), iVar1 != 0)) {
      iVar1 = BN_num_bits(param_3);
      for (iVar1 = iVar1 + -2; -1 < iVar1; iVar1 = iVar1 + -1) {
        iVar2 = BN_GF2m_mod_sqr_arr(lVar4,lVar4,param_4,param_5);
        uVar5 = uVar3;
        if ((iVar2 == 0) ||
           ((iVar2 = BN_is_bit_set(param_3,iVar1), iVar2 != 0 &&
            (iVar2 = BN_GF2m_mod_mul_arr(lVar4,lVar4,param_2,param_4,param_5), uVar5 = 0, iVar2 == 0
            )))) goto LAB_14f7c89d6;
      }
      lVar4 = BN_copy(param_1,lVar4);
      uVar5 = 0;
      if (lVar4 != 0) {
        uVar5 = 1;
      }
    }
LAB_14f7c89d6:
    BN_CTX_end(param_5);
  }
  else {
    lVar4 = BN_copy(param_1,param_2);
    uVar5 = (ulonglong)(lVar4 != 0);
  }
  return uVar5;
}

// BN_GF2m_mod_inv @ 14f7c8a10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
BN_GF2m_mod_inv(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = 0;
  BN_CTX_start(param_4);
  lVar2 = BN_CTX_get(param_4);
  uVar4 = 0;
  if (lVar2 != 0) {
    do {
      iVar1 = BN_num_bits(param_3);
      iVar1 = BN_priv_rand(lVar2,iVar1 + -1,0xffffffff,0);
      uVar4 = uVar3;
      if (iVar1 == 0) goto LAB_14f7c8ad0;
      iVar1 = BN_is_zero(lVar2);
    } while (iVar1 != 0);
    iVar1 = BN_GF2m_mod_mul(param_1,param_2,lVar2,param_3,param_4);
    if (iVar1 != 0) {
      iVar1 = FUN_14f7c8ba0(param_1,param_1,param_3,param_4);
      if (iVar1 != 0) {
        iVar1 = BN_GF2m_mod_mul(param_1,param_1,lVar2,param_3,param_4);
        uVar4 = 0;
        if (iVar1 != 0) {
          uVar4 = 1;
        }
      }
    }
  }
LAB_14f7c8ad0:
  BN_CTX_end(param_4);
  return uVar4;
}

// BN_GF2m_mod_inv_arr @ 14f7c8b00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
BN_GF2m_mod_inv_arr(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  BN_CTX_start(param_4);
  lVar3 = BN_CTX_get(param_4);
  if (lVar3 != 0) {
    iVar1 = BN_GF2m_arr2poly(param_3,lVar3);
    if (iVar1 != 0) {
      uVar2 = BN_GF2m_mod_inv(param_1,param_2,lVar3,param_4);
    }
  }
  BN_CTX_end(param_4);
  return uVar2;
}

// FUN_14f7c8ba0 @ 14f7c8ba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f7c8ba0(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  uint uVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  uint uVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  int local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  ulonglong *local_58;
  ulonglong *local_50;
  undefined8 *local_48;
  
  lVar23 = 0;
  BN_CTX_start(param_4);
  local_60 = (undefined8 *)BN_CTX_get(param_4);
  local_70 = (undefined8 *)BN_CTX_get(param_4);
  local_48 = (undefined8 *)BN_CTX_get(param_4);
  local_68 = (undefined8 *)BN_CTX_get(param_4);
  lVar12 = lVar23;
  if ((((local_68 != (undefined8 *)0x0) &&
       (iVar8 = BN_GF2m_mod(local_48,param_2,param_3), iVar8 != 0)) &&
      (iVar8 = BN_is_zero(local_48), iVar8 == 0)) &&
     (lVar11 = BN_copy(local_68,param_3), lVar12 = 0, lVar11 != 0)) {
    iVar8 = BN_num_bits(local_48);
    iVar9 = BN_num_bits(local_68);
    uVar4 = *(uint *)(param_3 + 1);
    lVar24 = (longlong)(int)uVar4;
    lVar11 = bn_wexpand(local_48,uVar4);
    lVar12 = lVar23;
    if (lVar11 != 0) {
      lVar12 = (longlong)*(int *)(local_48 + 1);
      puVar16 = (ulonglong *)*local_48;
      if (lVar12 < lVar24) {
        puVar17 = puVar16 + lVar12;
        for (lVar11 = lVar24 - lVar12; lVar11 != 0; lVar11 = lVar11 + -1) {
          *puVar17 = 0;
          puVar17 = puVar17 + 1;
        }
      }
      *(uint *)(local_48 + 1) = uVar4;
      lVar11 = bn_wexpand(local_60,uVar4);
      lVar12 = lVar23;
      if (lVar11 != 0) {
        puVar17 = (ulonglong *)*local_60;
        *puVar17 = 1;
        if (1 < (int)uVar4) {
          puVar14 = puVar17;
          for (lVar12 = (longlong)(int)(uVar4 - 1); puVar14 = puVar14 + 1, lVar12 != 0;
              lVar12 = lVar12 + -1) {
            *puVar14 = 0;
          }
        }
        *(uint *)(local_60 + 1) = uVar4;
        lVar11 = bn_wexpand(local_70,uVar4);
        lVar12 = lVar23;
        if (lVar11 != 0) {
          local_58 = (ulonglong *)*local_70;
          lVar12 = lVar24;
          puVar14 = local_58;
          if (0 < (int)uVar4) {
            for (; lVar12 != 0; lVar12 = lVar12 + -1) {
              *puVar14 = 0;
              puVar14 = puVar14 + 1;
            }
          }
          *(uint *)(local_70 + 1) = uVar4;
          local_50 = (ulonglong *)*local_68;
          puVar14 = local_50;
          local_78 = iVar9;
joined_r0x00014f7c8d36:
          for (; puVar7 = local_68, puVar6 = local_70, iVar10 = iVar9, iVar8 != 0;
              iVar8 = iVar8 + -1) {
            uVar20 = *puVar16;
            puVar14 = local_50;
            iVar10 = local_78;
            if ((uVar20 & 1) != 0) break;
            uVar22 = -(ulonglong)((uint)*puVar17 & 1);
            iVar9 = uVar4 - 1;
            uVar18 = *puVar17 ^ *(ulonglong *)*param_3 & uVar22;
            lVar12 = 0;
            if (0 < iVar9) {
              lVar11 = (longlong)puVar16 - (longlong)puVar17;
              puVar13 = puVar17 + 1;
              lVar23 = (longlong)iVar9;
              do {
                puVar5 = puVar13 + 1;
                uVar21 = uVar20 >> 1;
                uVar19 = uVar18 >> 1;
                uVar20 = *(ulonglong *)(lVar11 + -8 + (longlong)puVar5);
                *(ulonglong *)(lVar11 + -0x10 + (longlong)puVar5) =
                     *(longlong *)(lVar11 + (longlong)puVar13) << 0x3f | uVar21;
                uVar18 = *(ulonglong *)(*param_3 + (-8 - (longlong)puVar17) + (longlong)puVar5) &
                         uVar22 ^ *puVar13;
                puVar13[-1] = uVar18 << 0x3f | uVar19;
                lVar23 = lVar23 + -1;
                puVar13 = puVar5;
                lVar12 = (longlong)iVar9;
              } while (lVar23 != 0);
            }
            puVar16[lVar12] = uVar20 >> 1;
            puVar17[lVar12] = uVar18 >> 1;
            iVar9 = local_78;
          }
          lVar12 = 0;
          if (iVar8 < 0x41) {
            if (*puVar16 == 0) goto LAB_14f7c9061;
            if (*puVar16 == 1) goto LAB_14f7c9028;
          }
          puVar13 = puVar14;
          iVar9 = iVar10;
          if (iVar8 < iVar10) {
            puVar13 = (ulonglong *)*local_48;
            puVar5 = (ulonglong *)*local_60;
            local_68 = local_48;
            local_70 = local_60;
            puVar16 = puVar14;
            puVar17 = local_58;
            local_78 = iVar8;
            local_60 = puVar6;
            local_58 = puVar5;
            local_50 = puVar13;
            local_48 = puVar7;
            iVar9 = iVar8;
            iVar8 = iVar10;
          }
          lVar11 = 0;
          lVar23 = lVar12;
          if ((0 < (int)uVar4) && (lVar23 = lVar11, 3 < uVar4)) {
            iVar10 = uVar4 - 1;
            puVar14 = puVar17 + iVar10;
            if (((((local_58 + iVar10 < puVar17) || (puVar14 < local_58)) &&
                 ((puVar5 = puVar16 + iVar10, puVar5 < puVar17 || (puVar14 < puVar16)))) &&
                ((puVar13 + iVar10 < puVar17 || (puVar14 < puVar13)))) &&
               (((local_58 + iVar10 < puVar16 || (puVar5 < local_58)) &&
                ((puVar13 + iVar10 < puVar16 || (puVar5 < puVar13)))))) {
              uVar15 = uVar4 & 0x80000003;
              if ((int)uVar15 < 0) {
                uVar15 = (uVar15 - 1 | 0xfffffffc) + 1;
              }
              puVar14 = puVar16 + 2;
              lVar23 = lVar12;
              do {
                lVar23 = lVar23 + 4;
                puVar1 = (ulonglong *)
                         ((longlong)puVar13 + (-0x10 - (longlong)puVar16) + (longlong)puVar14);
                uVar20 = puVar1[1];
                puVar5 = puVar14 + 4;
                puVar14[-2] = *puVar1 ^ puVar14[-2];
                puVar14[-1] = uVar20 ^ puVar14[-1];
                puVar1 = (ulonglong *)
                         ((longlong)puVar17 + (-0x30 - (longlong)puVar16) + (longlong)puVar5);
                uVar20 = puVar1[1];
                puVar2 = (ulonglong *)
                         ((longlong)local_58 + (-0x30 - (longlong)puVar16) + (longlong)puVar5);
                uVar18 = puVar2[1];
                puVar3 = (ulonglong *)
                         ((longlong)puVar17 + (-0x30 - (longlong)puVar16) + (longlong)puVar5);
                *puVar3 = *puVar2 ^ *puVar1;
                puVar3[1] = uVar18 ^ uVar20;
                puVar1 = (ulonglong *)
                         ((longlong)puVar13 + (-0x20 - (longlong)puVar16) + (longlong)puVar5);
                uVar20 = puVar1[1];
                *puVar14 = *puVar1 ^ *puVar14;
                puVar14[1] = uVar20 ^ puVar14[1];
                puVar14 = (ulonglong *)
                          ((longlong)local_58 + (-0x20 - (longlong)puVar16) + (longlong)puVar5);
                uVar18 = puVar14[1];
                puVar1 = (ulonglong *)
                         ((longlong)puVar17 + (-0x20 - (longlong)puVar16) + (longlong)puVar5);
                uVar20 = puVar1[1];
                puVar2 = (ulonglong *)
                         ((longlong)puVar17 + (-0x20 - (longlong)puVar16) + (longlong)puVar5);
                *puVar2 = *puVar14 ^ *puVar1;
                puVar2[1] = uVar18 ^ uVar20;
                puVar14 = puVar5;
              } while (lVar23 < (int)(uVar4 - uVar15));
            }
          }
          if (lVar23 < lVar24) {
            puVar14 = puVar16 + lVar23;
            lVar23 = lVar24 - lVar23;
            do {
              *puVar14 = *puVar14 ^
                         *(ulonglong *)((longlong)puVar14 + ((longlong)puVar13 - (longlong)puVar16))
              ;
              puVar5 = (ulonglong *)((longlong)puVar14 + ((longlong)puVar17 - (longlong)puVar16));
              *puVar5 = *puVar5 ^ *(ulonglong *)
                                   ((longlong)puVar14 + ((longlong)local_58 - (longlong)puVar16));
              puVar14 = puVar14 + 1;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
          }
          puVar14 = puVar13;
          if (iVar8 == iVar9) {
            uVar15 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x3fU)) >> 6;
            uVar18 = (ulonglong)(int)uVar15;
            uVar20 = puVar16[uVar18];
            uVar22 = uVar18;
            for (; (uVar20 == 0 && (uVar15 = (uint)uVar22, uVar18 != 0)); uVar18 = uVar18 - 1) {
              uVar20 = puVar16[uVar18 - 1];
              uVar15 = uVar15 - 1;
              uVar22 = (ulonglong)uVar15;
            }
            iVar8 = BN_num_bits_word();
            iVar8 = uVar15 * 0x40 + iVar8;
            puVar14 = local_50;
          }
          goto joined_r0x00014f7c8d36;
        }
      }
    }
  }
LAB_14f7c9061:
  BN_CTX_end(param_4);
  return lVar12;
LAB_14f7c9028:
  bn_correct_top(local_60);
  lVar23 = BN_copy(param_1,local_60);
  lVar12 = 0;
  if (lVar23 != 0) {
    lVar12 = 1;
  }
  goto LAB_14f7c9061;
}

// BN_GF2m_mod_mul @ 14f7c9090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int BN_GF2m_mod_mul(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar5 = 0x14f7c90b4;
  iVar2 = 0;
  iVar1 = BN_num_bits(param_4);
  iVar1 = iVar1 + 1;
  lVar3 = CRYPTO_malloc((longlong)iVar1 << 2,"crypto\\bn\\bn_gf2m.c",0x1da);
  if (lVar3 != 0) {
    iVar2 = BN_GF2m_poly2arr(param_4,lVar3,iVar1);
    if ((iVar2 == 0) || (iVar1 < iVar2)) {
      ERR_put_error(3,0x85,0x6a,"crypto\\bn\\bn_gf2m.c",CONCAT44(uVar4,0x1de),uVar5);
    }
    else {
      iVar2 = BN_GF2m_mod_mul_arr(param_1,param_2,param_3,lVar3,param_5);
    }
  }
  CRYPTO_free(lVar3,"crypto\\bn\\bn_gf2m.c",0x1e4);
  return iVar2;
}

// BN_GF2m_mod_mul_arr @ 14f7c9190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong BN_GF2m_mod_mul_arr(undefined8 param_1,longlong *param_2,longlong *param_3,
                             undefined8 param_4,undefined8 param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  uint local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_e8;
  uVar6 = 0;
  local_90 = param_5;
  local_b0 = param_3;
  local_88 = param_4;
  local_80 = param_1;
  if (param_2 == param_3) {
    uVar6 = BN_GF2m_mod_sqr_arr(param_1,param_2,param_4,param_5);
  }
  else {
    BN_CTX_start(param_5);
    plVar7 = (longlong *)BN_CTX_get(param_5);
    if (plVar7 != (longlong *)0x0) {
      uVar10 = (int)param_2[1] + (int)param_3[1] + 4;
      lVar8 = bn_wexpand(plVar7,uVar10);
      if (lVar8 != 0) {
        *(uint *)(plVar7 + 1) = uVar10;
        uVar9 = uVar6;
        if ((0 < (int)uVar10) && (uVar9 = 0, 1 < uVar10)) {
          plVar12 = (longlong *)*plVar7;
          param_3 = local_b0;
          if ((plVar7 < plVar12) || (uVar9 = uVar6, plVar12 + (int)(uVar10 - 1) < plVar7)) {
            uVar4 = uVar10 & 0x80000001;
            if ((int)uVar4 < 0) {
              uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
            }
            uVar9 = uVar6;
            do {
              uVar13 = (int)uVar9 + 2;
              uVar9 = (ulonglong)uVar13;
            } while ((int)uVar13 < (int)(uVar10 - uVar4));
            for (lVar8 = ((longlong)((int)((uVar10 - uVar4) + 1) / 2) & 0xfffffffffffffffU) << 1;
                lVar8 != 0; lVar8 = lVar8 + -1) {
              *plVar12 = 0;
              plVar12 = plVar12 + 1;
            }
          }
        }
        for (lVar8 = (longlong)(int)uVar9; lVar8 < (int)uVar10; lVar8 = lVar8 + 1) {
          *(undefined8 *)(*plVar7 + lVar8 * 8) = 0;
        }
        iVar5 = (int)param_3[1];
        local_b8 = 0;
        if (0 < iVar5) {
          iVar14 = (int)param_2[1];
          local_a0 = 0;
          uVar9 = uVar6;
          uVar15 = uVar6;
          do {
            uVar2 = *(undefined8 *)(*param_3 + local_a0);
            if ((uint)uVar9 + 1 == iVar5) {
              local_a8 = 0;
            }
            else {
              local_a8 = *(undefined8 *)(*param_3 + 8 + local_a0);
            }
            uVar3 = local_a8;
            uVar11 = uVar6;
            lVar8 = local_a0;
            uVar10 = (uint)uVar9;
            local_98 = uVar2;
            if (0 < iVar14) {
              do {
                uVar9 = uVar6;
                if ((int)uVar11 + 1 != iVar14) {
                  uVar9 = *(ulonglong *)(uVar15 + lVar8 + 8 + *param_2);
                }
                local_c8 = uVar2;
                bn_GF2m_mul_2x2(&local_78,uVar9,*(undefined8 *)(uVar15 + lVar8 + *param_2),uVar3);
                uVar4 = (int)uVar11 + 2;
                *(ulonglong *)(*plVar7 + lVar8) = *(ulonglong *)(*plVar7 + lVar8) ^ local_78;
                puVar1 = (ulonglong *)(*plVar7 + 8 + lVar8);
                *puVar1 = *puVar1 ^ local_70;
                puVar1 = (ulonglong *)(*plVar7 + 0x10 + lVar8);
                *puVar1 = *puVar1 ^ local_68;
                puVar1 = (ulonglong *)(*plVar7 + 0x18 + lVar8);
                *puVar1 = *puVar1 ^ local_60;
                iVar14 = (int)param_2[1];
                uVar11 = (ulonglong)uVar4;
                param_3 = local_b0;
                lVar8 = lVar8 + 0x10;
                uVar10 = local_b8;
              } while ((int)uVar4 < iVar14);
            }
            iVar5 = (int)param_3[1];
            local_b8 = uVar10 + 2;
            uVar9 = (ulonglong)local_b8;
            local_a0 = local_a0 + 0x10;
            uVar15 = uVar15 - 0x10;
            param_5 = local_90;
          } while ((int)local_b8 < iVar5);
        }
        bn_correct_top(plVar7);
        iVar5 = BN_GF2m_mod_arr(local_80,plVar7,local_88);
        if (iVar5 != 0) {
          uVar6 = 1;
        }
      }
    }
    BN_CTX_end(param_5);
  }
  return uVar6;
}

// BN_GF2m_mod_solve_quad @ 14f7c9460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int BN_GF2m_mod_solve_quad
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f7c9484;
  iVar2 = 0;
  iVar1 = BN_num_bits(param_3);
  iVar1 = iVar1 + 1;
  lVar3 = CRYPTO_malloc((longlong)iVar1 << 2,"crypto\\bn\\bn_gf2m.c",0x447);
  if (lVar3 != 0) {
    iVar2 = BN_GF2m_poly2arr(param_3,lVar3,iVar1);
    if ((iVar2 == 0) || (iVar1 < iVar2)) {
      ERR_put_error(3,0x86,0x6a,"crypto\\bn\\bn_gf2m.c",1099,uVar4);
    }
    else {
      iVar2 = BN_GF2m_mod_solve_quad_arr(param_1,param_2,lVar3,param_4);
    }
  }
  CRYPTO_free(lVar3,"crypto\\bn\\bn_gf2m.c",0x451);
  return iVar2;
}

// BN_GF2m_mod_solve_quad_arr @ 14f7c9550

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool BN_GF2m_mod_solve_quad_arr
               (undefined8 param_1,undefined8 param_2,byte *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  bool bVar11;
  int local_res18;
  undefined8 in_stack_ffffffffffffffa8;
  
  local_res18 = 0;
  if (*(int *)param_3 == 0) {
    BN_set_word(param_1,0);
    return true;
  }
  BN_CTX_start(param_4);
  uVar3 = BN_CTX_get(param_4);
  uVar4 = BN_CTX_get(param_4);
  lVar5 = BN_CTX_get(param_4);
  if ((lVar5 != 0) && (iVar1 = BN_GF2m_mod_arr(uVar3,param_2,param_3), iVar1 != 0)) {
    iVar1 = BN_is_zero(uVar3);
    if (iVar1 != 0) {
      BN_set_word(param_1,0);
      bVar11 = true;
      goto LAB_14f7c981b;
    }
    if ((*param_3 & 1) == 0) {
      uVar7 = BN_CTX_get(param_4);
      uVar8 = BN_CTX_get(param_4);
      lVar6 = BN_CTX_get(param_4);
      if (lVar6 != 0) {
        do {
          iVar2 = 1;
          iVar1 = BN_priv_rand(uVar7,*(undefined4 *)param_3,0,0);
          if ((iVar1 == 0) || (iVar1 = BN_GF2m_mod_arr(uVar7,uVar7), iVar1 == 0))
          goto LAB_14f7c9818;
          BN_set_word(uVar4,0);
          lVar9 = BN_copy(lVar5,uVar7);
          if (lVar9 == 0) goto LAB_14f7c9818;
          if (0 < *(int *)param_3 + -1) {
            do {
              iVar1 = BN_GF2m_mod_sqr_arr(uVar4,uVar4,param_3,param_4);
              if ((((iVar1 == 0) ||
                   (iVar1 = BN_GF2m_mod_sqr_arr(uVar8,lVar5,param_3,param_4), iVar1 == 0)) ||
                  (in_stack_ffffffffffffffa8 = param_4,
                  iVar1 = BN_GF2m_mod_mul_arr(lVar6,uVar8,uVar3,param_3,param_4), iVar1 == 0)) ||
                 ((iVar1 = BN_GF2m_add(uVar4,uVar4,lVar6), iVar1 == 0 ||
                  (iVar1 = BN_GF2m_add(lVar5,uVar8), iVar1 == 0)))) goto LAB_14f7c9818;
              iVar2 = iVar2 + 1;
            } while (iVar2 <= *(int *)param_3 + -1);
          }
          local_res18 = local_res18 + 1;
          iVar1 = BN_is_zero(lVar5);
          uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
        } while ((iVar1 != 0) && (local_res18 < 0x32));
        iVar1 = BN_is_zero(lVar5);
        if (iVar1 == 0) goto LAB_14f7c9852;
        uVar3 = CONCAT44(uVar10,0x420);
        uVar10 = 0x71;
LAB_14f7c9813:
        ERR_put_error(3,0x87,uVar10,"crypto\\bn\\bn_gf2m.c",uVar3);
      }
    }
    else {
      lVar6 = BN_copy(uVar4,uVar3);
      uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
      if (lVar6 != 0) {
        iVar1 = 1;
        if (0 < (*(int *)param_3 + -1) / 2) {
          do {
            iVar2 = BN_GF2m_mod_sqr_arr(uVar4,uVar4,param_3,param_4);
            if ((iVar2 == 0) ||
               (iVar2 = BN_GF2m_mod_sqr_arr(uVar4,uVar4,param_3,param_4), iVar2 == 0))
            goto LAB_14f7c9818;
            iVar2 = BN_GF2m_add(uVar4,uVar4,uVar3);
            uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
            if (iVar2 == 0) goto LAB_14f7c9818;
            iVar1 = iVar1 + 1;
          } while (iVar1 <= (*(int *)param_3 + -1) / 2);
        }
LAB_14f7c9852:
        iVar1 = BN_GF2m_mod_sqr_arr(lVar5,uVar4,param_3,param_4);
        if ((iVar1 != 0) && (iVar1 = BN_GF2m_add(lVar5,uVar4,lVar5), iVar1 != 0)) {
          iVar1 = BN_ucmp(lVar5,uVar3);
          if (iVar1 == 0) {
            lVar5 = BN_copy(param_1,uVar4);
            bVar11 = lVar5 != 0;
            goto LAB_14f7c981b;
          }
          uVar3 = CONCAT44(uVar10,0x42a);
          uVar10 = 0x74;
          goto LAB_14f7c9813;
        }
      }
    }
  }
LAB_14f7c9818:
  bVar11 = false;
LAB_14f7c981b:
  BN_CTX_end(param_4);
  return bVar11;
}

// BN_GF2m_mod_sqr @ 14f7c98d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int BN_GF2m_mod_sqr(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f7c98f4;
  iVar2 = 0;
  iVar1 = BN_num_bits(param_3);
  iVar1 = iVar1 + 1;
  lVar3 = CRYPTO_malloc((longlong)iVar1 << 2,"crypto\\bn\\bn_gf2m.c",0x214);
  if (lVar3 != 0) {
    iVar2 = BN_GF2m_poly2arr(param_3,lVar3,iVar1);
    if ((iVar2 == 0) || (iVar1 < iVar2)) {
      ERR_put_error(3,0x88,0x6a,"crypto\\bn\\bn_gf2m.c",0x218,uVar4);
    }
    else {
      iVar2 = BN_GF2m_mod_sqr_arr(param_1,param_2,lVar3,param_4);
    }
  }
  CRYPTO_free(lVar3,"crypto\\bn\\bn_gf2m.c",0x21e);
  return iVar2;
}

// BN_GF2m_mod_sqr_arr @ 14f7c99c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
BN_GF2m_mod_sqr_arr(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  BN_CTX_start(param_4);
  plVar4 = (longlong *)BN_CTX_get(param_4);
  uVar6 = 0;
  if ((plVar4 != (longlong *)0x0) &&
     (lVar5 = bn_wexpand(plVar4,(int)param_2[1] * 2), uVar6 = 0, lVar5 != 0)) {
    iVar2 = (int)param_2[1] + -1;
    lVar5 = (longlong)iVar2;
    if (-1 < iVar2) {
      lVar7 = lVar5 << 4;
      do {
        uVar1 = *(ulonglong *)(*param_2 + lVar5 * 8);
        *(ulonglong *)(*plVar4 + 8 + lVar7) =
             (((((((((((((((((((((((((((((((uVar1 >> 1 & 0x80000000 | uVar1 & 0x200000000) >> 1 |
                                          uVar1 & 0x400000000) >> 1 | uVar1 & 0x800000000) >> 1 |
                                        uVar1 & 0x1000000000) >> 1 | uVar1 & 0x2000000000) >> 1 |
                                      uVar1 & 0x4000000000) >> 1 | uVar1 & 0x8000000000) >> 1 |
                                    uVar1 & 0x10000000000) >> 1 | uVar1 & 0x20000000000) >> 1 |
                                  uVar1 & 0x40000000000) >> 1 | uVar1 & 0x80000000000) >> 1 |
                                uVar1 & 0x100000000000) >> 1 | uVar1 & 0x200000000000) >> 1 |
                              uVar1 & 0x400000000000) >> 1 | uVar1 & 0x800000000000) >> 1 |
                            uVar1 & 0x1000000000000) >> 1 | uVar1 & 0x2000000000000) >> 1 |
                          uVar1 & 0x4000000000000) >> 1 | uVar1 & 0x8000000000000) >> 1 |
                        uVar1 & 0x10000000000000) >> 1 | uVar1 & 0x20000000000000) >> 1 |
                      uVar1 & 0x40000000000000) >> 1 | uVar1 & 0x80000000000000) >> 1 |
                    uVar1 & 0x100000000000000) >> 1 | uVar1 & 0x200000000000000) >> 1 |
                  uVar1 & 0x400000000000000) >> 1 | uVar1 & 0x800000000000000) >> 1 |
                uVar1 & 0x1000000000000000) >> 1 | uVar1 & 0x2000000000000000) >> 1 |
              uVar1 & 0x4000000000000000) >> 1 | uVar1 & 0x8000000000000001) >> 1;
        uVar1 = *(ulonglong *)(*param_2 + lVar5 * 8);
        uVar3 = (uint)uVar1;
        lVar5 = lVar5 + -1;
        *(ulonglong *)(lVar7 + *plVar4) =
             (((((((((((((((((((((((((((((((uVar1 & 0x80000000) * 2 |
                                          (ulonglong)(uVar3 & 0x40000000)) * 2 |
                                         (ulonglong)(uVar3 & 0x20000000)) * 2 |
                                        (ulonglong)(uVar3 & 0x10000000)) * 2 |
                                       (ulonglong)(uVar3 & 0x8000000)) * 2 |
                                      (ulonglong)(uVar3 & 0x4000000)) * 2 |
                                     (ulonglong)(uVar3 & 0x2000000)) * 2 |
                                    (ulonglong)(uVar3 & 0x1000000)) * 2 |
                                   (ulonglong)(uVar3 & 0x800000)) * 2 |
                                  (ulonglong)(uVar3 & 0x400000)) * 2 | (ulonglong)(uVar3 & 0x200000)
                                 ) * 2 | (ulonglong)(uVar3 & 0x100000)) * 2 |
                               (ulonglong)(uVar3 & 0x80000)) * 2 | (ulonglong)(uVar3 & 0x40000)) * 2
                             | (ulonglong)(uVar3 & 0x20000)) * 2 | (ulonglong)(uVar3 & 0x10000)) * 2
                           | (ulonglong)(uVar3 & 0x8000)) * 2 | (ulonglong)(uVar3 & 0x4000)) * 2 |
                         (ulonglong)(uVar3 & 0x2000)) * 2 | (ulonglong)(uVar3 & 0x1000)) * 2 |
                       (ulonglong)(uVar3 & 0x800)) * 2 | (ulonglong)(uVar3 & 0x400)) * 2 |
                     (ulonglong)(uVar3 & 0x200)) * 2 | (ulonglong)(uVar3 & 0x100)) * 2 |
                   (ulonglong)(uVar3 & 0x80)) * 2 | (ulonglong)(uVar3 & 0x40)) * 2 |
                 (ulonglong)(uVar3 & 0x20)) * 2 | (ulonglong)(uVar3 & 0x10)) * 2 |
               (ulonglong)(uVar3 & 8)) * 2 | (ulonglong)(uVar3 & 4)) * 2 | (ulonglong)(uVar3 & 2)) *
             2 | (ulonglong)(uVar3 & 1);
        lVar7 = lVar7 + -0x10;
      } while (-1 < lVar5);
    }
    *(int *)(plVar4 + 1) = (int)param_2[1] * 2;
    bn_correct_top(plVar4);
    iVar2 = BN_GF2m_mod_arr(param_1,plVar4,param_3);
    uVar6 = 0;
    if (iVar2 != 0) {
      uVar6 = 1;
    }
  }
  BN_CTX_end(param_4);
  return uVar6;
}

// BN_GF2m_mod_sqrt @ 14f7ca060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int BN_GF2m_mod_sqrt(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f7ca084;
  iVar2 = 0;
  iVar1 = BN_num_bits(param_3);
  iVar1 = iVar1 + 1;
  lVar3 = CRYPTO_malloc((longlong)iVar1 << 2,"crypto\\bn\\bn_gf2m.c",0x3c5);
  if (lVar3 != 0) {
    iVar2 = BN_GF2m_poly2arr(param_3,lVar3,iVar1);
    if ((iVar2 == 0) || (iVar1 < iVar2)) {
      ERR_put_error(3,0x89,0x6a,"crypto\\bn\\bn_gf2m.c",0x3c9,uVar4);
    }
    else {
      iVar2 = BN_GF2m_mod_sqrt_arr(param_1,param_2,lVar3,param_4);
    }
  }
  CRYPTO_free(lVar3,"crypto\\bn\\bn_gf2m.c",0x3cf);
  return iVar2;
}

// BN_GF2m_mod_sqrt_arr @ 14f7ca150

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
BN_GF2m_mod_sqrt_arr(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (*param_3 == 0) {
    BN_set_word(param_1,0);
    uVar2 = 1;
  }
  else {
    BN_CTX_start(param_4);
    lVar3 = BN_CTX_get(param_4);
    uVar2 = 0;
    if (lVar3 != 0) {
      iVar1 = BN_set_bit(lVar3,*param_3 + -1);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = BN_GF2m_mod_exp_arr(param_1,param_2,lVar3,param_3,param_4);
      }
    }
    BN_CTX_end(param_4);
  }
  return uVar2;
}

// BN_GF2m_poly2arr @ 14f7ca200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BN_GF2m_poly2arr(longlong *param_1,longlong param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  
  uVar2 = 0;
  iVar1 = BN_is_zero();
  if (iVar1 == 0) {
    iVar1 = (int)param_1[1] + -1;
    uVar4 = uVar2;
    if (-1 < iVar1) {
      iVar7 = iVar1 * 0x40;
      lVar6 = (longlong)iVar1 * 8;
      do {
        if (*(longlong *)(lVar6 + *param_1) != 0) {
          uVar5 = 0x8000000000000000;
          iVar3 = 0x3f;
          do {
            if ((*(ulonglong *)(lVar6 + *param_1) & uVar5) != 0) {
              if ((longlong)uVar2 < (longlong)param_3) {
                *(int *)(param_2 + uVar2 * 4) = iVar7 + iVar3;
              }
              uVar4 = (ulonglong)((int)uVar4 + 1);
              uVar2 = uVar2 + 1;
            }
            uVar5 = uVar5 >> 1;
            iVar3 = iVar3 + -1;
          } while (-1 < iVar3);
        }
        iVar7 = iVar7 + -0x40;
        lVar6 = lVar6 + -8;
        iVar1 = iVar1 + -1;
      } while (-1 < iVar1);
    }
    iVar1 = (int)uVar4;
    if (iVar1 < param_3) {
      uVar4 = (ulonglong)(iVar1 + 1);
      *(undefined4 *)(param_2 + (longlong)iVar1 * 4) = 0xffffffff;
    }
    return uVar4;
  }
  return 0;
}

