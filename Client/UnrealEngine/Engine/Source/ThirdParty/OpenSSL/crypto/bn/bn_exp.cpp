// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 10

// BN_exp @ 14f7441a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_exp(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f7441b3;
  uVar7 = 0;
  iVar1 = BN_get_flags(param_3,4);
  if ((iVar1 != 0) || (iVar1 = BN_get_flags(param_2,4), iVar1 != 0)) {
    ERR_put_error(3,0x7b,0x42,"crypto\\bn\\bn_exp.c",0x3a,uVar9);
    return 0;
  }
  BN_CTX_start(param_4);
  if ((param_1 == param_2) || (lVar6 = param_1, param_1 == param_3)) {
    lVar6 = BN_CTX_get(param_4);
  }
  lVar4 = BN_CTX_get(param_4);
  if (((lVar6 != 0) && (lVar4 != 0)) && (lVar5 = BN_copy(lVar4,param_2), lVar5 != 0)) {
    iVar1 = BN_num_bits(param_3);
    iVar2 = BN_is_odd(param_3);
    if (iVar2 == 0) {
      iVar2 = BN_set_word(lVar6,1);
      bVar8 = iVar2 == 0;
    }
    else {
      lVar5 = BN_copy(lVar6,param_2);
      bVar8 = lVar5 == 0;
    }
    if (!bVar8) {
      iVar2 = 1;
      if (1 < iVar1) {
        do {
          iVar3 = BN_sqr(lVar4,lVar4,param_4);
          if ((iVar3 == 0) ||
             ((iVar3 = BN_is_bit_set(param_3,iVar2), iVar3 != 0 &&
              (iVar3 = BN_mul(lVar6,lVar6,lVar4,param_4), iVar3 == 0)))) goto LAB_14f7442ec;
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar1);
      }
      if ((param_1 == lVar6) || (lVar6 = BN_copy(param_1,lVar6), uVar7 = 0, lVar6 != 0)) {
        uVar7 = 1;
      }
    }
  }
LAB_14f7442ec:
  BN_CTX_end(param_4);
  return uVar7;
}

// BN_mod_exp @ 14f744350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_mod_exp(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f74436a;
  iVar1 = BN_is_odd(param_4);
  if (iVar1 == 0) {
    BN_mod_exp_recp(param_1,param_2,param_3,param_4,param_5,uVar2);
  }
  else {
    if ((((*(int *)(param_2 + 1) == 1) && (*(int *)(param_2 + 2) == 0)) &&
        (iVar1 = BN_get_flags(param_3,4), iVar1 == 0)) &&
       ((iVar1 = BN_get_flags(param_2,4), iVar1 == 0 &&
        (iVar1 = BN_get_flags(param_4,4), iVar1 == 0)))) {
      BN_mod_exp_mont_word(param_1,*(undefined8 *)*param_2,param_3,param_4,param_5,0);
      return;
    }
    BN_mod_exp_mont(param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}

// BN_mod_exp_mont @ 14f744450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong BN_mod_exp_mont(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                         undefined8 param_5,longlong param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  longlong local_1a0;
  uint local_198;
  ulonglong local_190;
  undefined8 local_188;
  longlong local_180;
  ulonglong local_178;
  undefined8 local_170;
  undefined8 local_168;
  longlong alStack_160 [33];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  lVar13 = 0;
  local_170 = param_5;
  local_180 = param_6;
  local_178 = 0;
  local_188 = param_3;
  local_168 = param_1;
  iVar7 = BN_is_odd(param_4);
  if (iVar7 == 0) {
    local_1a8 = CONCAT44(local_1a8._4_4_,0x142);
    ERR_put_error(3,0x6d,0x66,"crypto\\bn\\bn_exp.c");
    return 0;
  }
  uVar17 = 4;
  local_198 = 4;
  if (((int)param_4[1] < 0x100000) &&
     (((iVar7 = BN_get_flags(param_3,4), iVar7 != 0 || (iVar7 = BN_get_flags(param_2,4), iVar7 != 0)
       ) || (iVar7 = BN_get_flags(param_4,4), iVar7 != 0)))) {
    local_1a0 = param_6;
    local_1a8 = param_5;
    uVar10 = BN_mod_exp_mont_consttime(param_1,param_2,param_3,param_4);
    return uVar10;
  }
  iVar7 = BN_num_bits(param_3);
  if (iVar7 == 0) {
    iVar7 = BN_abs_is_word(param_4,1);
    if (iVar7 != 0) {
      BN_set_word(param_1,0);
      return 1;
    }
    uVar10 = BN_set_word(param_1,1);
    return uVar10;
  }
  BN_CTX_start(param_5);
  local_190 = BN_CTX_get(param_5);
  plVar11 = (longlong *)BN_CTX_get(param_5);
  lVar12 = BN_CTX_get(param_5);
  alStack_160[1] = lVar12;
  if (lVar12 == 0) goto LAB_14f74495d;
  lVar13 = local_180;
  if ((local_180 != 0) ||
     ((lVar13 = BN_MONT_CTX_new(), lVar13 != 0 &&
      (iVar8 = BN_MONT_CTX_set(lVar13,param_4,param_5), iVar8 != 0)))) {
    if ((((*(int *)(param_2 + 0x10) != 0) || (iVar8 = BN_ucmp(param_2,param_4), -1 < iVar8)) &&
        (iVar8 = BN_nnmod(lVar12,param_2,param_4,param_5), param_2 = lVar12, iVar8 == 0)) ||
       (iVar8 = bn_to_mont_fixed_top(lVar12,param_2,lVar13,param_5), uVar10 = local_190, iVar8 == 0)
       ) goto LAB_14f74495d;
    if (iVar7 < 0x2a0) {
      if (0xef < iVar7) {
        uVar17 = 5;
        local_198 = 5;
        goto LAB_14f74468e;
      }
      if (0x4f < iVar7) goto LAB_14f74468e;
      uVar17 = 1;
      if (0x17 < iVar7) {
        uVar17 = 3;
      }
      local_198 = uVar17;
      if (1 < uVar17) goto LAB_14f74468e;
    }
    else {
      uVar17 = 6;
      local_198 = 6;
LAB_14f74468e:
      local_1a8 = param_5;
      iVar8 = bn_mul_mont_fixed_top(local_190,lVar12,lVar12,lVar13);
      if (iVar8 == 0) goto LAB_14f74495d;
      lVar12 = 1;
      lVar20 = (longlong)(1 << ((char)uVar17 - 1U & 0x1f));
      if (1 < lVar20) {
        do {
          lVar14 = BN_CTX_get(param_5);
          alStack_160[lVar12 + 1] = lVar14;
          if (lVar14 == 0) goto LAB_14f74495d;
          local_1a8 = param_5;
          iVar8 = bn_mul_mont_fixed_top(lVar14,alStack_160[lVar12],uVar10,lVar13);
          if (iVar8 == 0) goto LAB_14f74495d;
          lVar12 = lVar12 + 1;
        } while (lVar12 < lVar20);
      }
    }
    iVar8 = (int)param_4[1];
    iVar7 = iVar7 + -1;
    local_190 = CONCAT44(local_190._4_4_,1);
    uVar17 = iVar8 - 1;
    lVar12 = (longlong)(int)uVar17 * 8;
    if (*(longlong *)(*param_4 + lVar12) < 0) {
      lVar20 = bn_wexpand(plVar11,iVar8);
      if (lVar20 != 0) {
        *(longlong *)*plVar11 = -*(longlong *)*param_4;
        uVar6 = _UNK_15060db28;
        uVar10 = ___xmm_ffffffffffffffffffffffffffffffff;
        uVar15 = 1;
        uVar21 = uVar15;
        if ((1 < iVar8) && (3 < uVar17)) {
          lVar20 = *param_4;
          lVar14 = *plVar11;
          plVar1 = (longlong *)(lVar14 + 8);
          plVar2 = (longlong *)(lVar14 + lVar12);
          if (((((longlong *)(lVar20 + lVar12) < plVar1) || (plVar2 < (longlong *)(lVar20 + 8U))) &&
              ((uVar21 = 1, plVar11 < plVar1 || (plVar2 < plVar11)))) &&
             ((param_4 < plVar1 || (plVar2 < param_4)))) {
            uVar17 = uVar17 & 0x80000003;
            if ((int)uVar17 < 0) {
              uVar17 = (uVar17 - 1 | 0xfffffffc) + 1;
            }
            uVar21 = uVar15;
            do {
              puVar3 = (ulonglong *)(lVar20 + uVar15 * 8);
              uVar5 = puVar3[1];
              uVar21 = (ulonglong)((int)uVar21 + 4);
              puVar4 = (ulonglong *)(lVar14 + uVar15 * 8);
              *puVar4 = ~*puVar3 & uVar10;
              puVar4[1] = ~uVar5 & uVar6;
              puVar3 = (ulonglong *)(lVar20 + 0x10 + uVar15 * 8);
              uVar5 = puVar3[1];
              puVar4 = (ulonglong *)(lVar14 + 0x10 + uVar15 * 8);
              *puVar4 = ~*puVar3 & uVar10;
              puVar4[1] = ~uVar5 & uVar6;
              uVar15 = uVar15 + 4;
            } while ((longlong)uVar15 < (longlong)(int)(iVar8 - uVar17));
          }
        }
        for (lVar12 = (longlong)(int)uVar21; lVar12 < iVar8; lVar12 = lVar12 + 1) {
          *(ulonglong *)(*plVar11 + lVar12 * 8) = ~*(ulonglong *)(*param_4 + lVar12 * 8);
        }
        *(int *)(plVar11 + 1) = iVar8;
LAB_14f74483d:
        iVar8 = (int)local_190;
        do {
          while (iVar9 = BN_is_bit_set(local_188,iVar7), uVar16 = local_188, iVar9 == 0) {
            if ((iVar8 == 0) &&
               (local_1a8 = param_5, iVar9 = bn_mul_mont_fixed_top(plVar11,plVar11,plVar11,lVar13),
               iVar9 == 0)) goto LAB_14f74495d;
            if (iVar7 == 0) goto LAB_14f74493b;
            iVar7 = iVar7 + -1;
          }
          uVar18 = 0;
          uVar19 = 1;
          uVar17 = uVar19;
          iVar8 = iVar7;
          if (1 < local_198) {
            do {
              iVar8 = iVar8 + -1;
              param_5 = local_170;
              if (iVar8 < 0) break;
              iVar9 = BN_is_bit_set(uVar16,iVar8);
              if (iVar9 != 0) {
                uVar19 = uVar19 << ((char)uVar17 - (char)uVar18 & 0x1fU) | 1;
                uVar18 = uVar17;
              }
              uVar17 = uVar17 + 1;
              param_5 = local_170;
            } while ((int)uVar17 < (int)local_198);
          }
          if (((int)local_190 == 0) && (iVar8 = 0, 0 < (int)(uVar18 + 1))) {
            do {
              local_1a8 = param_5;
              iVar9 = bn_mul_mont_fixed_top(plVar11,plVar11,plVar11,lVar13);
              if (iVar9 == 0) goto LAB_14f74495d;
              iVar8 = iVar8 + 1;
            } while (iVar8 < (int)(uVar18 + 1));
          }
          local_1a8 = param_5;
          iVar8 = bn_mul_mont_fixed_top
                            (plVar11,plVar11,alStack_160[((longlong)(int)uVar19 >> 1) + 1],lVar13);
          if (iVar8 == 0) goto LAB_14f74495d;
          iVar8 = 0;
          local_190 = local_190 & 0xffffffff00000000;
          iVar7 = iVar7 + (-1 - uVar18);
        } while (-1 < iVar7);
LAB_14f74493b:
        iVar7 = BN_from_montgomery(local_168,plVar11,lVar13,param_5);
        local_178 = (ulonglong)(iVar7 != 0);
      }
    }
    else {
      uVar16 = BN_value_one();
      iVar8 = bn_to_mont_fixed_top(plVar11,uVar16,lVar13,param_5);
      if (iVar8 != 0) goto LAB_14f74483d;
    }
LAB_14f74495d:
    if (local_180 != 0) goto LAB_14f74496d;
  }
  BN_MONT_CTX_free(lVar13);
LAB_14f74496d:
  BN_CTX_end(param_5);
  return local_178 & 0xffffffff;
}

