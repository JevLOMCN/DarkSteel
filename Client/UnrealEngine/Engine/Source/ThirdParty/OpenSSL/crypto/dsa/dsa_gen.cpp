// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// DSA_generate_parameters_ex @ 14f7a2f90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DSA_generate_parameters_ex
               (longlong param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x50) + 0x50);
  if (pcVar1 == (code *)0x0) {
    if (param_2 < 0x800) {
      uVar3 = EVP_sha1();
    }
    else {
      uVar3 = EVP_sha256();
    }
    iVar2 = EVP_MD_size(uVar3);
    dsa_builtin_paramgen
              (param_1,(longlong)param_2,(longlong)(iVar2 << 3),uVar3,param_3,(longlong)param_4,0,
               param_5,param_6,param_7);
  }
  else {
    (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

// dsa_builtin_paramgen @ 14f7a3090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
dsa_builtin_paramgen
          (longlong param_1,ulonglong param_2,ulonglong param_3,longlong param_4,void *param_5,
          ulonglong param_6,void *param_7,int *param_8,undefined4 *param_9,longlong param_10)

{
  char *pcVar1;
  byte *pbVar2;
  ulonglong uVar3;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  uint uVar16;
  size_t _Size;
  int iVar17;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_170;
  longlong local_168;
  int local_160;
  undefined4 local_15c;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  void *local_120;
  ulonglong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  int *local_e8;
  undefined4 *local_e0;
  undefined8 local_d8;
  ulonglong local_d0 [3];
  char acStack_b1 [33];
  undefined1 local_90 [32];
  ulonglong local_70 [6];
  
  local_70[4] = __security_cookie.value ^ (ulonglong)auStack_198;
  local_d8 = param_7;
  param_3 = param_3 >> 3;
  local_e0 = param_9;
  local_15c = 0;
  local_160 = 0;
  local_168 = 0;
  iVar6 = (int)param_3;
  local_120 = param_5;
  local_e8 = param_8;
  local_140 = param_10;
  local_100 = 2;
  if (((iVar6 - 0x14U & 0xfffffff3) == 0) && (iVar6 != 0x18)) {
    local_158 = param_4;
    local_f0 = param_1;
    if (param_4 == 0) {
      if (iVar6 == 0x14) {
        param_4 = EVP_sha1();
        local_158 = param_4;
      }
      else if (iVar6 == 0x1c) {
        param_4 = EVP_sha224();
        local_158 = param_4;
      }
      else {
        param_4 = EVP_sha256();
        local_158 = param_4;
      }
    }
    else {
      uVar5 = EVP_MD_size(param_4);
      param_3 = (ulonglong)uVar5;
    }
    if (param_2 < 0x200) {
      param_2 = 0x200;
    }
    local_118 = param_2 + 0x3f & 0xffffffffffffffc0;
    uVar5 = (uint)param_3;
    if (param_5 != (void *)0x0) {
      uVar9 = (ulonglong)(int)uVar5;
      if (param_6 < uVar9) {
        local_178 = CONCAT44(local_178._4_4_,0x55);
        ERR_put_error(10,0x7d,0x6e,"crypto\\dsa\\dsa_gen.c");
        goto LAB_14f7a31cd;
      }
      if (param_6 != uVar9) {
        param_6 = uVar9;
      }
      memcpy(local_90,param_5,param_6);
    }
    local_128 = BN_MONT_CTX_new();
    lVar10 = local_168;
    if ((local_128 != 0) && (lVar10 = BN_CTX_new(), local_168 = lVar10, lVar10 != 0)) {
      BN_CTX_start(lVar10);
      uVar11 = BN_CTX_get(lVar10);
      local_130 = BN_CTX_get(lVar10);
      local_110 = BN_CTX_get(lVar10);
      local_150 = BN_CTX_get(lVar10);
      local_148 = BN_CTX_get(lVar10);
      local_f8 = BN_CTX_get(lVar10);
      local_138 = BN_CTX_get(lVar10);
      lVar12 = BN_CTX_get(lVar10);
      local_108 = lVar12;
      if (lVar12 != 0) {
        _Size = (size_t)(int)uVar5;
        uVar13 = BN_value_one();
        iVar6 = BN_lshift(lVar12,uVar13,(int)local_118 + -1);
        if (iVar6 != 0) {
LAB_14f7a32d0:
          do {
            iVar6 = BN_GENCB_call(param_10,0,local_160);
            local_160 = local_160 + 1;
            if (iVar6 == 0) break;
            if (local_120 == (void *)0x0) {
              iVar6 = RAND_bytes(local_90,param_3 & 0xffffffff);
              if (iVar6 < 1) break;
            }
            else {
              local_120 = (void *)0x0;
            }
            memcpy(acStack_b1 + 1,local_90,_Size);
            memcpy(local_70,local_90,_Size);
            sVar4 = _Size;
            do {
              if ((longlong)(sVar4 - 1) < 0) break;
              pcVar1 = acStack_b1 + sVar4;
              *pcVar1 = *pcVar1 + '\x01';
              sVar4 = sVar4 - 1;
            } while (*pcVar1 == '\0');
            local_170 = 0;
            local_178 = param_4;
            iVar6 = EVP_Digest(local_90,_Size,local_d0,0);
            if (iVar6 == 0) break;
            local_170 = 0;
            local_178 = param_4;
            iVar6 = EVP_Digest(acStack_b1 + 1,_Size,local_70,0);
            if (iVar6 == 0) break;
            lVar12 = 0;
            if ((0 < (int)uVar5) && (0x1f < uVar5)) {
              uVar16 = uVar5 & 0x8000001f;
              if ((int)uVar16 < 0) {
                uVar16 = (uVar16 - 1 | 0xffffffe0) + 1;
              }
              do {
                uVar9 = *(ulonglong *)((longlong)local_70 + lVar12 + 8);
                *(ulonglong *)((longlong)local_d0 + lVar12) =
                     *(ulonglong *)((longlong)local_70 + lVar12) ^
                     *(ulonglong *)((longlong)local_d0 + lVar12);
                *(ulonglong *)((longlong)local_d0 + lVar12 + 8) =
                     uVar9 ^ *(ulonglong *)((longlong)local_d0 + lVar12 + 8);
                uVar9 = *(ulonglong *)(acStack_b1 + lVar12 + -7);
                uVar3 = *(ulonglong *)((longlong)local_70 + lVar12 + 0x18);
                *(ulonglong *)((longlong)local_d0 + lVar12 + 0x10) =
                     *(ulonglong *)((longlong)local_70 + lVar12 + 0x10) ^
                     *(ulonglong *)((longlong)local_d0 + lVar12 + 0x10);
                *(ulonglong *)(acStack_b1 + lVar12 + -7) = uVar3 ^ uVar9;
                lVar12 = lVar12 + 0x20;
              } while (lVar12 < (int)(uVar5 - uVar16));
            }
            for (; lVar12 < (longlong)_Size; lVar12 = lVar12 + 1) {
              *(byte *)((longlong)local_d0 + lVar12) =
                   *(byte *)((longlong)local_d0 + lVar12) ^ *(byte *)((longlong)local_70 + lVar12);
            }
            local_d0[0]._0_1_ = (byte)local_d0[0] | 0x80;
            pbVar2 = (byte *)((longlong)&local_d8 + _Size + 7);
            *pbVar2 = *pbVar2 | 1;
            lVar12 = BN_bin2bn(local_d0,param_3 & 0xffffffff,local_150);
            if (lVar12 == 0) break;
            local_178 = param_10;
            iVar6 = BN_is_prime_fasttest_ex(local_150,0x40,lVar10);
            if (0 < iVar6) {
              iVar6 = BN_GENCB_call(param_10,2);
              if ((iVar6 == 0) || (iVar6 = BN_GENCB_call(param_10,3), iVar6 == 0)) break;
              uVar9 = local_118 - 1;
              iVar6 = 0;
              uVar13 = local_110;
              do {
                if ((iVar6 != 0) &&
                   (iVar7 = BN_GENCB_call(local_140,0,iVar6), lVar10 = local_168, iVar7 == 0))
                goto LAB_14f7a37be;
                BN_set_word(uVar13,0);
                iVar7 = 0;
                iVar17 = (int)(uVar9 / 0xa0);
                sVar4 = _Size;
                if (-1 < iVar17) {
joined_r0x00014f7a34f9:
                  do {
                    if (-1 < (longlong)(sVar4 - 1)) {
                      pcVar1 = acStack_b1 + sVar4;
                      *pcVar1 = *pcVar1 + '\x01';
                      sVar4 = sVar4 - 1;
                      if (*pcVar1 == '\0') goto joined_r0x00014f7a34f9;
                    }
                    local_170 = 0;
                    local_178 = local_158;
                    iVar8 = EVP_Digest(acStack_b1 + 1,_Size,local_d0,0);
                    lVar10 = local_168;
                    if ((((iVar8 == 0) ||
                         (lVar12 = BN_bin2bn(local_d0,param_3 & 0xffffffff,uVar11),
                         lVar10 = local_168, lVar12 == 0)) ||
                        (iVar8 = BN_lshift(uVar11,uVar11,uVar5 * 8 * iVar7), lVar10 = local_168,
                        iVar8 == 0)) ||
                       (iVar8 = BN_add(local_110,local_110,uVar11), lVar10 = local_168, iVar8 == 0))
                    goto LAB_14f7a37be;
                    iVar7 = iVar7 + 1;
                    sVar4 = _Size;
                  } while (iVar7 <= iVar17);
                }
                uVar13 = local_110;
                iVar7 = BN_mask_bits(local_110,(int)local_118 + -1);
                lVar10 = local_168;
                if (((iVar7 == 0) ||
                    (lVar12 = BN_copy(local_148,uVar13), lVar10 = local_168, lVar12 == 0)) ||
                   ((iVar7 = BN_add(local_148,local_148,local_108), lVar10 = local_168, iVar7 == 0
                    || (iVar7 = BN_lshift1(uVar11,local_150), lVar10 = local_168, iVar7 == 0))))
                goto LAB_14f7a37be;
                local_178 = local_168;
                iVar7 = BN_div(0,local_f8,local_148);
                lVar10 = local_168;
                if (iVar7 == 0) goto LAB_14f7a37be;
                uVar14 = BN_value_one();
                iVar7 = BN_sub(uVar11,local_f8,uVar14);
                lVar10 = local_168;
                if ((iVar7 == 0) ||
                   (iVar7 = BN_sub(local_138,local_148,uVar11), lVar10 = local_168, iVar7 == 0))
                goto LAB_14f7a37be;
                iVar7 = BN_cmp(local_138);
                if (-1 < iVar7) {
                  local_178 = local_140;
                  iVar7 = BN_is_prime_fasttest_ex(local_138,0x40,local_168);
                  lVar12 = local_140;
                  if (0 < iVar7) {
                    iVar7 = BN_GENCB_call(local_140,2,1);
                    lVar10 = local_168;
                    if (iVar7 == 0) goto LAB_14f7a37be;
                    uVar14 = BN_value_one();
                    lVar15 = local_108;
                    uVar13 = local_138;
                    iVar7 = BN_sub(local_108,local_138,uVar14);
                    lVar10 = local_168;
                    if (iVar7 == 0) goto LAB_14f7a37be;
                    local_178 = local_168;
                    iVar7 = BN_div(uVar11,0,lVar15,local_150);
                    if (((iVar7 == 0) || (iVar7 = BN_set_word(lVar15,2), iVar7 == 0)) ||
                       (iVar7 = BN_MONT_CTX_set(local_128,uVar13,lVar10), iVar7 == 0))
                    goto LAB_14f7a37be;
                    local_170 = local_128;
                    local_178 = lVar10;
                    iVar7 = BN_mod_exp_mont(local_130,lVar15,uVar11,uVar13);
                    goto joined_r0x00014f7a3763;
                  }
                  lVar10 = local_168;
                  if (iVar7 != 0) goto LAB_14f7a37be;
                }
                iVar6 = iVar6 + 1;
                param_4 = local_158;
                lVar10 = local_168;
                param_10 = local_140;
              } while (iVar6 < 0x1000);
              goto LAB_14f7a32d0;
            }
          } while (iVar6 == 0);
        }
      }
    }
LAB_14f7a37be:
    BN_CTX_end(lVar10);
    BN_CTX_free(lVar10);
    BN_MONT_CTX_free(local_128);
  }
  else {
LAB_14f7a31cd:
    local_15c = 0;
  }
  return local_15c;
joined_r0x00014f7a3763:
  if (iVar7 == 0) goto LAB_14f7a37be;
  iVar7 = BN_is_one(local_130);
  if (iVar7 == 0) {
    iVar7 = BN_GENCB_call(lVar12,3,1);
    lVar12 = local_f0;
    if (iVar7 != 0) {
      local_15c = 1;
      BN_free(*(undefined8 *)(local_f0 + 8));
      BN_free(*(undefined8 *)(lVar12 + 0x10));
      BN_free(*(undefined8 *)(lVar12 + 0x18));
      uVar11 = BN_dup(uVar13);
      *(undefined8 *)(lVar12 + 8) = uVar11;
      uVar11 = BN_dup(local_150);
      *(undefined8 *)(lVar12 + 0x10) = uVar11;
      lVar15 = BN_dup(local_130);
      *(longlong *)(lVar12 + 0x18) = lVar15;
      if (((*(longlong *)(lVar12 + 8) == 0) || (*(longlong *)(lVar12 + 0x10) == 0)) || (lVar15 == 0)
         ) {
        local_15c = 0;
      }
      else {
        if (local_e8 != (int *)0x0) {
          *local_e8 = iVar6;
        }
        if (local_e0 != (undefined4 *)0x0) {
          *local_e0 = (int)local_100;
        }
        if (local_d8 != (void *)0x0) {
          memcpy(local_d8,local_90,_Size);
        }
      }
    }
    goto LAB_14f7a37be;
  }
  uVar14 = BN_value_one();
  iVar7 = BN_add(lVar15,lVar15,uVar14);
  if (iVar7 == 0) goto LAB_14f7a37be;
  local_100 = CONCAT44(local_100._4_4_,(int)local_100 + 1);
  local_170 = local_128;
  local_178 = lVar10;
  iVar7 = BN_mod_exp_mont(local_130,lVar15,uVar11,uVar13);
  goto joined_r0x00014f7a3763;
}

// dsa_builtin_paramgen2 @ 14f7a38d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
dsa_builtin_paramgen2
          (longlong param_1,ulonglong param_2,ulonglong param_3,void *param_4,void *param_5,
          ulonglong param_6,int param_7,void *param_8,int *param_9,undefined4 *param_10,
          void *param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  void *pvVar16;
  byte *pbVar17;
  ulonglong uVar18;
  void *_Dst;
  void *pvVar19;
  int iVar20;
  undefined4 uVar21;
  int iVar22;
  ulonglong uVar23;
  undefined1 auStack_198 [32];
  void *local_178;
  void *local_170;
  undefined4 local_168;
  void *local_160;
  void *local_158;
  longlong local_150;
  int local_148;
  uint local_144;
  void *local_140;
  ulonglong local_138;
  void *local_130;
  longlong local_128;
  longlong local_120;
  ulonglong local_118;
  void *local_110;
  void *local_108;
  longlong local_100;
  int local_f8;
  ulonglong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  void *local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  int *local_a8;
  undefined4 *local_a0;
  byte local_98 [64];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x14f7a38e7;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_108 = param_5;
  local_d8 = param_8;
  local_a0 = param_10;
  local_140 = param_11;
  pvVar4 = (void *)0x0;
  _Dst = (void *)0x0;
  iVar20 = 0;
  uVar23 = param_3 >> 3;
  local_110 = (void *)0x0;
  local_148 = 0;
  local_138 = param_6;
  local_a8 = param_9;
  local_168 = 0xffffffff;
  local_130 = param_4;
  local_f0 = param_2;
  local_e8 = param_1;
  local_b0 = uVar23;
  local_120 = EVP_MD_CTX_new();
  local_118 = 2;
  pvVar6 = pvVar4;
  pvVar19 = pvVar4;
  uVar21 = local_168;
  if (local_120 != 0) {
    if (param_3 < param_2) {
      if (param_4 == (void *)0x0) {
        if (param_3 == 0xa0) {
          param_4 = (void *)EVP_sha1();
          local_130 = param_4;
        }
        else if (param_3 == 0xe0) {
          param_4 = (void *)EVP_sha224();
          local_130 = param_4;
        }
        else {
          param_4 = (void *)EVP_sha256();
          local_130 = param_4;
        }
      }
      local_144 = EVP_MD_size(param_4);
      uVar18 = (ulonglong)(int)local_144;
      if (((*(longlong *)(local_e8 + 8) == 0) || (*(longlong *)(local_e8 + 0x10) == 0)) ||
         (pvVar16 = local_108, -1 < param_7)) {
        if (param_6 == 0) {
          param_6 = uVar18;
          local_138 = uVar18;
        }
        _Dst = (void *)CRYPTO_malloc(param_6,"crypto\\dsa\\dsa_gen.c",0x15e);
        pvVar5 = local_d8;
        if (local_d8 == (void *)0x0) {
          pvVar5 = (void *)CRYPTO_malloc(param_6,"crypto\\dsa\\dsa_gen.c",0x163);
        }
        pvVar16 = local_108;
        pvVar19 = _Dst;
        uVar21 = local_168;
        local_110 = pvVar5;
        if ((_Dst == (void *)0x0) || (pvVar5 == (void *)0x0)) goto LAB_14f7a39eb;
        if (local_108 != (void *)0x0) {
          memcpy(_Dst,local_108,param_6);
        }
      }
      pvVar6 = (void *)BN_CTX_new();
      pvVar19 = _Dst;
      local_158 = pvVar6;
      if (pvVar6 == (void *)0x0) {
        pvVar4 = (void *)0x0;
        uVar21 = local_168;
      }
      else {
        local_160 = (void *)BN_MONT_CTX_new();
        pvVar4 = local_160;
        uVar21 = local_168;
        if (local_160 != (void *)0x0) {
          BN_CTX_start(pvVar6);
          uVar7 = BN_CTX_get(pvVar6);
          local_e0 = BN_CTX_get(pvVar6);
          uVar8 = BN_CTX_get(pvVar6);
          local_c8 = uVar8;
          local_b8 = BN_CTX_get(local_158);
          local_c0 = BN_CTX_get(local_158);
          local_150 = BN_CTX_get(local_158);
          pvVar4 = local_160;
          pvVar6 = local_158;
          uVar21 = local_168;
          if (local_150 != 0) {
            local_100 = *(longlong *)(local_e8 + 8);
            if ((local_100 == 0) || (local_128 = *(longlong *)(local_e8 + 0x10), local_128 == 0)) {
              local_100 = BN_CTX_get(local_158);
              local_128 = BN_CTX_get(local_158);
              pvVar4 = local_160;
              pvVar6 = local_158;
              uVar21 = local_168;
              if (local_128 != 0) {
                iVar20 = (int)local_f0 + -1;
                local_f8 = iVar20;
                uVar9 = BN_value_one();
                iVar20 = BN_lshift(local_150,uVar9,iVar20);
                pvVar4 = local_160;
                pvVar6 = local_158;
                uVar21 = local_168;
                if (iVar20 != 0) {
                  local_d0 = (longlong)(int)uVar23;
                  pvVar5 = local_130;
                  do {
                    while( true ) {
                      iVar20 = BN_GENCB_call(local_140,0,local_148);
                      local_148 = local_148 + 1;
                      pvVar4 = local_160;
                      pvVar6 = local_158;
                      uVar21 = local_168;
                      if ((iVar20 == 0) ||
                         ((pvVar16 == (void *)0x0 &&
                          (iVar20 = RAND_bytes(_Dst,param_6 & 0xffffffff), pvVar4 = local_160,
                          pvVar6 = local_158, uVar21 = local_168, iVar20 < 1)))) goto LAB_14f7a39eb;
                      local_170 = (void *)0x0;
                      local_178 = pvVar5;
                      iVar20 = EVP_Digest(_Dst,param_6,local_98,0);
                      pvVar4 = local_160;
                      pvVar6 = local_158;
                      uVar21 = local_168;
                      if (iVar20 == 0) goto LAB_14f7a39eb;
                      pbVar17 = local_98;
                      iVar20 = (int)uVar23;
                      iVar1 = (int)uVar18;
                      if (iVar20 < iVar1) {
                        pbVar17 = pbVar17 + (iVar1 - local_d0);
                      }
                      if (iVar1 < iVar20) {
                        memset(local_98 + iVar1,0,(longlong)(iVar20 - iVar1));
                      }
                      *pbVar17 = *pbVar17 | 0x80;
                      pbVar17[local_d0 + -1] = pbVar17[local_d0 + -1] | 1;
                      lVar13 = BN_bin2bn(pbVar17,uVar23 & 0xffffffff,local_128);
                      pvVar16 = local_108;
                      pvVar4 = local_160;
                      pvVar6 = local_158;
                      uVar21 = local_168;
                      if (lVar13 == 0) goto LAB_14f7a39eb;
                      local_178 = local_140;
                      iVar20 = BN_is_prime_fasttest_ex(local_128);
                      if (iVar20 < 1) break;
                      if (local_d8 != (void *)0x0) {
                        memcpy(local_d8,_Dst,param_6);
                      }
                      pvVar16 = local_140;
                      iVar20 = BN_GENCB_call(local_140,2);
                      pvVar4 = local_160;
                      pvVar6 = local_158;
                      uVar21 = local_168;
                      if ((iVar20 == 0) ||
                         (iVar20 = BN_GENCB_call(pvVar16), pvVar4 = local_160, pvVar6 = local_158,
                         uVar21 = local_168, iVar20 == 0)) goto LAB_14f7a39eb;
                      iVar20 = 0;
                      uVar23 = local_f0 - 1;
                      do {
                        if ((iVar20 != 0) &&
                           (iVar2 = BN_GENCB_call(pvVar16,0,iVar20), pvVar4 = local_160,
                           pvVar6 = local_158, uVar21 = local_168, iVar2 == 0)) goto LAB_14f7a39eb;
                        BN_set_word(uVar8,0);
                        iVar2 = 0;
                        iVar22 = (int)(uVar23 / (ulonglong)(longlong)(iVar1 * 8));
                        if (-1 < iVar22) {
                          iVar15 = 0;
                          lVar13 = (longlong)((int)local_138 + -1);
                          do {
                            if (-1 < lVar13) {
                              pcVar10 = (char *)(lVar13 + (longlong)_Dst);
                              do {
                                *pcVar10 = *pcVar10 + '\x01';
                                if (*pcVar10 != '\0') break;
                                pcVar10 = pcVar10 + -1;
                              } while (-1 < (longlong)pcVar10 - (longlong)_Dst);
                            }
                            local_170 = (void *)0x0;
                            local_178 = local_130;
                            iVar3 = EVP_Digest(_Dst,local_138,local_98,0);
                            pvVar4 = local_160;
                            pvVar6 = local_158;
                            uVar21 = local_168;
                            if ((((iVar3 == 0) ||
                                 (lVar12 = BN_bin2bn(local_98,local_144,uVar7), pvVar4 = local_160,
                                 pvVar6 = local_158, uVar21 = local_168, lVar12 == 0)) ||
                                (iVar3 = BN_lshift(uVar7,uVar7,iVar15), pvVar4 = local_160,
                                pvVar6 = local_158, uVar21 = local_168, iVar3 == 0)) ||
                               (iVar3 = BN_add(local_c8,local_c8,uVar7), pvVar4 = local_160,
                               pvVar6 = local_158, uVar21 = local_168, iVar3 == 0))
                            goto LAB_14f7a39eb;
                            iVar2 = iVar2 + 1;
                            iVar15 = iVar15 + iVar1 * 8;
                            uVar8 = local_c8;
                          } while (iVar2 <= iVar22);
                        }
                        iVar2 = BN_mask_bits(uVar8,local_f8);
                        uVar9 = local_b8;
                        pvVar4 = local_160;
                        pvVar6 = local_158;
                        uVar21 = local_168;
                        if (((iVar2 == 0) ||
                            (lVar13 = BN_copy(local_b8,uVar8), pvVar4 = local_160,
                            pvVar6 = local_158, uVar21 = local_168, lVar13 == 0)) ||
                           ((iVar2 = BN_add(uVar9,uVar9,local_150), pvVar4 = local_160,
                            pvVar6 = local_158, uVar21 = local_168, iVar2 == 0 ||
                            (iVar2 = BN_lshift1(uVar7,local_128), pvVar6 = local_158,
                            pvVar4 = local_160, uVar21 = local_168, iVar2 == 0))))
                        goto LAB_14f7a39eb;
                        local_178 = local_158;
                        iVar2 = BN_div(0,local_c0,uVar9);
                        pvVar4 = local_160;
                        uVar21 = local_168;
                        if (iVar2 == 0) goto LAB_14f7a39eb;
                        uVar11 = BN_value_one();
                        iVar2 = BN_sub(uVar7,local_c0,uVar11);
                        lVar13 = local_100;
                        pvVar4 = local_160;
                        uVar21 = local_168;
                        if ((iVar2 == 0) ||
                           (iVar2 = BN_sub(local_100,uVar9,uVar7), pvVar4 = local_160,
                           uVar21 = local_168, iVar2 == 0)) goto LAB_14f7a39eb;
                        iVar2 = BN_cmp(lVar13);
                        pvVar16 = local_140;
                        if (-1 < iVar2) {
                          local_178 = local_140;
                          iVar2 = BN_is_prime_fasttest_ex(local_100,0x40,pvVar6);
                          if (0 < iVar2) {
                            iVar1 = BN_GENCB_call(pvVar16,2,1);
                            pvVar4 = local_160;
                            uVar21 = local_168;
                            if (iVar1 == 0) goto LAB_14f7a39eb;
                            uVar18 = (ulonglong)local_144;
                            param_6 = local_138;
                            goto LAB_14f7a3c43;
                          }
                          pvVar4 = local_160;
                          uVar21 = local_168;
                          if (iVar2 != 0) goto LAB_14f7a39eb;
                        }
                        iVar20 = iVar20 + 1;
                      } while (iVar20 < (int)local_f0 * 4);
                      if (local_108 != (void *)0x0) {
                        local_178 = (void *)CONCAT44(local_178._4_4_,0x20d);
                        ERR_put_error(10,0x7e,0x70,"crypto\\dsa\\dsa_gen.c");
                        pvVar4 = local_160;
                        uVar21 = 0;
                        goto LAB_14f7a39eb;
                      }
                      uVar18 = (ulonglong)local_144;
                      pvVar16 = local_108;
                      pvVar5 = local_130;
                      uVar23 = local_b0;
                      param_6 = local_138;
                    }
                    pvVar4 = local_160;
                    pvVar6 = local_158;
                    uVar21 = local_168;
                    if (iVar20 != 0) goto LAB_14f7a39eb;
                  } while (pvVar16 == (void *)0x0);
                  local_178 = (void *)CONCAT44(local_178._4_4_,0x1b4);
                  ERR_put_error(10,0x7e,0x71,"crypto\\dsa\\dsa_gen.c");
                  pvVar4 = local_160;
                  pvVar6 = local_158;
                  uVar21 = 0;
                }
              }
            }
            else {
              pvVar16 = local_140;
              if (-1 < param_7) {
                memcpy(local_110,_Dst,param_6);
                pvVar16 = local_140;
              }
LAB_14f7a3c43:
              uVar8 = BN_value_one();
              lVar13 = local_100;
              iVar1 = BN_sub(local_150,local_100,uVar8);
              pvVar6 = local_158;
              pvVar4 = local_160;
              uVar21 = local_168;
              if (iVar1 != 0) {
                local_178 = local_158;
                iVar1 = BN_div(uVar7,0,local_150,local_128);
                pvVar4 = local_160;
                uVar21 = local_168;
                if (iVar1 != 0) {
                  if (param_7 < 0) {
                    iVar1 = BN_set_word(local_150,2);
                    pvVar4 = local_160;
                    uVar21 = local_168;
                    if (iVar1 == 0) goto LAB_14f7a39eb;
                  }
                  else {
                    local_118 = CONCAT44(local_118._4_4_,1);
                  }
                  iVar1 = BN_MONT_CTX_set(local_160,lVar13,pvVar6);
                  pvVar4 = local_160;
                  uVar21 = local_168;
                  if (iVar1 != 0) {
                    do {
                      if (-1 < param_7) {
                        local_98[0] = (byte)param_7;
                        local_98[1] = (byte)(local_118 >> 8);
                        local_98[2] = (byte)local_118;
                        iVar1 = EVP_DigestInit_ex(local_120,local_130,0);
                        pvVar4 = local_160;
                        uVar21 = local_168;
                        if ((((iVar1 == 0) ||
                             (iVar1 = EVP_DigestUpdate(local_120,local_110,param_6),
                             pvVar4 = local_160, uVar21 = local_168, iVar1 == 0)) ||
                            (iVar1 = EVP_DigestUpdate(local_120,&DAT_1534e664c,4),
                            pvVar4 = local_160, uVar21 = local_168, iVar1 == 0)) ||
                           (((iVar1 = EVP_DigestUpdate(local_120,local_98,3), pvVar4 = local_160,
                             uVar21 = local_168, iVar1 == 0 ||
                             (iVar1 = EVP_DigestFinal_ex(local_120,local_98,0), pvVar4 = local_160,
                             uVar21 = local_168, iVar1 == 0)) ||
                            (lVar12 = BN_bin2bn(local_98,uVar18 & 0xffffffff,local_150),
                            pvVar4 = local_160, uVar21 = local_168, lVar12 == 0)))) break;
                      }
                      do {
                        local_170 = local_160;
                        local_178 = pvVar6;
                        iVar1 = BN_mod_exp_mont(local_e0,local_150,uVar7,lVar13);
                        pvVar4 = local_160;
                        uVar21 = local_168;
                        if (iVar1 == 0) goto LAB_14f7a39eb;
                        iVar1 = BN_is_one(local_e0);
                        if (iVar1 == 0) {
                          iVar1 = BN_GENCB_call(pvVar16,3,1);
                          lVar12 = local_e8;
                          pvVar4 = local_160;
                          uVar21 = local_168;
                          if (iVar1 != 0) {
                            if (lVar13 != *(longlong *)(local_e8 + 8)) {
                              BN_free();
                              uVar8 = BN_dup(lVar13);
                              *(undefined8 *)(lVar12 + 8) = uVar8;
                            }
                            lVar13 = local_128;
                            if (local_128 != *(longlong *)(lVar12 + 0x10)) {
                              BN_free();
                              uVar8 = BN_dup(lVar13);
                              *(undefined8 *)(lVar12 + 0x10) = uVar8;
                            }
                            BN_free(*(undefined8 *)(lVar12 + 0x18));
                            lVar13 = BN_dup(local_e0);
                            *(longlong *)(lVar12 + 0x18) = lVar13;
                            pvVar4 = local_160;
                            if (((*(longlong *)(lVar12 + 8) == 0) ||
                                (*(longlong *)(lVar12 + 0x10) == 0)) || (lVar13 == 0)) {
                              uVar21 = 0xffffffff;
                            }
                            else {
                              if (local_a8 != (int *)0x0) {
                                *local_a8 = iVar20;
                              }
                              uVar21 = 1;
                              if (local_a0 != (undefined4 *)0x0) {
                                *local_a0 = (int)local_118;
                              }
                            }
                          }
                          goto LAB_14f7a39eb;
                        }
                        if (param_7 < 0) {
                          BN_value_one();
                          iVar1 = BN_add(local_150);
                          pvVar4 = local_160;
                          uVar21 = local_168;
                          if (iVar1 == 0) goto LAB_14f7a39eb;
                        }
                        uVar14 = (int)local_118 + 1;
                        local_118 = (ulonglong)uVar14;
                      } while (param_7 < 0);
                      pvVar4 = local_160;
                      uVar21 = local_168;
                      if (0xffff < uVar14) break;
                    } while( true );
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      local_178 = (void *)CONCAT44(local_178._4_4_,0x14b);
      ERR_put_error(10,0x7e,0x70,"crypto\\dsa\\dsa_gen.c");
      pvVar19 = _Dst;
      uVar21 = local_168;
    }
  }
LAB_14f7a39eb:
  CRYPTO_free(pvVar19,"crypto\\dsa\\dsa_gen.c",0x25e);
  if (local_d8 != local_110) {
    CRYPTO_free(local_110,"crypto\\dsa\\dsa_gen.c",0x260);
  }
  BN_CTX_end(pvVar6);
  BN_CTX_free(pvVar6);
  BN_MONT_CTX_free(pvVar4);
  EVP_MD_CTX_free(local_120);
  return uVar21;
}

