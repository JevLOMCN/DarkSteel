// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 14

// FUN_14f751450 @ 14f751450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14f751450(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  longlong *plVar6;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  plVar11 = (longlong *)0x0;
  local_a8 = 0;
  local_a0 = 0;
  EC_pre_comp_free();
  lVar2 = EC_GROUP_get0_generator(param_1);
  local_98 = lVar2;
  if (lVar2 == 0) {
    local_c8 = CONCAT44(local_c8._4_4_,0x33f);
    ERR_put_error(0x10,0xf3,0x71,"crypto\\ec\\ecp_nistz256.c");
  }
  else {
    iVar1 = FUN_14f752770(lVar2);
    if (iVar1 != 0) {
      return (longlong *)&DAT_00000001;
    }
    local_b8 = (longlong *)FUN_14f752bf0(param_1);
    if (local_b8 != (longlong *)0x0) {
      if ((param_2 != 0) ||
         (param_2 = BN_CTX_new(), plVar7 = local_b8, plVar9 = plVar11, plVar4 = plVar11,
         local_a0 = param_2, param_2 != 0)) {
        BN_CTX_start(param_2);
        lVar3 = EC_GROUP_get0_order(param_1);
        plVar7 = local_b8;
        plVar9 = (longlong *)0x0;
        plVar4 = (longlong *)0x0;
        if (lVar3 != 0) {
          iVar1 = BN_is_zero(lVar3);
          if (iVar1 == 0) {
            local_b0 = (longlong *)CRYPTO_malloc(0x25040,"crypto\\ec\\ecp_nistz256.c",0x362);
            if (local_b0 == (longlong *)0x0) {
              local_c8 = CONCAT44(local_c8._4_4_,0x363);
              uVar10 = 0x41;
              plVar4 = plVar11;
LAB_14f751730:
              ERR_put_error(0x10,0xf3,uVar10,"crypto\\ec\\ecp_nistz256.c");
              plVar7 = local_b8;
              plVar9 = local_b0;
            }
            else {
              puVar12 = (undefined1 *)
                        ((longlong)local_b0 + (0x40 - (ulonglong)((uint)local_b0 & 0x3f)));
              plVar4 = (longlong *)EC_POINT_new(param_1);
              local_a8 = EC_POINT_new(param_1);
              plVar7 = local_b8;
              plVar9 = local_b0;
              if (((plVar4 != (longlong *)0x0) && (local_a8 != 0)) &&
                 (iVar1 = EC_POINT_copy(local_a8,lVar2), plVar7 = local_b8, plVar9 = local_b0,
                 plVar13 = plVar11, iVar1 != 0)) {
                do {
                  iVar1 = EC_POINT_copy(plVar4,local_a8);
                  plVar7 = local_b8;
                  plVar9 = local_b0;
                  plVar8 = plVar11;
                  if (iVar1 == 0) goto LAB_14f751750;
                  do {
                    iVar1 = EC_POINT_make_affine(param_1,plVar4,param_2);
                    plVar7 = local_b8;
                    plVar9 = local_b0;
                    if (iVar1 == 0) goto LAB_14f751750;
                    iVar1 = bn_copy_words(local_88,plVar4[2],4);
                    if ((iVar1 == 0) || (iVar1 = bn_copy_words(local_68,plVar4[3],4), iVar1 == 0)) {
                      local_c8 = CONCAT44(local_c8._4_4_,899);
                      uVar10 = 0x92;
                      goto LAB_14f751730;
                    }
                    ecp_nistz256_scatter_w7
                              (puVar12 + (longlong)(int)plVar8 * 0x1000,local_88,plVar13);
                    plVar6 = plVar11;
                    do {
                      iVar1 = EC_POINT_dbl(param_1,plVar4,plVar4,param_2);
                      plVar7 = local_b8;
                      plVar9 = local_b0;
                      if (iVar1 == 0) goto LAB_14f751750;
                      uVar5 = (int)plVar6 + 1;
                      plVar6 = (longlong *)(ulonglong)uVar5;
                    } while ((int)uVar5 < 7);
                    uVar5 = (int)plVar8 + 1;
                    plVar8 = (longlong *)(ulonglong)uVar5;
                  } while ((int)uVar5 < 0x25);
                  local_c8 = param_2;
                  iVar1 = EC_POINT_add(param_1,local_a8,local_a8,local_98);
                  plVar7 = local_b8;
                  plVar9 = local_b0;
                  if (iVar1 == 0) goto LAB_14f751750;
                  uVar5 = (int)plVar13 + 1;
                  plVar13 = (longlong *)(ulonglong)uVar5;
                } while ((int)uVar5 < 0x40);
                local_b8[3] = (longlong)local_b0;
                *local_b8 = param_1;
                local_b8[1] = 7;
                local_b8[2] = (longlong)puVar12;
                *(undefined4 *)(param_1 + 0x98) = 4;
                *(longlong **)(param_1 + 0xa0) = local_b8;
                plVar7 = plVar11;
                plVar9 = plVar11;
                plVar11 = (longlong *)&DAT_00000001;
              }
            }
          }
          else {
            local_c8 = CONCAT44(local_c8._4_4_,0x35b);
            ERR_put_error(0x10,0xf3,0x72,"crypto\\ec\\ecp_nistz256.c");
            plVar7 = local_b8;
          }
        }
      }
LAB_14f751750:
      BN_CTX_end(param_2);
      BN_CTX_free(local_a0);
      EC_nistz256_pre_comp_free(plVar7);
      CRYPTO_free(plVar9,"crypto\\ec\\ecp_nistz256.c",0x39e);
      EC_POINT_free(plVar4);
      EC_POINT_free(local_a8);
      return plVar11;
    }
  }
  return (longlong *)0x0;
}