// BN_mod_exp_mont_consttime @ 14f7449b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong BN_mod_exp_mont_consttime
                    (undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                    undefined8 param_5,longlong param_6)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 uVar15;
  byte bVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  int iVar23;
  size_t _Size;
  ulonglong uVar24;
  longlong *plVar25;
  uint uVar26;
  longlong *plVar27;
  longlong *_Dst;
  uint uVar28;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_d0;
  longlong local_b8;
  longlong *local_b0;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong *local_98;
  longlong *local_90;
  int local_88;
  uint local_84;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  int local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 *local_58;
  ulonglong local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14f7449c4;
  puVar22 = auStack_f8;
  local_38 = __security_cookie.value ^ (ulonglong)&local_b8;
  plVar11 = (longlong *)0x0;
  local_50 = 0;
  local_88 = 0;
  plVar25 = (longlong *)0x0;
  plVar27 = (longlong *)0x0;
  local_98 = param_2;
  local_78 = param_3;
  local_58 = param_1;
  local_40 = param_4;
  iVar7 = BN_is_odd(param_4);
  if (iVar7 == 0) {
    local_d8 = CONCAT44(local_d8._4_4_,0x272);
    ERR_put_error(3,0x7c,0x66,"crypto\\bn\\bn_exp.c");
    local_50 = 0;
    puVar22 = auStack_f8;
    goto LAB_14f74561f;
  }
  iVar7 = (int)param_4[1];
  uVar20 = (ulonglong)iVar7;
  if (0xfffff < iVar7) {
    local_d0 = param_6;
    local_d8 = param_5;
    local_50 = BN_mod_exp_mont(param_1,param_2,param_3,param_4);
    puVar22 = auStack_f8;
    goto LAB_14f74561f;
  }
  uVar26 = *(uint *)(param_3 + 1) * 0x40;
  local_84 = uVar26;
  if ((*(uint *)(param_3 + 1) & 0x3ffffff) == 0) {
    iVar7 = BN_abs_is_word(param_4,1);
    if (iVar7 == 0) {
      local_50 = BN_set_word(local_58,1);
    }
    else {
      BN_set_word(local_58,0);
      local_50 = 1;
      puVar22 = auStack_f8;
    }
    goto LAB_14f74561f;
  }
  BN_CTX_start(param_5);
  if (param_6 == 0) {
    lVar19 = BN_MONT_CTX_new();
    puVar22 = auStack_f8;
    plVar14 = plVar11;
    _Dst = plVar11;
    local_80 = lVar19;
    if ((lVar19 != 0) &&
       (iVar8 = BN_MONT_CTX_set(lVar19,param_4,param_5), puVar22 = auStack_f8, plVar14 = plVar25,
       _Dst = plVar27, iVar8 != 0)) goto LAB_14f744b1c;
LAB_14f7455e6:
    *(undefined8 *)(puVar22 + -8) = 0x14f7455ee;
    BN_MONT_CTX_free(lVar19);
  }
  else {
    local_80 = param_6;
    lVar19 = param_6;
LAB_14f744b1c:
    if (((int)local_98[2] == 0) && (iVar8 = BN_ucmp(local_98), iVar8 < 0)) {
LAB_14f744b72:
      if (((((int)local_98[1] == 0x10) && ((int)local_78[1] == 0x10)) &&
          (iVar8 = BN_num_bits(param_4), iVar8 == 0x400)) &&
         (iVar8 = rsaz_avx2_eligible(), puVar21 = local_58, iVar8 != 0)) {
        lVar12 = bn_wexpand(local_58,0x10);
        puVar22 = auStack_f8;
        plVar14 = plVar25;
        _Dst = plVar27;
        if (lVar12 != 0) {
          local_d0 = *(undefined8 *)(lVar19 + 0x50);
          local_d8 = *(undefined8 *)(lVar19 + 8);
          RSAZ_1024_mod_exp_avx2(*puVar21,*local_98,*local_78,*param_4);
          *(undefined4 *)(puVar21 + 1) = 0x10;
LAB_14f744bee:
          *(undefined4 *)(puVar21 + 2) = 0;
          bn_correct_top(puVar21);
          local_50 = CONCAT44(local_50._4_4_,1);
          puVar22 = auStack_f8;
          plVar14 = plVar25;
          _Dst = plVar27;
        }
      }
      else if ((((int)local_98[1] == 8) && ((int)local_78[1] == 8)) &&
              (iVar8 = BN_num_bits(param_4), puVar21 = local_58, iVar8 == 0x200)) {
        lVar12 = bn_wexpand(local_58,8);
        puVar22 = auStack_f8;
        plVar14 = plVar25;
        _Dst = plVar27;
        if (lVar12 != 0) {
          local_d0 = *(undefined8 *)(lVar19 + 8);
          local_d8 = *(undefined8 *)(lVar19 + 0x50);
          RSAZ_512_mod_exp(*puVar21,*local_98,*local_78,*param_4);
          *(undefined4 *)(puVar21 + 1) = 8;
          goto LAB_14f744bee;
        }
      }
      else {
        iVar8 = 3;
        if ((int)uVar26 < 0x3aa) {
          if (0x132 < (int)uVar26) {
            uVar28 = 5;
            goto LAB_14f744cc1;
          }
          if ((int)uVar26 < 0x5a) {
            uVar28 = 1;
            if (0x16 < (int)uVar26) {
              uVar28 = 3;
            }
            if (4 < uVar28) goto LAB_14f744cc1;
          }
          else {
            uVar28 = 4;
          }
        }
        else {
          uVar28 = 6;
LAB_14f744cc1:
          if (iVar7 < 0x201) {
            local_88 = iVar7 * 8;
            uVar28 = 5;
          }
        }
        local_b8._0_4_ = 1 << (sbyte)uVar28;
        iVar9 = iVar7 * 2;
        if (iVar7 * 2 <= (int)local_b8) {
          iVar9 = (int)local_b8;
        }
        local_88 = local_88 + (iVar9 + (int)local_b8 * iVar7) * 8;
        if (local_88 < 0xc00) {
          uVar13 = (longlong)(local_88 + 0x40) + 0xf;
          if (uVar13 <= (ulonglong)(longlong)(local_88 + 0x40)) {
            uVar13 = 0xffffffffffffff0;
          }
          plVar14 = (longlong *)((longlong)&local_b8 + -(uVar13 & 0xfffffffffffffff0));
          puVar6 = auStack_f8 + -(uVar13 & 0xfffffffffffffff0);
        }
        else {
          plVar14 = (longlong *)
                    CRYPTO_malloc((longlong)(local_88 + 0x40),"crypto\\bn\\bn_exp.c",0x2e4);
          puVar22 = auStack_f8;
          puVar6 = auStack_f8;
          _Dst = plVar11;
          if (plVar14 == (longlong *)0x0) goto LAB_14f7455dc;
        }
        puVar22 = puVar6;
        _Size = (size_t)local_88;
        uVar13 = (ulonglong)plVar14 & 0xffffffffffffffc0;
        _Dst = (longlong *)(uVar13 + 0x40);
        *(undefined8 *)(puVar22 + -8) = 0x14f744d67;
        memset(_Dst,0,_Size);
        local_68 = 0;
        local_90 = (longlong *)0x0;
        if (0xbff < local_88) {
          local_90 = plVar14;
        }
        local_a8 = 0;
        local_60 = 0;
        local_a0 = 0;
        uVar17 = iVar7 - 1;
        local_b0 = _Dst + (longlong)(int)local_b8 * uVar20;
        local_5c = 2;
        local_70 = local_b0 + uVar20;
        lVar12 = (longlong)(int)uVar17;
        local_9c = 2;
        local_48 = lVar12 * 8;
        local_a4 = iVar7;
        iStack_64 = iVar7;
        if (((longlong *)*local_40)[lVar12] < 0) {
          *local_b0 = -*(longlong *)*local_40;
          uVar5 = _UNK_15060db28;
          uVar4 = ___xmm_ffffffffffffffffffffffffffffffff;
          uVar18 = 1;
          uVar24 = uVar18;
          if ((1 < iVar7) && (3 < uVar17)) {
            lVar2 = *local_40;
            if ((((longlong *)(local_48 + lVar2) < local_b0 + 1) ||
                (local_b0 + lVar12 < (longlong *)(lVar2 + 8))) &&
               ((local_40 < local_b0 + 1 || (uVar24 = 1, local_b0 + lVar12 < local_40)))) {
              uVar17 = uVar17 & 0x80000003;
              if ((int)uVar17 < 0) {
                uVar17 = (uVar17 - 1 | 0xfffffffc) + 1;
              }
              uVar24 = uVar18;
              do {
                puVar1 = (ulonglong *)(lVar2 + uVar18 * 8);
                uVar3 = puVar1[1];
                uVar24 = (ulonglong)((int)uVar24 + 4);
                local_b0[uVar18] = ~*puVar1 & uVar4;
                (local_b0 + uVar18)[1] = ~uVar3 & uVar5;
                puVar1 = (ulonglong *)(lVar2 + 0x10 + uVar18 * 8);
                uVar3 = puVar1[1];
                local_b0[uVar18 + 2] = ~*puVar1 & uVar4;
                (local_b0 + uVar18 + 2)[1] = ~uVar3 & uVar5;
                uVar18 = uVar18 + 4;
              } while ((longlong)uVar18 < (longlong)(int)(iVar7 - uVar17));
            }
          }
          for (lVar12 = (longlong)(int)uVar24; local_a8 = iVar7, lVar12 < (longlong)uVar20;
              lVar12 = lVar12 + 1) {
            local_b0[lVar12] = ~*(ulonglong *)(*local_40 + lVar12 * 8);
          }
        }
        else {
          *(undefined8 *)(puVar22 + -8) = 0x14f744eb4;
          uVar15 = BN_value_one();
          *(undefined8 *)(puVar22 + -8) = 0x14f744eca;
          iVar9 = bn_to_mont_fixed_top(&local_b0,uVar15,lVar19,param_5);
          plVar14 = local_90;
          if (iVar9 == 0) goto LAB_14f7455dc;
        }
        plVar11 = local_98;
        *(undefined8 *)(puVar22 + -8) = 0x14f744ee9;
        iVar9 = bn_to_mont_fixed_top(&local_70,plVar11,lVar19,param_5);
        lVar12 = local_80;
        plVar11 = local_b0;
        plVar14 = local_90;
        if (iVar9 != 0) {
          if (((iVar7 < 0x201) && (uVar28 == 5)) && (1 < iVar7)) {
            lVar19 = lVar19 + 0x50;
            if (local_68 < iVar7) {
              plVar25 = local_70 + local_68;
              for (lVar12 = (longlong)(iVar7 - local_68); lVar12 != 0; lVar12 = lVar12 + -1) {
                *plVar25 = 0;
                plVar25 = plVar25 + 1;
              }
            }
            if (local_a8 < iVar7) {
              plVar25 = local_b0 + local_a8;
              for (lVar12 = (longlong)(iVar7 - local_a8); lVar12 != 0; lVar12 = lVar12 + -1) {
                *plVar25 = 0;
                plVar25 = plVar25 + 1;
              }
            }
            lVar12 = 0;
            plVar25 = local_70 + uVar20;
            if (0 < iVar7) {
              do {
                plVar25[lVar12] = *(longlong *)(*(longlong *)(local_80 + 0x20) + lVar12 * 8);
                lVar12 = lVar12 + 1;
              } while (lVar12 < (longlong)uVar20);
            }
            *(undefined8 *)(puVar22 + -8) = 0x14f744f86;
            bn_scatter5(plVar11,uVar20,_Dst,0);
            plVar11 = local_70;
            lVar12 = (longlong)local_68;
            *(undefined8 *)(puVar22 + -8) = 0x14f744f9c;
            bn_scatter5(plVar11,lVar12,_Dst,1);
            plVar27 = local_70;
            plVar11 = local_b0;
            *(int *)(puVar22 + 0x28) = iVar7;
            *(longlong *)(puVar22 + 0x20) = lVar19;
            *(undefined8 *)(puVar22 + -8) = 0x14f744fb8;
            bn_mul_mont(plVar11,plVar27,plVar27,plVar25);
            plVar11 = local_b0;
            *(undefined8 *)(puVar22 + -8) = 0x14f744fcd;
            bn_scatter5(plVar11,uVar20,_Dst,2);
            iVar9 = 4;
            do {
              plVar11 = local_b0;
              *(int *)(puVar22 + 0x28) = iVar7;
              *(longlong *)(puVar22 + 0x20) = lVar19;
              *(undefined8 *)(puVar22 + -8) = 0x14f744fed;
              bn_mul_mont(plVar11,plVar11,plVar11,plVar25);
              plVar11 = local_b0;
              *(undefined8 *)(puVar22 + -8) = 0x14f744fff;
              bn_scatter5(plVar11,uVar20,_Dst,(longlong)iVar9);
              iVar9 = iVar9 * 2;
            } while (iVar9 < 0x20);
            local_98 = (longlong *)&DAT_00000003;
            do {
              plVar14 = local_70;
              plVar27 = local_98;
              plVar11 = local_b0;
              *(int *)(puVar22 + 0x30) = iVar8 + -1;
              *(int *)(puVar22 + 0x28) = iVar7;
              *(longlong *)(puVar22 + 0x20) = lVar19;
              *(undefined8 *)(puVar22 + -8) = 0x14f745033;
              bn_mul_mont_gather5(plVar11,plVar14,_Dst,plVar25);
              plVar11 = local_b0;
              *(undefined8 *)(puVar22 + -8) = 0x14f745045;
              bn_scatter5(plVar11,uVar20,_Dst,plVar27);
              iVar9 = iVar8 * 2;
              if (iVar8 < 0x10) {
                do {
                  plVar11 = local_b0;
                  *(int *)(puVar22 + 0x28) = iVar7;
                  *(longlong *)(puVar22 + 0x20) = lVar19;
                  *(undefined8 *)(puVar22 + -8) = 0x14f74506b;
                  bn_mul_mont(plVar11,plVar11,plVar11,plVar25);
                  plVar11 = local_b0;
                  *(undefined8 *)(puVar22 + -8) = 0x14f74507d;
                  bn_scatter5(plVar11,uVar20,_Dst,(longlong)iVar9);
                  iVar9 = iVar9 * 2;
                } while (iVar9 < 0x20);
              }
              iVar8 = iVar8 + 2;
              local_98 = (longlong *)((longlong)local_98 + 2);
            } while (iVar8 < 8);
            if (iVar8 < 0x10) {
              lVar12 = (longlong)iVar8;
              local_98 = (longlong *)(longlong)(iVar8 * 2);
              do {
                plVar27 = local_70;
                plVar11 = local_b0;
                *(int *)(puVar22 + 0x30) = iVar8 + -1;
                *(int *)(puVar22 + 0x28) = iVar7;
                *(longlong *)(puVar22 + 0x20) = lVar19;
                *(undefined8 *)(puVar22 + -8) = 0x14f7450d4;
                bn_mul_mont_gather5(plVar11,plVar27,_Dst,plVar25);
                plVar11 = local_b0;
                *(undefined8 *)(puVar22 + -8) = 0x14f7450e6;
                bn_scatter5(plVar11,uVar20,_Dst,lVar12);
                plVar11 = local_b0;
                *(int *)(puVar22 + 0x28) = iVar7;
                *(longlong *)(puVar22 + 0x20) = lVar19;
                *(undefined8 *)(puVar22 + -8) = 0x14f745101;
                bn_mul_mont(plVar11,plVar11,plVar11,plVar25);
                plVar27 = local_98;
                plVar11 = local_b0;
                *(undefined8 *)(puVar22 + -8) = 0x14f745114;
                bn_scatter5(plVar11,uVar20,_Dst,plVar27);
                local_98 = (longlong *)((longlong)local_98 + 4);
                iVar8 = iVar8 + 2;
                lVar12 = lVar12 + 2;
              } while (iVar8 < 0x10);
            }
            if (iVar8 < 0x20) {
              lVar12 = (longlong)iVar8;
              iVar8 = iVar8 + -1;
              do {
                plVar27 = local_70;
                plVar11 = local_b0;
                *(int *)(puVar22 + 0x30) = iVar8;
                *(int *)(puVar22 + 0x28) = iVar7;
                *(longlong *)(puVar22 + 0x20) = lVar19;
                *(undefined8 *)(puVar22 + -8) = 0x14f745160;
                bn_mul_mont_gather5(plVar11,plVar27,_Dst,plVar25);
                plVar11 = local_b0;
                *(undefined8 *)(puVar22 + -8) = 0x14f745172;
                bn_scatter5(plVar11,uVar20,_Dst,lVar12);
                iVar8 = iVar8 + 2;
                lVar12 = lVar12 + 2;
              } while (iVar8 < 0x1f);
            }
            plVar27 = local_78;
            plVar11 = local_b0;
            uVar13 = 0;
            iVar9 = (int)(local_84 - 1) % 5 + 1;
            uVar26 = local_84 - iVar9;
            uVar17 = (int)uVar26 >> 0x1f & 0x3f;
            uVar28 = uVar26 + uVar17;
            iVar8 = (uVar28 & 0x3f) - uVar17;
            iVar23 = (int)uVar28 >> 6;
            if ((-1 < iVar23) && (iVar23 < (int)local_78[1])) {
              uVar13 = *(ulonglong *)(*local_78 + (longlong)iVar23 * 8);
              if (iVar8 != 0) {
                bVar16 = (byte)iVar8;
                uVar13 = uVar13 >> (bVar16 & 0x3f);
                if (iVar23 + 1 < (int)local_78[1]) {
                  uVar13 = uVar13 | *(longlong *)(*local_78 + (longlong)(iVar23 + 1) * 8) <<
                                    (0x40 - bVar16 & 0x3f);
                }
              }
            }
            local_84 = uVar26;
            *(undefined8 *)(puVar22 + -8) = 0x14f745221;
            bn_gather5(plVar11,uVar20,_Dst,
                       (longlong)(int)((uint)uVar13 & (1 << ((byte)iVar9 & 0x1f)) - 1U));
            plVar11 = local_b0;
            iVar9 = iVar7;
            if ((uVar20 & 7) == 0) {
              while (0 < (int)uVar26) {
                lVar12 = *plVar27;
                uVar26 = uVar26 - 5;
                *(undefined8 *)(puVar22 + -8) = 0x14f745300;
                uVar10 = bn_get_bits5(lVar12,uVar26);
                plVar11 = local_b0;
                *(undefined4 *)(puVar22 + 0x30) = uVar10;
                *(int *)(puVar22 + 0x28) = iVar7;
                *(longlong *)(puVar22 + 0x20) = lVar19;
                *(undefined8 *)(puVar22 + -8) = 0x14f74531f;
                bn_power5(plVar11,plVar11,_Dst,plVar25);
              }
            }
            else {
              while (local_b0 = plVar11, 0 < (int)uVar26) {
                *(int *)(puVar22 + 0x28) = iVar7;
                *(longlong *)(puVar22 + 0x20) = lVar19;
                *(undefined8 *)(puVar22 + -8) = 0x14f74524d;
                bn_mul_mont(plVar11,plVar11,plVar11,plVar25);
                plVar11 = local_b0;
                *(int *)(puVar22 + 0x28) = iVar7;
                *(longlong *)(puVar22 + 0x20) = lVar19;
                *(undefined8 *)(puVar22 + -8) = 0x14f745268;
                bn_mul_mont(plVar11,plVar11,plVar11,plVar25);
                plVar11 = local_b0;
                *(int *)(puVar22 + 0x28) = iVar7;
                *(longlong *)(puVar22 + 0x20) = lVar19;
                *(undefined8 *)(puVar22 + -8) = 0x14f745283;
                bn_mul_mont(plVar11,plVar11,plVar11,plVar25);
                plVar11 = local_b0;
                *(int *)(puVar22 + 0x28) = iVar7;
                *(longlong *)(puVar22 + 0x20) = lVar19;
                *(undefined8 *)(puVar22 + -8) = 0x14f74529e;
                bn_mul_mont(plVar11,plVar11,plVar11,plVar25);
                plVar11 = local_b0;
                *(int *)(puVar22 + 0x28) = iVar7;
                *(longlong *)(puVar22 + 0x20) = lVar19;
                *(undefined8 *)(puVar22 + -8) = 0x14f7452b9;
                bn_mul_mont(plVar11,plVar11,plVar11,plVar25);
                lVar12 = *plVar27;
                uVar26 = uVar26 - 5;
                *(undefined8 *)(puVar22 + -8) = 0x14f7452c6;
                uVar10 = bn_get_bits5(lVar12,uVar26);
                plVar11 = local_b0;
                *(undefined4 *)(puVar22 + 0x30) = uVar10;
                *(int *)(puVar22 + 0x28) = iVar7;
                *(longlong *)(puVar22 + 0x20) = lVar19;
                *(undefined8 *)(puVar22 + -8) = 0x14f7452e5;
                bn_mul_mont_gather5(plVar11,plVar11,_Dst,plVar25);
                plVar11 = local_b0;
              }
            }
LAB_14f745326:
            local_a8 = iVar9;
            puVar21 = local_58;
            lVar19 = local_80;
            plVar14 = local_90;
            *(undefined8 *)(puVar22 + -8) = 0x14f74534b;
            iVar7 = BN_from_montgomery(puVar21,&local_b0,lVar19,param_5);
            if (iVar7 != 0) {
              local_50 = CONCAT44(local_50._4_4_,1);
            }
          }
          else {
            iVar9 = iVar7;
            if (local_a8 < iVar7) {
              iVar9 = local_a8;
            }
            if (0 < iVar9) {
              lVar19 = 0;
              plVar11 = _Dst;
              do {
                plVar25 = local_b0 + lVar19;
                lVar19 = lVar19 + 1;
                *plVar11 = *plVar25;
                plVar11 = plVar11 + (int)local_b8;
              } while (lVar19 < iVar9);
            }
            iVar9 = iVar7;
            if (local_68 < iVar7) {
              iVar9 = local_68;
            }
            if (0 < iVar9) {
              plVar11 = (longlong *)(uVar13 + 0x48);
              lVar19 = 0;
              do {
                plVar25 = local_70 + lVar19;
                lVar19 = lVar19 + 1;
                *plVar11 = *plVar25;
                plVar11 = plVar11 + (int)local_b8;
              } while (lVar19 < iVar9);
            }
            if (1 < uVar28) {
              *(undefined8 *)(puVar22 + 0x20) = param_5;
              *(undefined8 *)(puVar22 + -8) = 0x14f745404;
              iVar9 = bn_mul_mont_fixed_top(&local_b0,&local_70,&local_70,lVar12);
              lVar19 = lVar12;
              plVar14 = local_90;
              if (iVar9 == 0) goto LAB_14f7455dc;
              iVar9 = iVar7;
              if (local_a8 < iVar7) {
                iVar9 = local_a8;
              }
              if (0 < iVar9) {
                plVar11 = (longlong *)(uVar13 + 0x50);
                lVar19 = 0;
                do {
                  plVar25 = local_b0 + lVar19;
                  lVar19 = lVar19 + 1;
                  *plVar11 = *plVar25;
                  plVar11 = plVar11 + (int)local_b8;
                } while (lVar19 < iVar9);
              }
              if (3 < (int)local_b8) {
                do {
                  *(undefined8 *)(puVar22 + 0x20) = param_5;
                  *(undefined8 *)(puVar22 + -8) = 0x14f745479;
                  iVar9 = bn_mul_mont_fixed_top(&local_b0,&local_70,&local_b0,lVar12);
                  lVar19 = local_80;
                  plVar14 = local_90;
                  if (iVar9 == 0) goto LAB_14f7455dc;
                  iVar9 = iVar7;
                  if (local_a8 < iVar7) {
                    iVar9 = local_a8;
                  }
                  lVar19 = 0;
                  if (0 < iVar9) {
                    plVar11 = _Dst + iVar8;
                    do {
                      plVar25 = local_b0 + lVar19;
                      lVar19 = lVar19 + 1;
                      *plVar11 = *plVar25;
                      plVar11 = plVar11 + (int)local_b8;
                    } while (lVar19 < iVar9);
                  }
                  iVar8 = iVar8 + 1;
                } while (iVar8 < (int)local_b8);
              }
            }
            plVar11 = local_78;
            iVar9 = (int)(uVar26 - 1) % (int)uVar28 + 1;
            iVar8 = uVar26 - iVar9;
            *(undefined8 *)(puVar22 + -8) = 0x14f7454ee;
            uVar26 = FUN_14f746510(plVar11,iVar8);
            *(uint *)(puVar22 + 0x20) = uVar28;
            *(undefined8 *)(puVar22 + -8) = 0x14f745512;
            iVar9 = FUN_14f7461e0(&local_b0,iVar7,_Dst,uVar26 & (1 << ((byte)iVar9 & 0x1f)) - 1U);
            lVar19 = local_80;
            plVar14 = local_90;
            if (iVar9 != 0) {
              local_84 = (int)local_b8 - 1;
              do {
                iVar9 = local_a8;
                if (iVar8 < 1) goto LAB_14f745326;
                iVar9 = 0;
                if (uVar28 != 0) {
                  do {
                    *(undefined8 *)(puVar22 + 0x20) = param_5;
                    *(undefined8 *)(puVar22 + -8) = 0x14f745559;
                    iVar23 = bn_mul_mont_fixed_top(&local_b0,&local_b0,&local_b0,lVar12);
                    lVar19 = local_80;
                    plVar14 = local_90;
                    if (iVar23 == 0) goto LAB_14f7455dc;
                    iVar9 = iVar9 + 1;
                  } while (iVar9 < (int)uVar28);
                }
                plVar11 = local_78;
                iVar8 = iVar8 - uVar28;
                *(undefined8 *)(puVar22 + -8) = 0x14f745573;
                uVar26 = FUN_14f746510(plVar11,iVar8);
                uVar26 = uVar26 & local_84;
                *(uint *)(puVar22 + 0x20) = uVar28;
                *(undefined8 *)(puVar22 + -8) = 0x14f74558c;
                iVar9 = FUN_14f7461e0(&local_70,iVar7,_Dst,uVar26);
                lVar19 = local_80;
                plVar14 = local_90;
                if (iVar9 == 0) break;
                *(undefined8 *)(puVar22 + 0x20) = param_5;
                *(undefined8 *)(puVar22 + -8) = 0x14f7455a9;
                iVar9 = bn_mul_mont_fixed_top(&local_b0,&local_b0,&local_70,lVar12);
                lVar19 = local_80;
                plVar14 = local_90;
              } while (iVar9 != 0);
            }
          }
        }
      }
    }
    else {
      local_90 = (longlong *)BN_CTX_get(param_5);
      puVar22 = auStack_f8;
      plVar14 = plVar11;
      _Dst = plVar11;
      if ((local_90 != (longlong *)0x0) &&
         (iVar8 = BN_nnmod(local_90,local_98,param_4,param_5), puVar22 = auStack_f8,
         plVar14 = plVar25, _Dst = plVar27, iVar8 != 0)) {
        local_98 = local_90;
        goto LAB_14f744b72;
      }
    }
LAB_14f7455dc:
    if (param_6 == 0) goto LAB_14f7455e6;
  }
  if (_Dst != (longlong *)0x0) {
    lVar19 = (longlong)local_88;
    *(undefined8 *)(puVar22 + -8) = 0x14f7455ff;
    OPENSSL_cleanse(_Dst,lVar19);
    *(undefined8 *)(puVar22 + -8) = 0x14f745614;
    CRYPTO_free(plVar14,"crypto\\bn\\bn_exp.c",0x480);
  }
  *(undefined8 *)(puVar22 + -8) = 0x14f74561c;
  BN_CTX_end(param_5);
  local_50 = local_50 & 0xffffffff;
