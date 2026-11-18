// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// BN_mod_exp2_mont @ 14f7bb740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong BN_mod_exp2_mont(ulonglong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                          longlong param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  undefined8 local_2a8;
  uint local_2a0;
  longlong local_298;
  ulonglong local_290;
  int local_288;
  ulonglong local_280;
  undefined8 local_278;
  longlong local_270;
  undefined8 local_268;
  longlong local_260 [32];
  longlong alStack_160 [33];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  local_260[0] = param_5;
  local_2a8 = param_7;
  local_270 = param_8;
  local_298 = 0;
  local_280 = param_1;
  local_268 = param_3;
  iVar1 = BN_is_odd(param_6);
  if (iVar1 == 0) {
    local_2b8 = CONCAT44(local_2b8._4_4_,0x24);
    ERR_put_error(3,0x76,0x66,"crypto\\bn\\bn_exp2.c");
    return 0;
  }
  iVar1 = BN_num_bits(param_3);
  iVar2 = BN_num_bits(param_5);
  if ((iVar1 == 0) && (iVar2 == 0)) {
    uVar5 = BN_set_word(param_1,1);
    return uVar5;
  }
  local_288 = iVar2;
  if (iVar2 < iVar1) {
    local_288 = iVar1;
  }
  BN_CTX_start(param_7);
  local_290 = BN_CTX_get(param_7);
  local_278 = BN_CTX_get(param_7);
  lVar6 = BN_CTX_get(param_7);
  local_260[1] = lVar6;
  lVar7 = BN_CTX_get(param_7);
  alStack_160[1] = lVar7;
  if (lVar7 == 0) goto LAB_14f7bbd9d;
  if (local_270 == 0) {
    local_298 = BN_MONT_CTX_new();
    if (local_298 == 0) {
      uVar5 = 0;
    }
    else {
      iVar3 = BN_MONT_CTX_set(local_298,param_6,param_7);
      if (iVar3 != 0) goto LAB_14f7bb8b1;
      uVar5 = 0;
    }
  }
  else {
    local_298 = local_270;
LAB_14f7bb8b1:
    local_2a0 = 1;
    if (iVar1 < 0x2a0) {
      if (iVar1 < 0xf0) {
        if (iVar1 < 0x50) {
          if (0x17 < iVar1) {
            local_2a0 = 3;
          }
        }
        else {
          local_2a0 = 4;
        }
      }
      else {
        local_2a0 = 5;
      }
    }
    else {
      local_2a0 = 6;
    }
    uVar13 = local_2a0;
    uVar16 = 6;
    if (iVar2 < 0x2a0) {
      if (iVar2 < 0xf0) {
        if (iVar2 < 0x50) {
          uVar16 = 1;
          if (0x17 < iVar2) {
            uVar16 = 3;
          }
        }
        else {
          uVar16 = 4;
        }
      }
      else {
        uVar16 = 5;
      }
    }
    if ((*(int *)(param_2 + 0x10) != 0) ||
       (iVar1 = BN_ucmp(param_2,param_6), uVar9 = local_2a8, -1 < iVar1)) {
      uVar9 = local_2a8;
      local_2b8 = local_2a8;
      iVar1 = BN_div(0,lVar6,param_2,param_6);
      param_2 = lVar6;
      param_7 = uVar9;
      if (iVar1 == 0) goto LAB_14f7bbd9d;
    }
    iVar1 = BN_is_zero(param_2);
    if (iVar1 == 0) {
      iVar1 = BN_to_montgomery(lVar6,param_2,local_298,uVar9);
      uVar5 = local_290;
      param_7 = local_2a8;
      if (iVar1 != 0) {
        uVar10 = local_2a8;
        if (1 < uVar13) {
          local_2b8 = uVar9;
          iVar1 = BN_mod_mul_montgomery(local_290,lVar6,lVar6,local_298);
          uVar10 = local_2a8;
          param_7 = uVar10;
          if (iVar1 == 0) goto LAB_14f7bbd9d;
          lVar6 = 1;
          lVar14 = (longlong)(1 << ((char)uVar13 - 1U & 0x1f));
          if (1 < lVar14) {
            do {
              lVar8 = BN_CTX_get(uVar10);
              local_260[lVar6 + 1] = lVar8;
              if (lVar8 == 0) goto LAB_14f7bbd9d;
              local_2b8 = uVar10;
              iVar1 = BN_mod_mul_montgomery(lVar8,local_260[lVar6],uVar5,local_298);
              if (iVar1 == 0) goto LAB_14f7bbd9d;
              lVar6 = lVar6 + 1;
            } while (lVar6 < lVar14);
          }
        }
        if (((*(int *)(param_4 + 0x10) == 0) && (iVar1 = BN_ucmp(param_4,param_6), iVar1 < 0)) ||
           (local_2b8 = uVar10, iVar1 = BN_div(0,lVar7,param_4,param_6), param_4 = lVar7,
           param_7 = local_2a8, iVar1 != 0)) {
          iVar1 = BN_is_zero(param_4);
          lVar6 = local_298;
          if (iVar1 != 0) {
            BN_set_word(local_280,0);
            uVar5 = 1;
            param_7 = local_2a8;
            goto LAB_14f7bbd9f;
          }
          iVar1 = BN_to_montgomery(lVar7,param_4,local_298,uVar10);
          param_7 = local_2a8;
          if (iVar1 != 0) {
            if (1 < uVar16) {
              local_2b8 = uVar10;
              iVar1 = BN_mod_mul_montgomery(uVar5,lVar7,lVar7,lVar6);
              param_7 = local_2a8;
              if (iVar1 == 0) goto LAB_14f7bbd9d;
              lVar7 = 1;
              lVar14 = (longlong)(1 << ((char)uVar16 - 1U & 0x1f));
              if (1 < lVar14) {
                do {
                  lVar8 = BN_CTX_get(uVar10);
                  alStack_160[lVar7 + 1] = lVar8;
                  param_7 = local_2a8;
                  if ((lVar8 == 0) ||
                     (local_2b8 = uVar10,
                     iVar1 = BN_mod_mul_montgomery(lVar8,alStack_160[lVar7],uVar5,lVar6),
                     param_7 = local_2a8, iVar1 == 0)) goto LAB_14f7bbd9d;
                  lVar7 = lVar7 + 1;
                } while (lVar7 < lVar14);
              }
            }
            uVar5 = 0;
            local_290 = CONCAT44(local_290._4_4_,1);
            uVar9 = BN_value_one();
            iVar1 = BN_to_montgomery(local_278,uVar9,lVar6,local_2a8);
            param_7 = local_2a8;
            if (iVar1 != 0) {
              iVar1 = local_288 + -1;
              if (-1 < iVar1) {
                iVar2 = local_288 + -2;
                local_288 = uVar16 - local_2a0;
                local_2a0 = 2 - uVar16;
                uVar11 = uVar5;
                uVar12 = uVar5;
                uVar15 = uVar5;
                iVar3 = (int)local_290;
                do {
                  uVar13 = local_2a0;
                  param_7 = local_2a8;
                  if (iVar3 == 0) {
                    local_2b8 = local_2a8;
                    iVar3 = BN_mod_mul_montgomery(local_278,local_278,local_278,local_298);
                    if (iVar3 == 0) goto LAB_14f7bbd9d;
                  }
                  uVar9 = local_268;
                  if (((int)uVar5 == 0) && (iVar3 = BN_is_bit_set(local_268,iVar1), iVar3 != 0)) {
                    uVar15 = (ulonglong)(local_288 + uVar13 + iVar2);
                    iVar3 = BN_is_bit_set(uVar9,uVar15);
                    while (iVar3 == 0) {
                      uVar15 = (ulonglong)((int)uVar15 + 1);
                      iVar3 = BN_is_bit_set(uVar9,uVar15);
                    }
                    uVar5 = 1;
                    for (iVar3 = iVar2; (int)uVar15 <= iVar3; iVar3 = iVar3 + -1) {
                      uVar13 = (int)uVar5 * 2;
                      iVar4 = BN_is_bit_set(uVar9,iVar3);
                      if (iVar4 != 0) {
                        uVar13 = uVar13 + 1;
                      }
                      uVar5 = (ulonglong)uVar13;
                    }
                  }
                  lVar6 = local_260[0];
                  if (((int)uVar12 == 0) && (iVar3 = BN_is_bit_set(local_260[0],iVar1), iVar3 != 0))
                  {
                    uVar11 = (ulonglong)(local_2a0 + iVar2);
                    iVar3 = BN_is_bit_set(lVar6,uVar11);
                    while (iVar3 == 0) {
                      uVar11 = (ulonglong)((int)uVar11 + 1);
                      iVar3 = BN_is_bit_set(lVar6,uVar11);
                    }
                    uVar12 = 1;
                    for (iVar3 = iVar2; (int)uVar11 <= iVar3; iVar3 = iVar3 + -1) {
                      uVar13 = (int)uVar12 * 2;
                      iVar4 = BN_is_bit_set(lVar6,iVar3);
                      if (iVar4 != 0) {
                        uVar13 = uVar13 + 1;
                      }
                      uVar12 = (ulonglong)uVar13;
                    }
                  }
                  param_7 = local_2a8;
                  if (((int)uVar5 == 0) || (iVar1 != (int)uVar15)) {
                    iVar3 = (int)local_290;
                  }
                  else {
                    local_2b8 = local_2a8;
                    iVar3 = BN_mod_mul_montgomery
                                      (local_278,local_278,
                                       local_260[((longlong)(int)uVar5 >> 1) + 1],local_298);
                    uVar5 = 0;
                    if (iVar3 == 0) goto LAB_14f7bbd9f;
                    local_290 = local_290 & 0xffffffff00000000;
                    iVar3 = 0;
                  }
                  if (((int)uVar12 != 0) && (iVar1 == (int)uVar11)) {
                    local_2b8 = param_7;
                    iVar3 = BN_mod_mul_montgomery
                                      (local_278,local_278,
                                       alStack_160[((longlong)(int)uVar12 >> 1) + 1],local_298);
                    if (iVar3 == 0) goto LAB_14f7bbd9d;
                    iVar3 = 0;
                    local_290 = local_290 & 0xffffffff00000000;
                    uVar12 = 0;
                  }
                  iVar2 = iVar2 + -1;
                  iVar1 = iVar1 + -1;
                  lVar6 = local_298;
                } while (-1 < iVar1);
              }
              iVar1 = BN_from_montgomery(local_280,local_278,lVar6,param_7);
              uVar5 = (ulonglong)(iVar1 != 0);
              local_280 = uVar5;
            }
            goto LAB_14f7bbd9f;
          }
        }
      }
LAB_14f7bbd9d:
      uVar5 = 0;
    }
    else {
      BN_set_word(local_280,0);
      local_280 = CONCAT44(local_280._4_4_,1);
      uVar5 = local_280;
      param_7 = local_2a8;
    }
LAB_14f7bbd9f:
    if (local_270 != 0) goto LAB_14f7bbdb4;
  }
  BN_MONT_CTX_free(local_298);
LAB_14f7bbdb4:
  BN_CTX_end(param_7);
  return uVar5 & 0xffffffff;
}