// FUN_14f7517d0 @ 14f7517d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014f751bb7) */
/* WARNING: Removing unreachable block (ram,0x00014f751bc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_14f7517d0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
             undefined1 *param_5,void *param_6,undefined8 param_7)

{
  size_t _Size;
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  void *_Dst;
  undefined1 *_Dst_00;
  uint uVar8;
  undefined1 *puVar9;
  ulonglong *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  undefined1 auStack_1e8 [32];
  ulonglong local_1c8;
  undefined8 local_1c0;
  int local_1a0;
  undefined1 *local_198;
  longlong local_190;
  ulonglong local_188;
  undefined1 *local_180;
  void *local_178;
  longlong local_170;
  void *local_168;
  undefined8 local_160;
  ulonglong local_158;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong uStack_118;
  ulonglong local_110;
  ulonglong uStack_108;
  ulonglong local_100;
  ulonglong uStack_f8;
  ulonglong local_f0;
  ulonglong uStack_e8;
  ulonglong local_e0 [4];
  ulonglong local_c0;
  ulonglong uStack_b8;
  ulonglong local_b0;
  ulonglong uStack_a8;
  ulonglong local_a0;
  ulonglong uStack_98;
  ulonglong local_90;
  ulonglong uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x14f7517e7;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  _Dst_00 = (undefined1 *)0x0;
  bVar2 = false;
  local_180 = param_5;
  local_178 = param_6;
  local_158 = param_4 + 1;
  puVar16 = (undefined1 *)0x0;
  local_160 = param_7;
  local_1a0 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_198 = (undefined1 *)0x0;
  local_168 = (void *)0x0;
  local_188 = param_4;
  local_170 = param_2;
  if (0xffffffe < param_4) {
    local_1c8 = CONCAT44(local_1c8._4_4_,0x3cc);
    ERR_put_error(0x10,0xf1,0x41,"crypto\\ec\\ecp_nistz256.c");
    return (undefined1 *)0x0;
  }
  memset(&local_140,0,0x60);
  BN_CTX_start(param_7);
  if (param_3 == 0) {
    local_1a0 = 1;
    uVar7 = local_188;
    puVar9 = local_180;
    _Dst = local_178;
    puVar16 = _Dst_00;
    iVar3 = 1;
  }
  else {
    local_190 = EC_GROUP_get0_generator(param_1);
    if (local_190 == 0) {
      local_1c8 = CONCAT44(local_1c8._4_4_,0x3d6);
      ERR_put_error(0x10,0xf1,0x71,"crypto\\ec\\ecp_nistz256.c");
      puVar16 = _Dst_00;
      goto LAB_14f751f37;
    }
    lVar6 = *(longlong *)(param_1 + 0xa0);
    lVar5 = param_3;
    if (lVar6 == 0) {
LAB_14f7519a5:
      iVar3 = FUN_14f752770(local_190);
      if (iVar3 != 0) {
        local_198 = &ecp_nistz256_precomputed;
        goto LAB_14f7519c0;
      }
      bVar2 = true;
      local_1a0 = 1;
    }
    else {
      lVar4 = EC_POINT_new(param_1);
      if (lVar4 == 0) goto LAB_14f751f37;
      ecp_nistz256_gather_w7(&local_140,*(undefined8 *)(lVar6 + 0x10),1);
      iVar3 = bn_set_words(*(undefined8 *)(lVar4 + 0x10),&local_140,4);
      if (((iVar3 == 0) ||
          (iVar3 = bn_set_words(*(undefined8 *)(lVar4 + 0x18),&local_120,4), iVar3 == 0)) ||
         (iVar3 = bn_set_words(*(undefined8 *)(lVar4 + 0x20),&DAT_1534c1660,4), iVar3 == 0)) {
        EC_POINT_free(lVar4);
        _Dst_00 = (undefined1 *)0x0;
        goto LAB_14f751f37;
      }
      *(undefined4 *)(lVar4 + 0x28) = 1;
      iVar3 = EC_POINT_cmp(param_1,local_190,lVar4,param_7);
      puVar9 = _Dst_00;
      if (iVar3 == 0) {
        local_198 = *(undefined1 **)(lVar6 + 0x10);
        puVar9 = local_198;
      }
      EC_POINT_free(lVar4);
      if (puVar9 == (undefined1 *)0x0) goto LAB_14f7519a5;
LAB_14f7519c0:
      iVar3 = BN_num_bits(param_3);
      if ((0x100 < iVar3) || (iVar3 = BN_is_negative(param_3), iVar3 != 0)) {
        lVar5 = BN_CTX_get(param_7);
        if (lVar5 == 0) goto LAB_14f751f37;
        iVar3 = BN_nnmod(lVar5,param_3,*(undefined8 *)(param_1 + 0x10),param_7);
        if (iVar3 == 0) {
          local_1c8 = CONCAT44(local_1c8._4_4_,0x406);
          ERR_put_error(0x10,0xf1,3,"crypto\\ec\\ecp_nistz256.c");
          _Dst_00 = (undefined1 *)0x0;
          goto LAB_14f751f37;
        }
      }
      uVar12 = 0;
      iVar3 = bn_get_top(lVar5);
      if (0 < iVar3 << 3) {
        puVar16 = (undefined1 *)((longlong)&local_80 + 1);
        puVar9 = _Dst_00;
        do {
          lVar6 = bn_get_words(lVar5);
          iVar11 = (int)puVar9;
          iVar3 = iVar11;
          if (iVar11 < 0) {
            iVar3 = iVar11 + 7;
          }
          uVar12 = iVar11 + 8;
          puVar9 = (undefined1 *)(ulonglong)uVar12;
          uVar1 = *(undefined8 *)(lVar6 + (longlong)(iVar3 >> 3) * 8);
          puVar16[-1] = (char)uVar1;
          *puVar16 = (char)((ulonglong)uVar1 >> 8);
          puVar16[1] = (char)((ulonglong)uVar1 >> 0x10);
          puVar16[2] = (char)((ulonglong)uVar1 >> 0x18);
          puVar16[3] = (char)((ulonglong)uVar1 >> 0x20);
          puVar16[4] = (char)((ulonglong)uVar1 >> 0x28);
          puVar16[6] = (char)((ulonglong)uVar1 >> 0x38);
          puVar16[5] = (char)((ulonglong)uVar1 >> 0x30);
          puVar16 = puVar16 + 8;
          iVar3 = bn_get_top(lVar5);
        } while ((int)uVar12 < iVar3 * 8);
      }
      puVar16 = local_198;
      for (uVar7 = (ulonglong)(int)uVar12; (longlong)uVar7 < 0x21; uVar7 = uVar7 + 1) {
        if (0x20 < uVar7) {
                    /* WARNING: Subroutine does not return */
          __report_rangecheckfailure();
        }
        *(undefined1 *)((longlong)&local_80 + uVar7) = 0;
      }
      uVar8 = (byte)local_80 & 0x7f;
      uVar13 = (uVar8 >> 6) - 1;
      uVar14 = ~uVar13;
      uVar12 = uVar8 * -2 + 0xff & uVar14;
      uVar12 = (uVar14 & 1) + (((uVar12 | uVar13 & uVar8 * 2) >> 1) + (uVar12 & 1)) * 2;
      ecp_nistz256_gather_w7(&local_140,local_198,uVar12 >> 1);
      ecp_nistz256_neg(&local_100,&local_120);
      uVar7 = -(ulonglong)(uVar12 & 1);
      uVar15 = ~uVar7;
      local_110 = uVar15 & local_110 ^ uVar7 & local_f0;
      uStack_108 = uVar15 & uStack_108 ^ uVar7 & uStack_e8;
      local_120 = uVar15 & local_120 ^ uVar7 & local_100;
      uStack_118 = uVar15 & uStack_118 ^ uVar7 & uStack_f8;
      lVar6 = 0x24;
      iVar3 = 7;
      uVar7 = local_140 | local_138 | local_130 | local_128 | local_120 | uStack_118 | local_110 |
              uStack_108;
      uStack_e8 = 0xffffffffffffffff - ((longlong)~(-uVar7 | uVar7) >> 0x3f);
      local_100 = uStack_e8 & _DAT_1534c1660;
      uStack_f8 = uStack_e8 & _UNK_1534c1668;
      local_f0 = uStack_e8 & _DAT_1534c1670;
      uStack_e8 = uStack_e8 & _UNK_1534c1678;
      do {
        puVar16 = puVar16 + 0x1000;
        uVar8 = iVar3 - 1;
        iVar3 = iVar3 + 7;
        uVar12 = uVar8 >> 3;
        uVar12 = (ushort)(CONCAT11(*(undefined1 *)((longlong)&local_80 + (ulonglong)(uVar12 + 1)),
                                   *(undefined1 *)((longlong)&local_80 + (ulonglong)uVar12)) >>
                         ((byte)uVar8 & 7)) & 0xff;
        uVar8 = (uVar12 >> 7) - 1;
        uVar13 = ~uVar8;
        uVar12 = 0xff - uVar12 & uVar13 | uVar8 & uVar12;
        uVar12 = (uVar13 & 1) + ((uVar12 >> 1) + (uVar12 & 1)) * 2;
        ecp_nistz256_gather_w7(local_e0,puVar16,uVar12 >> 1);
        ecp_nistz256_neg(&local_a0,&local_c0);
        uVar7 = -(ulonglong)(uVar12 & 1);
        uVar15 = ~uVar7;
        local_c0 = local_a0 & uVar7 ^ local_c0 & uVar15;
        uStack_b8 = uStack_98 & uVar7 ^ uStack_b8 & uVar15;
        local_b0 = local_90 & uVar7 ^ local_b0 & uVar15;
        uStack_a8 = uStack_88 & uVar7 ^ uStack_a8 & uVar15;
        ecp_nistz256_point_add_affine(&local_140,&local_140,local_e0);
        lVar6 = lVar6 + -1;
        param_7 = local_160;
      } while (lVar6 != 0);
    }
    if (bVar2) {
      _Size = local_188 * 8;
      _Dst = (void *)CRYPTO_malloc(_Size + 8,"crypto\\ec\\ecp_nistz256.c",0x460);
      local_168 = _Dst;
      if (_Dst == (void *)0x0) {
        local_1c8 = CONCAT44(local_1c8._4_4_,0x462);
      }
      else {
        _Dst_00 = (undefined1 *)CRYPTO_malloc(_Size + 8,"crypto\\ec\\ecp_nistz256.c",0x466);
        if (_Dst_00 != (undefined1 *)0x0) {
          memcpy(_Dst,local_178,_Size);
          *(longlong *)(_Size + (longlong)_Dst) = lVar5;
          memcpy(_Dst_00,local_180,_Size);
          *(longlong *)(_Dst_00 + _Size) = local_190;
          uVar7 = local_158;
          puVar9 = _Dst_00;
          param_2 = local_170;
          puVar16 = _Dst_00;
          iVar3 = local_1a0;
          goto LAB_14f751e8e;
        }
        local_1c8 = CONCAT44(local_1c8._4_4_,0x468);
      }
      ERR_put_error(0x10,0xf1,0x41,"crypto\\ec\\ecp_nistz256.c");
      puVar16 = _Dst_00;
      _Dst_00 = (undefined1 *)0x0;
      goto LAB_14f751f37;
    }
    iVar3 = 0;
    uVar7 = local_188;
    puVar9 = local_180;
    param_2 = local_170;
    _Dst = local_178;
    puVar16 = _Dst_00;
  }