LAB_14f74561f:
  *(undefined8 *)(puVar22 + -8) = 0x14f74562e;
  return local_50;
}

// BN_mod_exp_mont_word @ 14f745660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
BN_mod_exp_mont_word
          (undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 *param_4,
          undefined8 param_5,longlong param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar11;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uVar3 = 0;
  lVar7 = 0;
  iVar2 = BN_get_flags(param_3,4);
  if ((iVar2 != 0) || (iVar2 = BN_get_flags(param_4), iVar2 != 0)) {
    ERR_put_error(3,0x75,0x42,"crypto\\bn\\bn_exp.c",CONCAT44(uVar11,0x4a3));
    return 0;
  }
  iVar2 = BN_is_odd(param_4);
  if (iVar2 == 0) {
    ERR_put_error(3,0x75,0x66,"crypto\\bn\\bn_exp.c",CONCAT44(uVar11,0x4ab));
    return 0;
  }
  if (*(int *)(param_4 + 1) == 1) {
    param_2 = param_2 % *(ulonglong *)*param_4;
  }
  iVar2 = BN_num_bits(param_3);
  if (iVar2 == 0) {
    iVar2 = BN_abs_is_word(param_4,1);
    if (iVar2 != 0) {
      BN_set_word(param_1,0);
      return 1;
    }
    uVar3 = BN_set_word(param_1,1);
    return uVar3;
  }
  if (param_2 == 0) {
    BN_set_word(param_1,0);
    return 1;
  }
  BN_CTX_start(param_5);
  lVar5 = BN_CTX_get(param_5);
  lVar6 = BN_CTX_get(param_5);
  if (lVar6 == 0) {
LAB_14f745995:
    if (param_6 != 0) goto LAB_14f7459a8;
  }
  else {
    lVar7 = param_6;
    if ((param_6 != 0) ||
       ((lVar7 = BN_MONT_CTX_new(), lVar7 != 0 &&
        (iVar4 = BN_MONT_CTX_set(lVar7,param_4,param_5), uVar3 = 0, iVar4 != 0)))) {
      bVar1 = true;
      uVar10 = param_2;
      for (iVar2 = iVar2 + -2; -1 < iVar2; iVar2 = iVar2 + -1) {
        uVar9 = uVar10 * uVar10;
        lVar8 = lVar5;
        if (uVar9 / uVar10 != uVar10) {
          if (bVar1) {
            iVar4 = BN_set_word();
            if ((iVar4 == 0) || (iVar4 = BN_to_montgomery(lVar5,lVar5,lVar7,param_5), iVar4 == 0))
            goto LAB_14f745993;
            bVar1 = false;
            lVar5 = lVar6;
          }
          else {
            iVar4 = BN_mul_word(lVar5,uVar10);
            if ((iVar4 == 0) ||
               (iVar4 = BN_div(0,lVar6,lVar5,param_4,param_5), lVar8 = lVar6, iVar4 == 0))
            goto LAB_14f745993;
          }
          uVar9 = 1;
          lVar6 = lVar5;
        }
        if ((!bVar1) && (iVar4 = BN_mod_mul_montgomery(lVar8,lVar8,lVar8,lVar7,param_5), iVar4 == 0)
           ) goto LAB_14f745993;
        iVar4 = BN_is_bit_set(param_3);
        lVar5 = lVar8;
        uVar10 = uVar9;
        if ((iVar4 != 0) && (uVar10 = uVar9 * param_2, (uVar9 * param_2) / param_2 != uVar9)) {
          if (bVar1) {
            iVar4 = BN_set_word();
            if ((iVar4 == 0) || (iVar4 = BN_to_montgomery(lVar8,lVar8,lVar7,param_5), iVar4 == 0))
            goto LAB_14f745993;
            bVar1 = false;
            uVar10 = param_2;
          }
          else {
            iVar4 = BN_mul_word(lVar8,uVar9);
            if ((iVar4 == 0) ||
               (iVar4 = BN_div(0,lVar6,lVar8,param_4,param_5), lVar5 = lVar6, uVar10 = param_2,
               lVar6 = lVar8, iVar4 == 0)) goto LAB_14f745993;
          }
        }
      }
      if (uVar10 == 1) {
        if (bVar1) {
          iVar2 = BN_set_word(param_1,1);
        }
        else {
LAB_14f7459e6:
          iVar2 = BN_from_montgomery(param_1,lVar5,lVar7,param_5);
        }
        if (iVar2 != 0) {
          uVar3 = 1;
          goto LAB_14f745995;
        }
      }
      else if (bVar1) {
        iVar2 = BN_set_word();
        if (iVar2 != 0) {
          iVar2 = BN_to_montgomery(lVar5,lVar5,lVar7,param_5);
joined_r0x00014f7459e1:
          if (iVar2 != 0) goto LAB_14f7459e6;
        }
      }
      else {
        iVar2 = BN_mul_word(lVar5,uVar10);
        if (iVar2 != 0) {
          iVar2 = BN_div(0,lVar6,lVar5,param_4,param_5);
          lVar5 = lVar6;
          goto joined_r0x00014f7459e1;
        }
      }
LAB_14f745993:
      uVar3 = 0;
      goto LAB_14f745995;
    }
  }
  BN_MONT_CTX_free(lVar7);
LAB_14f7459a8:
  BN_CTX_end(param_5);
  return uVar3;
}

// BN_mod_exp_recp @ 14f745a50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
BN_mod_exp_recp(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
               undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined4 local_1b8;
  int local_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198 [56];
  longlong alStack_160 [33];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  uVar14 = 4;
  local_1a8 = param_5;
  local_1b8 = 0;
  local_1b0 = param_3;
  iVar4 = BN_get_flags(param_3,4);
  if (((iVar4 != 0) || (iVar4 = BN_get_flags(param_2,4), iVar4 != 0)) ||
     (iVar4 = BN_get_flags(param_4,4), iVar4 != 0)) {
    local_1c8 = CONCAT44(local_1c8._4_4_,0xb8);
    ERR_put_error(3,0x7d,0x42,"crypto\\bn\\bn_exp.c");
    return 0;
  }
  iVar4 = BN_num_bits(param_3);
  if (iVar4 == 0) {
    iVar4 = BN_abs_is_word(param_4,1);
    if (iVar4 != 0) {
      BN_set_word(param_1,0);
      return 1;
    }
    uVar5 = BN_set_word(param_1,1);
    return uVar5;
  }
  BN_RECP_CTX_init(local_198);
  BN_CTX_start(param_5);
  lVar8 = BN_CTX_get(param_5);
  lVar9 = BN_CTX_get(param_5);
  alStack_160[1] = lVar9;
  if (lVar9 == 0) goto LAB_14f745de8;
  lVar10 = param_4;
  if (*(int *)(param_4 + 0x10) != 0) {
    lVar10 = BN_copy(lVar8,param_4);
    if (lVar10 == 0) goto LAB_14f745de8;
    *(undefined4 *)(lVar8 + 0x10) = 0;
    lVar10 = lVar8;
  }
  iVar6 = BN_RECP_CTX_set(local_198,lVar10,param_5);
  if ((iVar6 < 1) || (iVar6 = BN_nnmod(lVar9,param_2,param_4,param_5), iVar6 == 0))
  goto LAB_14f745de8;
  iVar6 = BN_is_zero(lVar9);
  if (iVar6 != 0) {
    BN_set_word(param_1,0);
    local_1b8 = 1;
    goto LAB_14f745de8;
  }
  lVar10 = 1;
  if (iVar4 < 0x2a0) {
    if (0xef < iVar4) {
      uVar14 = 5;
      goto LAB_14f745c3f;
    }
    if (0x4f < iVar4) goto LAB_14f745c3f;
    uVar14 = 1;
    if (0x17 < iVar4) {
      uVar14 = 3;
    }
    if (1 < uVar14) goto LAB_14f745c3f;
  }
  else {
    uVar14 = 6;
LAB_14f745c3f:
    local_1c8 = param_5;
    iVar6 = BN_mod_mul_reciprocal(lVar8,lVar9,lVar9,local_198);
    if (iVar6 == 0) goto LAB_14f745de8;
    lVar9 = (longlong)(1 << ((char)uVar14 - 1U & 0x1f));
    if (1 < lVar9) {
      do {
        lVar11 = BN_CTX_get(param_5);
        alStack_160[lVar10 + 1] = lVar11;
        if (lVar11 == 0) goto LAB_14f745de8;
        local_1c8 = param_5;
        iVar6 = BN_mod_mul_reciprocal(lVar11,alStack_160[lVar10],lVar8,local_198);
        if (iVar6 == 0) goto LAB_14f745de8;
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar9);
    }
  }
  bVar1 = true;
  local_1b4 = 1;
  iVar4 = iVar4 + -1;
  iVar6 = BN_set_word(param_1,1);
  if (iVar6 != 0) {
    do {
      while( true ) {
        uVar12 = 1;
        uVar13 = 1;
        iVar6 = BN_is_bit_set(local_1b0,iVar4);
        uVar2 = local_1b0;
        if (iVar6 != 0) break;
        if ((!bVar1) &&
           (local_1c8 = param_5, iVar6 = BN_mod_mul_reciprocal(param_1,param_1,param_1,local_198),
           iVar6 == 0)) goto LAB_14f745de8;
        if (iVar4 == 0) goto LAB_14f745de4;
        iVar4 = iVar4 + -1;
      }
      uVar15 = 0;
      iVar6 = iVar4;
      uVar3 = uVar12;
      if (1 < uVar14) {
        do {
          uVar13 = uVar3;
          iVar6 = iVar6 + -1;
          param_5 = local_1a8;
          if (iVar6 < 0) break;
          iVar7 = BN_is_bit_set(uVar2,iVar6);
          if (iVar7 != 0) {
            uVar13 = uVar13 << ((char)uVar12 - (char)uVar15 & 0x1fU) | 1;
            uVar15 = uVar12;
          }
          uVar12 = uVar12 + 1;
          param_5 = local_1a8;
          uVar3 = uVar13;
        } while ((int)uVar12 < (int)uVar14);
      }
      if ((local_1b4 == 0) && (iVar6 = 0, 0 < (int)(uVar15 + 1))) {
        do {
          local_1c8 = param_5;
          iVar7 = BN_mod_mul_reciprocal(param_1,param_1,param_1,local_198);
          if (iVar7 == 0) goto LAB_14f745de8;
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)(uVar15 + 1));
      }
      local_1c8 = param_5;
      iVar6 = BN_mod_mul_reciprocal
                        (param_1,param_1,alStack_160[((longlong)(int)uVar13 >> 1) + 1],local_198);
      if (iVar6 == 0) goto LAB_14f745de8;
      bVar1 = false;
      local_1b4 = 0;
      iVar4 = iVar4 + (-1 - uVar15);
    } while (-1 < iVar4);
LAB_14f745de4:
    local_1b8 = 1;
  }