LAB_14f751e8e:
  _Dst_00 = (undefined1 *)0x0;
  if (uVar7 != 0) {
    puVar10 = local_e0;
    if (iVar3 != 0) {
      puVar10 = &local_140;
    }
    local_1c8 = uVar7;
    local_1c0 = param_7;
    iVar3 = FUN_14f752d60(param_1,puVar10,_Dst,puVar9);
    if (iVar3 == 0) goto LAB_14f751f37;
    if (local_1a0 == 0) {
      ecp_nistz256_point_add(&local_140,&local_140,puVar10);
    }
  }
  iVar3 = bn_set_words(*(undefined8 *)(param_2 + 0x10),&local_140,4);
  if (((iVar3 != 0) &&
      (iVar3 = bn_set_words(*(undefined8 *)(param_2 + 0x18),&local_120,4), iVar3 != 0)) &&
     (iVar3 = bn_set_words(*(undefined8 *)(param_2 + 0x20),&local_100,4), iVar3 != 0)) {
    uVar12 = FUN_14f7536c0(*(undefined8 *)(param_2 + 0x20));
    *(uint *)(param_2 + 0x28) = uVar12 & 1;
    _Dst_00 = &DAT_00000001;
  }
LAB_14f751f37:
  BN_CTX_end(param_7);
  CRYPTO_free(puVar16,"crypto\\ec\\ecp_nistz256.c",0x48e);
  CRYPTO_free(local_168,"crypto\\ec\\ecp_nistz256.c",0x48f);
  return _Dst_00;
}