LAB_14f745de8:
  BN_CTX_end(param_5);
  BN_RECP_CTX_free(local_198);
  return local_1b8;
}

// BN_mod_exp_simple @ 14f745e40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
BN_mod_exp_simple(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 longlong param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  int local_178;
  undefined8 local_170;
  undefined8 local_168;
  longlong local_160 [33];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  uVar13 = 4;
  local_160[0] = param_5;
  local_170 = param_4;
  local_168 = param_3;
  iVar3 = BN_get_flags(param_3,4);
  if (((iVar3 != 0) || (iVar3 = BN_get_flags(param_2,4), iVar3 != 0)) ||
     (iVar3 = BN_get_flags(param_4,4), iVar3 != 0)) {
    local_188 = CONCAT44(local_188._4_4_,0x527);
    ERR_put_error(3,0x7e,0x42,"crypto\\bn\\bn_exp.c");
    return 0;
  }
  iVar3 = BN_num_bits(param_3);
  if (iVar3 == 0) {
    iVar3 = BN_abs_is_word(param_4,1);
    if (iVar3 != 0) {
      BN_set_word(param_1,0);
      return 1;
    }
    uVar4 = BN_set_word(param_1,1);
    return uVar4;
  }
  BN_CTX_start(param_5);
  uVar7 = BN_CTX_get(param_5);
  lVar8 = BN_CTX_get(param_5);
  local_160[1] = lVar8;
  if ((lVar8 == 0) || (iVar5 = BN_nnmod(lVar8,param_2,param_4,param_5), iVar5 == 0)) {
LAB_14f74618c:
    uVar4 = 0;
  }
  else {
    iVar5 = BN_is_zero(lVar8);
    if (iVar5 != 0) {
      BN_set_word(param_1,0);
      local_178 = 1;
      uVar4 = 1;
      goto LAB_14f74618e;
    }
    if (iVar3 < 0x2a0) {
      if (0xef < iVar3) {
        uVar13 = 5;
        goto LAB_14f745fea;
      }
      if (0x4f < iVar3) goto LAB_14f745fea;
      uVar13 = 1;
      if (0x17 < iVar3) {
        uVar13 = 3;
      }
      if (1 < uVar13) goto LAB_14f745fea;
    }
    else {
      uVar13 = 6;
LAB_14f745fea:
      local_188 = param_5;
      iVar5 = BN_mod_mul(uVar7,lVar8,lVar8,param_4);
      if (iVar5 == 0) goto LAB_14f74618c;
      lVar8 = 1;
      lVar12 = (longlong)(1 << ((char)uVar13 - 1U & 0x1f));
      if (1 < lVar12) {
        do {
          lVar9 = BN_CTX_get(param_5);
          local_160[lVar8 + 1] = lVar9;
          if (lVar9 == 0) goto LAB_14f74618c;
          local_188 = param_5;
          iVar5 = BN_mod_mul(lVar9,local_160[lVar8],uVar7,param_4);
          if (iVar5 == 0) goto LAB_14f74618c;
          lVar8 = lVar8 + 1;
        } while (lVar8 < lVar12);
      }
    }
    bVar1 = true;
    local_178 = 1;
    iVar3 = iVar3 + -1;
    iVar5 = BN_set_word(param_1,1);
    uVar4 = 0;
    if (iVar5 != 0) {
      do {
        while( true ) {
          uVar10 = 1;
          uVar11 = 1;
          uVar4 = 0;
          iVar5 = BN_is_bit_set(local_168,iVar3);
          uVar7 = local_168;
          if (iVar5 != 0) break;
          if ((!bVar1) &&
             (local_188 = param_5, iVar5 = BN_mod_mul(param_1,param_1,param_1,param_4), iVar5 == 0))
          goto LAB_14f74618e;
          if (iVar3 == 0) goto LAB_14f746188;
          iVar3 = iVar3 + -1;
        }
        uVar14 = 0;
        iVar5 = iVar3;
        uVar2 = uVar10;
        if (1 < uVar13) {
          do {
            uVar11 = uVar2;
            iVar5 = iVar5 + -1;
            param_5 = local_160[0];
            if (iVar5 < 0) break;
            iVar6 = BN_is_bit_set(uVar7,iVar5);
            if (iVar6 != 0) {
              uVar11 = uVar11 << ((char)uVar10 - (char)uVar14 & 0x1fU) | 1;
              uVar14 = uVar10;
            }
            uVar10 = uVar10 + 1;
            param_5 = local_160[0];
            uVar2 = uVar11;
          } while ((int)uVar10 < (int)uVar13);
        }
        if ((local_178 == 0) && (iVar5 = 0, 0 < (int)(uVar14 + 1))) {
          do {
            local_188 = param_5;
            iVar6 = BN_mod_mul(param_1,param_1,param_1,local_170);
            if (iVar6 == 0) goto LAB_14f74618c;
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)(uVar14 + 1));
        }
        local_188 = param_5;
        iVar5 = BN_mod_mul(param_1,param_1,local_160[((longlong)(int)uVar11 >> 1) + 1],local_170);
        if (iVar5 == 0) goto LAB_14f74618c;
        bVar1 = false;
        iVar3 = iVar3 + (-1 - uVar14);
        local_178 = 0;
        param_4 = local_170;
      } while (-1 < iVar3);
LAB_14f746188:
      uVar4 = 1;
    }
  }