// FUN_14f751fd0 @ 14f751fd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f751fd0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f751fde;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  iVar1 = EC_POINT_is_at_infinity();
  if (iVar1 == 0) {
    iVar1 = bn_copy_words(local_e8,*(undefined8 *)(param_2 + 0x10),4);
    if (((iVar1 != 0) &&
        (iVar1 = bn_copy_words(local_88,*(undefined8 *)(param_2 + 0x18),4), iVar1 != 0)) &&
       (iVar1 = bn_copy_words(local_108,*(undefined8 *)(param_2 + 0x20),4), iVar1 != 0)) {
      FUN_14f7528c0(local_148,local_108);
      ecp_nistz256_sqr_mont(local_128,local_148);
      ecp_nistz256_mul_mont(local_c8,local_128,local_e8);
      if (param_3 != 0) {
        ecp_nistz256_from_mont(local_a8,local_c8);
        iVar1 = bn_set_words(param_3,local_a8,4);
        if (iVar1 == 0) {
          return 0;
        }
      }
      if (param_4 != 0) {
        ecp_nistz256_mul_mont(local_148,local_148,local_128);
        ecp_nistz256_mul_mont(local_68,local_148,local_88);
        ecp_nistz256_from_mont(local_48,local_68);
        iVar1 = bn_set_words(param_4,local_48,4);
        if (iVar1 == 0) {
          return 0;
        }
        return 1;
      }
      return 1;
    }
    local_158 = 0x4a6;
    uVar2 = 0x92;
  }
  else {
    local_158 = 0x49f;
    uVar2 = 0x6a;
  }
  ERR_put_error(0x10,0xf0,uVar2,"crypto\\ec\\ecp_nistz256.c");
  return 0;
}

// FUN_14f7521a0 @ 14f7521a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7521a0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = EC_GROUP_get0_generator();
  if ((lVar2 != 0) && (iVar1 = FUN_14f752770(lVar2), iVar1 != 0)) {
    return 1;
  }
  if ((*(int *)(param_1 + 0x98) == 4) && (*(longlong *)(param_1 + 0xa0) != 0)) {
    return 1;
  }
  return 0;
}

// FUN_14f752200 @ 14f752200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f752200(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  undefined1 local_268 [32];
  undefined1 local_248 [32];
  undefined1 local_228 [32];
  undefined1 local_208 [32];
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [32];
  undefined1 local_188 [32];
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [64];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_298;
  lVar2 = bn_wexpand(param_2,4);
  if (lVar2 == 0) {
    local_278 = 0x52c;
    ERR_put_error(0x10,0x113,3,"crypto\\ec\\ecp_nistz256.c");
    return 0;
  }
  iVar1 = BN_num_bits(param_3);
  if (((iVar1 < 0x101) && (iVar1 = BN_is_negative(param_3), lVar2 = param_3, iVar1 == 0)) ||
     ((lVar2 = BN_CTX_get(param_4), lVar2 != 0 &&
      (iVar1 = BN_nnmod(lVar2,param_3,*(undefined8 *)(param_1 + 0x10),param_4), iVar1 != 0)))) {
    iVar1 = bn_copy_words(local_68,lVar2,4);
    if (iVar1 != 0) {
      ecp_nistz256_ord_mul_mont(local_248,local_68,&DAT_1534c1430);
      ecp_nistz256_ord_sqr_mont(local_228,local_248,1);
      ecp_nistz256_ord_mul_mont(local_208,local_248,local_228);
      ecp_nistz256_ord_mul_mont(local_1e8,local_208,local_228);
      ecp_nistz256_ord_mul_mont(local_1c8,local_1e8,local_228);
      ecp_nistz256_ord_sqr_mont(local_1a8,local_1e8,1);
      ecp_nistz256_ord_mul_mont(local_188,local_1a8,local_1e8);
      ecp_nistz256_ord_sqr_mont(local_168,local_1a8,1);
      ecp_nistz256_ord_mul_mont(local_168,local_168,local_248);
      ecp_nistz256_ord_sqr_mont(local_148,local_168,1);
      ecp_nistz256_ord_mul_mont(local_128,local_148,local_1e8);
      ecp_nistz256_ord_mul_mont(local_108,local_148,local_168);
      ecp_nistz256_ord_sqr_mont(local_e8,local_108,2);
      ecp_nistz256_ord_mul_mont(local_e8,local_e8,local_208);
      ecp_nistz256_ord_sqr_mont(local_c8,local_e8,8);
      ecp_nistz256_ord_mul_mont(local_c8,local_c8,local_e8);
      ecp_nistz256_ord_sqr_mont(local_a8,local_c8,0x10);
      ecp_nistz256_ord_mul_mont(local_a8,local_a8,local_c8);
      ecp_nistz256_ord_sqr_mont(local_268,local_a8,0x40);
      ecp_nistz256_ord_mul_mont(local_268,local_268,local_a8);
      pbVar3 = &DAT_1534c1471;
      do {
        ecp_nistz256_ord_sqr_mont(local_268,local_268,pbVar3[-1]);
        ecp_nistz256_ord_mul_mont(local_268,local_268,local_248 + (ulonglong)*pbVar3 * 0x20);
        pbVar3 = pbVar3 + 2;
      } while ((longlong)pbVar3 < 0x1534c14a7);
      ecp_nistz256_ord_mul_mont(local_268,local_268,&DAT_1534c1450);
      iVar1 = bn_set_words(param_2,local_268,4);
      if (iVar1 == 0) {
        return 0;
      }
      return 1;
    }
    local_278 = 0x53c;
    uVar4 = 0x92;
  }
  else {
    local_278 = 0x535;
    uVar4 = 3;
  }
  ERR_put_error(0x10,0x113,uVar4,"crypto\\ec\\ecp_nistz256.c");
  return 0;
}

// EC_nistz256_pre_comp_dup @ 14f7525d0

longlong EC_nistz256_pre_comp_dup(longlong param_1)

{
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    UNLOCK();
  }
  return param_1;
}

// EC_nistz256_pre_comp_free @ 14f7525f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_nistz256_pre_comp_free(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x20);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      CRYPTO_free(*(undefined8 *)(param_1 + 0x18),"crypto\\ec\\ecp_nistz256.c",0x4ef);
      CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0x28));
      CRYPTO_free(param_1,"crypto\\ec\\ecp_nistz256.c",0x4f1);
    }
  }
  return;
}

// FUN_14f752750 @ 14f752750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f752750(undefined8 param_1,undefined8 param_2)

{
  bn_copy_words(param_1,param_2,4);
  return;
}

// FUN_14f752770 @ 14f752770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f752770(longlong param_1)

{
  int iVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  iVar1 = bn_get_top(*(undefined8 *)(param_1 + 0x10));
  if (iVar1 == 4) {
    iVar1 = bn_get_top(*(undefined8 *)(param_1 + 0x18));
    if (iVar1 == 4) {
      puVar2 = (ulonglong *)bn_get_words(*(undefined8 *)(param_1 + 0x10));
      uVar4 = puVar2[2] ^ 0x79fb732b77622510 | puVar2[3] ^ 0x18905f76a53755c6 |
              puVar2[1] ^ 0x75ba95fc5fedb601 | *puVar2 ^ 0x79e730d418a9143c;
      if (0x7fffffffffffffff < ~(-uVar4 | uVar4)) {
        puVar2 = (ulonglong *)bn_get_words(*(undefined8 *)(param_1 + 0x18));
        uVar4 = puVar2[2] ^ 0xd2e88688dd21f325 | puVar2[1] ^ 0x8b4ab8e4ba19e45c |
                puVar2[3] ^ 0x8571ff1825885d85 | *puVar2 ^ 0xddf25357ce95560a;
        if (0x7fffffffffffffff < ~(-uVar4 | uVar4)) {
          lVar3 = FUN_14f7536c0(*(undefined8 *)(param_1 + 0x20));
          if (lVar3 != 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

// FUN_14f7528c0 @ 14f7528c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f7528c0(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f7528d7;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  ecp_nistz256_sqr_mont(&local_e8);
  ecp_nistz256_mul_mont(local_48,&local_e8,param_2);
  ecp_nistz256_sqr_mont(&local_e8,local_48);
  ecp_nistz256_sqr_mont(&local_e8,&local_e8);
  ecp_nistz256_mul_mont(local_68,&local_e8,local_48);
  ecp_nistz256_sqr_mont(&local_e8,local_68);
  ecp_nistz256_sqr_mont(&local_e8,&local_e8);
  ecp_nistz256_sqr_mont(&local_e8,&local_e8);
  ecp_nistz256_sqr_mont(&local_e8,&local_e8);
  ecp_nistz256_mul_mont(local_88,&local_e8,local_68);
  ecp_nistz256_sqr_mont(&local_e8,local_88);
  lVar1 = 7;
  do {
    ecp_nistz256_sqr_mont(&local_e8,&local_e8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  ecp_nistz256_mul_mont(local_a8,&local_e8,local_88);
  ecp_nistz256_sqr_mont(&local_e8,local_a8);
  lVar1 = 0xf;
  do {
    ecp_nistz256_sqr_mont(&local_e8,&local_e8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  ecp_nistz256_mul_mont(local_c8,&local_e8,local_a8);
  ecp_nistz256_sqr_mont(&local_e8,local_c8);
  lVar1 = 0x1f;
  do {
    ecp_nistz256_sqr_mont(&local_e8,&local_e8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  ecp_nistz256_mul_mont(&local_e8,&local_e8,param_2);
  lVar1 = 0x80;
  do {
    ecp_nistz256_sqr_mont(&local_e8,&local_e8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  ecp_nistz256_mul_mont(&local_e8,&local_e8,local_c8);
  lVar1 = 0x20;
  do {
    ecp_nistz256_sqr_mont(&local_e8,&local_e8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  ecp_nistz256_mul_mont(&local_e8,&local_e8,local_c8);
  lVar1 = 0x10;
  do {
    ecp_nistz256_sqr_mont(&local_e8,&local_e8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  ecp_nistz256_mul_mont(&local_e8,&local_e8,local_a8);
  lVar1 = 8;
  do {
    ecp_nistz256_sqr_mont(&local_e8,&local_e8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  ecp_nistz256_mul_mont(&local_e8,&local_e8,local_88);
  ecp_nistz256_sqr_mont(&local_e8,&local_e8);
  ecp_nistz256_sqr_mont(&local_e8,&local_e8);
  ecp_nistz256_sqr_mont(&local_e8,&local_e8);
  ecp_nistz256_sqr_mont(&local_e8,&local_e8);
  ecp_nistz256_mul_mont(&local_e8,&local_e8,local_68);
  ecp_nistz256_sqr_mont(&local_e8,&local_e8);
  ecp_nistz256_sqr_mont(&local_e8,&local_e8);
  ecp_nistz256_mul_mont(&local_e8,&local_e8,local_48);
  ecp_nistz256_sqr_mont(&local_e8,&local_e8);
  ecp_nistz256_sqr_mont(&local_e8,&local_e8);
  ecp_nistz256_mul_mont(&local_e8,&local_e8,param_2);
  *param_1 = local_e8;
  param_1[1] = uStack_e0;
  param_1[2] = local_d8;
  param_1[3] = uStack_d0;
  return;
}

// FUN_14f752bf0 @ 14f752bf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_14f752bf0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f752bfc;
  if (param_1 == 0) {
    return (longlong *)0x0;
  }
  plVar1 = (longlong *)CRYPTO_zalloc(0x30,"crypto\\ec\\ecp_nistz256.c",0x4c6);
  if (plVar1 == (longlong *)0x0) {
    ERR_put_error(0x10,0xf4,0x41,"crypto\\ec\\ecp_nistz256.c",0x4c9,uVar3);
    return (longlong *)0x0;
  }
  *plVar1 = param_1;
  plVar1[1] = 6;
  *(undefined4 *)(plVar1 + 4) = 1;
  lVar2 = CRYPTO_THREAD_lock_new();
  plVar1[5] = lVar2;
  if (lVar2 == 0) {
    ERR_put_error(0x10,0xf4,0x41,"crypto\\ec\\ecp_nistz256.c",0x4d3,uVar3);
    CRYPTO_free(plVar1,"crypto\\ec\\ecp_nistz256.c",0x4d4);
    return (longlong *)0x0;
  }
  return plVar1;
}

// FUN_14f752ce0 @ 14f752ce0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f752ce0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = bn_set_words(*(undefined8 *)(param_1 + 0x10),param_3,4);
  if (iVar1 != 0) {
    iVar1 = bn_set_words(*(undefined8 *)(param_1 + 0x18),param_3 + 0x20,4);
    if (iVar1 != 0) {
      iVar1 = bn_set_words(*(undefined8 *)(param_1 + 0x20),&DAT_1534c1660,4);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x28) = 1;
      }
    }
  }
  return;
}

// FUN_14f752d60 @ 14f752d60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte * FUN_14f752d60(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4,
                    ulonglong param_5,undefined8 param_6)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  byte *pbVar21;
  byte *pbVar22;
  longlong lVar23;
  undefined4 uVar24;
  byte *local_78;
  longlong local_70;
  ulonglong local_48;
  
  pbVar13 = (byte *)0x0;
  pbVar5 = pbVar13;
  pbVar6 = pbVar13;
  pbVar7 = pbVar13;
  if (param_5 * 0x10 + 6 < 0x1555556) {
    pbVar5 = (byte *)CRYPTO_malloc(param_5 * 0x600 + 0x220,"crypto\\ec\\ecp_nistz256.c",0x276);
    pbVar6 = (byte *)0x0;
    pbVar7 = (byte *)0x0;
    if (((pbVar5 != (byte *)0x0) &&
        (pbVar6 = (byte *)CRYPTO_malloc(param_5 * 0x21,"crypto\\ec\\ecp_nistz256.c",0x278),
        pbVar7 = pbVar13, pbVar6 != (byte *)0x0)) &&
       (pbVar7 = (byte *)CRYPTO_malloc(param_5 * 8,"crypto\\ec\\ecp_nistz256.c",0x279),
       pbVar7 != (byte *)0x0)) {
      local_48 = 0;
      pbVar21 = pbVar5 + (0x40 - (ulonglong)((uint)pbVar5 & 0x3f));
      pbVar1 = pbVar21 + param_5 * 0x600;
      if (param_5 != 0) {
        param_3 = param_3 - (longlong)pbVar7;
        param_4 = param_4 - (longlong)pbVar7;
        local_70 = 0;
        pbVar22 = pbVar7;
        local_78 = pbVar21;
        do {
          pbVar13 = (byte *)0x0;
          iVar4 = BN_num_bits(*(undefined8 *)(pbVar22 + param_3));
          if ((0x100 < iVar4) ||
             (iVar4 = BN_is_negative(*(undefined8 *)(pbVar22 + param_3)), iVar4 != 0)) {
            lVar8 = BN_CTX_get(param_6);
            if (lVar8 != 0) {
              iVar4 = BN_nnmod(lVar8,*(undefined8 *)(pbVar22 + param_3),
                               *(undefined8 *)(param_1 + 0x10),param_6);
              if (iVar4 != 0) goto LAB_14f752ef8;
              uVar24 = 0x28b;
              uVar20 = 3;
LAB_14f7535b6:
              ERR_put_error(0x10,0xf2,uVar20,"crypto\\ec\\ecp_nistz256.c",uVar24);
            }
            goto LAB_14f7535c5;
          }
          lVar8 = *(longlong *)(pbVar22 + param_3);
LAB_14f752ef8:
          *(longlong *)pbVar22 = lVar8;
          iVar4 = bn_get_top(lVar8);
          pbVar12 = pbVar13;
          if (iVar4 << 3 < 1) {
LAB_14f752fa2:
            lVar8 = 0x21 - (longlong)pbVar12;
            pbVar12 = pbVar12 + local_70 + (longlong)pbVar6;
            for (; lVar8 != 0; lVar8 = lVar8 + -1) {
              *pbVar12 = 0;
              pbVar12 = pbVar12 + 1;
            }
          }
          else {
            pbVar18 = pbVar6 + local_70;
            pbVar15 = pbVar13;
            do {
              lVar8 = bn_get_words(*(undefined8 *)pbVar22);
              iVar14 = (int)pbVar15;
              iVar4 = iVar14;
              if (iVar14 < 0) {
                iVar4 = iVar14 + 7;
              }
              pbVar15 = (byte *)(ulonglong)(iVar14 + 8U);
              uVar2 = *(undefined8 *)(lVar8 + (longlong)(iVar4 >> 3) * 8);
              pbVar18[(longlong)pbVar12] = (byte)uVar2;
              (pbVar18 + 1)[(longlong)pbVar12] = (byte)((ulonglong)uVar2 >> 8);
              (pbVar18 + 2)[(longlong)pbVar12] = (byte)((ulonglong)uVar2 >> 0x10);
              (pbVar18 + 3)[(longlong)pbVar12] = (byte)((ulonglong)uVar2 >> 0x18);
              (pbVar18 + 4)[(longlong)pbVar12] = (byte)((ulonglong)uVar2 >> 0x20);
              (pbVar18 + 5)[(longlong)pbVar12] = (byte)((ulonglong)uVar2 >> 0x28);
              (pbVar18 + 7)[(longlong)pbVar12] = (byte)((ulonglong)uVar2 >> 0x38);
              (pbVar18 + 6)[(longlong)pbVar12] = (byte)((ulonglong)uVar2 >> 0x30);
              pbVar12 = pbVar12 + 8;
              iVar4 = bn_get_top(*(undefined8 *)pbVar22);
            } while ((int)(iVar14 + 8U) < iVar4 * 8);
            if ((longlong)pbVar12 < 0x21) goto LAB_14f752fa2;
          }
          iVar4 = bn_copy_words(pbVar1,*(undefined8 *)(*(longlong *)(pbVar22 + param_4) + 0x10),4);
          if (((iVar4 == 0) ||
              (iVar4 = bn_copy_words(pbVar1 + 0x20,
                                     *(undefined8 *)(*(longlong *)(pbVar22 + param_4) + 0x18),4),
              iVar4 == 0)) ||
             (iVar4 = bn_copy_words(pbVar1 + 0x40,
                                    *(undefined8 *)(*(longlong *)(pbVar22 + param_4) + 0x20),4),
             iVar4 == 0)) {
            uVar24 = 0x2a8;
            uVar20 = 0x92;
            goto LAB_14f7535b6;
          }
          ecp_nistz256_scatter_w5(local_78,pbVar1,1);
          ecp_nistz256_point_double(pbVar1 + 0x60,pbVar1);
          ecp_nistz256_scatter_w5(local_78,pbVar1 + 0x60,2);
          pbVar13 = pbVar1 + 0xc0;
          ecp_nistz256_point_add(pbVar13,pbVar1 + 0x60,pbVar1);
          ecp_nistz256_scatter_w5(local_78,pbVar13,3);
          ecp_nistz256_point_double(pbVar1 + 0x60,pbVar1 + 0x60);
          ecp_nistz256_scatter_w5(local_78,pbVar1 + 0x60,4);
          ecp_nistz256_point_double(pbVar13,pbVar13);
          ecp_nistz256_scatter_w5(local_78,pbVar13,6);
          pbVar12 = pbVar1 + 0x120;
          ecp_nistz256_point_add(pbVar12,pbVar1 + 0x60,pbVar1);
          ecp_nistz256_scatter_w5(local_78,pbVar12,5);
          pbVar15 = pbVar1 + 0x180;
          ecp_nistz256_point_add(pbVar15,pbVar13,pbVar1);
          ecp_nistz256_scatter_w5(local_78,pbVar15,7);
          ecp_nistz256_point_double(pbVar1 + 0x60,pbVar1 + 0x60);
          ecp_nistz256_scatter_w5(local_78,pbVar1 + 0x60,8);
          ecp_nistz256_point_double(pbVar13,pbVar13);
          ecp_nistz256_scatter_w5(local_78,pbVar13,0xc);
          ecp_nistz256_point_double(pbVar12,pbVar12);
          ecp_nistz256_scatter_w5(local_78,pbVar12,10);
          ecp_nistz256_point_double(pbVar15,pbVar15);
          ecp_nistz256_scatter_w5(local_78,pbVar15,0xe);
          ecp_nistz256_point_add(pbVar13,pbVar13,pbVar1);
          ecp_nistz256_scatter_w5(local_78,pbVar13,0xd);
          ecp_nistz256_point_add(pbVar12,pbVar12,pbVar1);
          ecp_nistz256_scatter_w5(local_78,pbVar12,0xb);
          ecp_nistz256_point_add(pbVar15,pbVar15,pbVar1);
          ecp_nistz256_scatter_w5(local_78,pbVar15,0xf);
          ecp_nistz256_point_add(pbVar13,pbVar1 + 0x60,pbVar1);
          ecp_nistz256_scatter_w5(local_78,pbVar13,9);
          ecp_nistz256_point_double(pbVar1 + 0x60,pbVar1 + 0x60);
          ecp_nistz256_scatter_w5(local_78,pbVar1 + 0x60,0x10);
          local_78 = local_78 + 0x600;
          local_70 = local_70 + 0x21;
          local_48 = local_48 + 1;
          pbVar22 = pbVar22 + 8;
        } while (local_48 < param_5);
      }
      local_70._0_4_ = 0xff;
      ecp_nistz256_gather_w5(pbVar1,pbVar21,(pbVar6[0x1f] >> 6 & 1) - ((char)pbVar6[0x1f] >> 7));
      uVar2 = *(undefined8 *)(pbVar1 + 8);
      *param_2 = *(undefined8 *)pbVar1;
      param_2[1] = uVar2;
      uVar2 = *(undefined8 *)(pbVar1 + 0x18);
      param_2[2] = *(undefined8 *)(pbVar1 + 0x10);
      param_2[3] = uVar2;
      uVar2 = *(undefined8 *)(pbVar1 + 0x28);
      param_2[4] = *(undefined8 *)(pbVar1 + 0x20);
      param_2[5] = uVar2;
      uVar2 = *(undefined8 *)(pbVar1 + 0x38);
      param_2[6] = *(undefined8 *)(pbVar1 + 0x30);
      param_2[7] = uVar2;
      uVar20 = *(undefined4 *)(pbVar1 + 0x44);
      uVar24 = *(undefined4 *)(pbVar1 + 0x48);
      uVar3 = *(undefined4 *)(pbVar1 + 0x4c);
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(pbVar1 + 0x40);
      *(undefined4 *)((longlong)param_2 + 0x44) = uVar20;
      *(undefined4 *)(param_2 + 9) = uVar24;
      *(undefined4 *)((longlong)param_2 + 0x4c) = uVar3;
      uVar2 = *(undefined8 *)(pbVar1 + 0x58);
      param_2[10] = *(undefined8 *)(pbVar1 + 0x50);
      param_2[0xb] = uVar2;
      do {
        uVar11 = (ulonglong)((uint)local_70 == 0xff);
        if (uVar11 < param_5) {
          uVar9 = (uint)local_70 - 1 >> 3;
          pbVar13 = pbVar21 + uVar11 * 0x600;
          lVar8 = uVar11 * 0x21;
          lVar23 = param_5 - uVar11;
          do {
            uVar10 = (ushort)(CONCAT11(pbVar6[lVar8 + (ulonglong)(uVar9 + 1)],
                                       pbVar6[lVar8 + (ulonglong)uVar9]) >>
                             ((byte)((uint)local_70 - 1) & 7)) & 0x3f;
            uVar16 = (uVar10 >> 5) - 1;
            uVar17 = ~uVar16;
            uVar10 = 0x3f - uVar10 & uVar17 | uVar16 & uVar10;
            uVar10 = (uVar17 & 1) + ((uVar10 >> 1) + (uVar10 & 1)) * 2;
            ecp_nistz256_gather_w5(pbVar1,pbVar13,uVar10 >> 1);
            ecp_nistz256_neg(pbVar1 + 0x80,pbVar1 + 0x20);
            uVar19 = -(ulonglong)(uVar10 & 1);
            uVar11 = ~uVar19;
            *(ulonglong *)(pbVar1 + 0x20) =
                 uVar11 & *(ulonglong *)(pbVar1 + 0x20) ^ uVar19 & *(ulonglong *)(pbVar1 + 0x80);
            *(ulonglong *)(pbVar1 + 0x28) =
                 uVar19 & *(ulonglong *)(pbVar1 + 0x88) ^ *(ulonglong *)(pbVar1 + 0x28) & uVar11;
            *(ulonglong *)(pbVar1 + 0x30) =
                 *(ulonglong *)(pbVar1 + 0x30) & uVar11 ^ *(ulonglong *)(pbVar1 + 0x90) & uVar19;
            *(ulonglong *)(pbVar1 + 0x38) =
                 uVar11 & *(ulonglong *)(pbVar1 + 0x38) ^ uVar19 & *(ulonglong *)(pbVar1 + 0x98);
            ecp_nistz256_point_add(param_2,param_2,pbVar1);
            lVar8 = lVar8 + 0x21;
            pbVar13 = pbVar13 + 0x600;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
        }
        local_70._0_4_ = (uint)local_70 - 5;
        ecp_nistz256_point_double(param_2,param_2);
        ecp_nistz256_point_double(param_2,param_2);
        ecp_nistz256_point_double(param_2,param_2);
        ecp_nistz256_point_double(param_2,param_2);
        ecp_nistz256_point_double(param_2,param_2);
        pbVar13 = pbVar6;
      } while (4 < (uint)local_70);
      for (; param_5 != 0; param_5 = param_5 - 1) {
        uVar10 = *pbVar13 & 0x1f;
        uVar16 = (uVar10 >> 4) - 1;
        uVar17 = ~uVar16;
        uVar9 = uVar10 * -2 + 0x3f & uVar17;
        uVar9 = (uVar17 & 1) + (((uVar9 | uVar16 & uVar10 * 2) >> 1) + (uVar9 & 1)) * 2;
        ecp_nistz256_gather_w5(pbVar1,pbVar21,uVar9 >> 1);
        ecp_nistz256_neg(pbVar1 + 0x80,pbVar1 + 0x20);
        uVar19 = -(ulonglong)(uVar9 & 1);
        uVar11 = ~uVar19;
        *(ulonglong *)(pbVar1 + 0x20) =
             uVar11 & *(ulonglong *)(pbVar1 + 0x20) ^ uVar19 & *(ulonglong *)(pbVar1 + 0x80);
        *(ulonglong *)(pbVar1 + 0x28) =
             uVar19 & *(ulonglong *)(pbVar1 + 0x88) ^ *(ulonglong *)(pbVar1 + 0x28) & uVar11;
        *(ulonglong *)(pbVar1 + 0x30) =
             *(ulonglong *)(pbVar1 + 0x30) & uVar11 ^ *(ulonglong *)(pbVar1 + 0x90) & uVar19;
        *(ulonglong *)(pbVar1 + 0x38) =
             uVar11 & *(ulonglong *)(pbVar1 + 0x38) ^ uVar19 & *(ulonglong *)(pbVar1 + 0x98);
        ecp_nistz256_point_add(param_2,param_2,pbVar1);
        pbVar21 = pbVar21 + 0x600;
        pbVar13 = pbVar13 + 0x21;
      }
      pbVar13 = &DAT_00000001;
      goto LAB_14f7535c5;
    }
  }
  ERR_put_error(0x10,0xf2,0x41,"crypto\\ec\\ecp_nistz256.c",0x27a);
LAB_14f7535c5:
  CRYPTO_free(pbVar5,"crypto\\ec\\ecp_nistz256.c",0x30a);
  CRYPTO_free(pbVar6,"crypto\\ec\\ecp_nistz256.c",0x30b);
  CRYPTO_free(pbVar7,"crypto\\ec\\ecp_nistz256.c",0x30c);
  return pbVar13;
}

// FUN_14f7536c0 @ 14f7536c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f7536c0(undefined8 param_1)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  
  puVar2 = (ulonglong *)bn_get_words();
  iVar1 = bn_get_top(param_1);
  if (iVar1 == 4) {
    uVar3 = puVar2[3] ^ 0xfffffffe | puVar2[1] ^ 0xffffffff00000000 | ~puVar2[2] | *puVar2 ^ 1;
    return ~(-uVar3 | uVar3) >> 0x3f;
  }
  return 0;
}