LAB_14f74618e:
  BN_CTX_end(param_5);
  return uVar4;
}

// FUN_14f7461e0 @ 14f7461e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7461e0(longlong *param_1,int param_2,ulonglong *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong local_78;
  
  iVar6 = 1 << ((byte)param_5 & 0x1f);
  lVar1 = bn_wexpand(param_1);
  if (lVar1 != 0) {
    if (param_5 < 4) {
      lVar1 = 0;
      if (0 < param_2) {
        do {
          uVar9 = 0;
          uVar5 = 0;
          puVar4 = param_3;
          if (0 < iVar6) {
            do {
              uVar3 = uVar5 ^ param_4;
              uVar5 = uVar5 + 1;
              uVar9 = uVar9 | -(ulonglong)((int)(~uVar3 & uVar3 - 1) >> 0x1f & 1) & *puVar4;
              puVar4 = puVar4 + 1;
            } while ((int)uVar5 < iVar6);
          }
          param_3 = param_3 + iVar6;
          *(ulonglong *)(*param_1 + lVar1 * 8) = uVar9;
          lVar1 = lVar1 + 1;
        } while (lVar1 < param_2);
      }
    }
    else {
      bVar2 = (byte)param_5 - 2;
      uVar5 = (int)param_4 >> (bVar2 & 0x1f);
      iVar7 = 1 << (bVar2 & 0x1f);
      lVar1 = (longlong)iVar7;
      local_78 = 0;
      if (0 < param_2) {
        do {
          uVar9 = 0;
          uVar3 = 0;
          if (0 < lVar1) {
            puVar4 = param_3 + lVar1 * 2;
            lVar10 = lVar1;
            do {
              uVar8 = uVar3 ^ param_4 & iVar7 - 1U;
              uVar3 = uVar3 + 1;
              uVar9 = uVar9 | -(ulonglong)((int)(uVar8 - 1 & ~uVar8) >> 0x1f & 1) &
                              (puVar4[lVar1 * -2] &
                               -(ulonglong)((int)(~uVar5 & uVar5 - 1) >> 0x1f & 1) |
                              (puVar4 + 1)[-1 - lVar1] &
                              -(ulonglong)((int)((uVar5 ^ 1) - 1 & ~(uVar5 ^ 1)) >> 0x1f & 1) |
                              *puVar4 & -(ulonglong)
                                         ((int)((uVar5 ^ 2) - 1 & ~(uVar5 ^ 2)) >> 0x1f & 1) |
                              puVar4[lVar1] &
                              -(ulonglong)((int)(~(uVar5 ^ 3) & (uVar5 ^ 3) - 1) >> 0x1f & 1));
              lVar10 = lVar10 + -1;
              puVar4 = puVar4 + 1;
            } while (lVar10 != 0);
          }
          param_3 = param_3 + iVar6;
          *(ulonglong *)(*param_1 + local_78 * 8) = uVar9;
          local_78 = local_78 + 1;
        } while (local_78 < param_2);
      }
    }
    *(int *)(param_1 + 1) = param_2;
    return 1;
  }
  return 0;
}

// FUN_14f746490 @ 14f746490

undefined8 FUN_14f746490(longlong *param_1,int param_2,longlong param_3,int param_4,byte param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_1[1] < param_2) {
    param_2 = (int)param_1[1];
  }
  if (0 < param_2) {
    lVar2 = 0;
    puVar3 = (undefined8 *)(param_3 + (longlong)param_4 * 8);
    do {
      lVar1 = lVar2 * 8;
      lVar2 = lVar2 + 1;
      *puVar3 = *(undefined8 *)(*param_1 + lVar1);
      puVar3 = puVar3 + (1 << (param_5 & 0x1f));
    } while (lVar2 < param_2);
  }
  return 1;
}

// FUN_14f746510 @ 14f746510

ulonglong FUN_14f746510(longlong *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar4 = param_2 >> 0x1f & 0x3f;
  uVar1 = param_2 + uVar4;
  iVar2 = (uVar1 & 0x3f) - uVar4;
  iVar6 = (int)uVar1 >> 6;
  if ((-1 < iVar6) && (iVar6 < (int)param_1[1])) {
    uVar5 = *(ulonglong *)(*param_1 + (longlong)iVar6 * 8);
    if (iVar2 != 0) {
      bVar3 = (byte)iVar2;
      uVar5 = uVar5 >> (bVar3 & 0x3f);
      if (iVar6 + 1 < (int)param_1[1]) {
        return *(longlong *)(*param_1 + (longlong)(iVar6 + 1) * 8) << (0x40 - bVar3 & 0x3f) | uVar5;
      }
    }
    return uVar5;
  }
  return 0;
}

