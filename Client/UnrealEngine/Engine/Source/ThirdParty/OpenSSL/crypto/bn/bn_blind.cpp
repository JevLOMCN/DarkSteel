// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 12

// BN_BLINDING_convert @ 14f7239c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_BLINDING_convert(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  BN_BLINDING_convert_ex(param_1,0,param_2,param_3);
  return;
}

// BN_BLINDING_convert_ex @ 14f7239f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
BN_BLINDING_convert_ex(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((*param_3 == 0) || (param_3[1] == 0)) {
    ERR_put_error(3,100,0x6b,"crypto\\bn\\bn_blind.c",0x7f,0x14f723a0a);
LAB_14f723aa5:
    uVar3 = 0;
  }
  else {
    if (*(int *)((longlong)param_3 + 0x24) == -1) {
      *(undefined4 *)((longlong)param_3 + 0x24) = 0;
    }
    else {
      iVar1 = BN_BLINDING_update(param_3,param_4);
      if (iVar1 == 0) goto LAB_14f723aa5;
    }
    if (param_2 != 0) {
      lVar2 = BN_copy(param_2,param_3[1]);
      if (lVar2 == 0) goto LAB_14f723aa5;
    }
    if (param_3[6] == 0) {
      uVar3 = BN_mod_mul(param_1,param_1,*param_3,param_3[3],param_4);
    }
    else {
      uVar3 = BN_mod_mul_montgomery();
    }
  }
  return uVar3;
}

// BN_BLINDING_create_param @ 14f723ad0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong *
BN_BLINDING_create_param
          (longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,longlong param_5
          ,longlong param_6)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int local_res8 [2];
  
  plVar3 = param_1;
  if (param_1 == (longlong *)0x0) {
    plVar3 = (longlong *)BN_BLINDING_new(0,0);
  }
  if (plVar3 != (longlong *)0x0) {
    if (*plVar3 == 0) {
      lVar4 = BN_new();
      *plVar3 = lVar4;
      if (lVar4 == 0) goto LAB_14f723c87;
    }
    if (plVar3[1] == 0) {
      lVar4 = BN_new();
      plVar3[1] = lVar4;
      if (lVar4 == 0) goto LAB_14f723c87;
    }
    if (param_2 != 0) {
      BN_free(plVar3[2]);
      lVar4 = BN_dup(param_2);
      plVar3[2] = lVar4;
    }
    if (plVar3[2] != 0) {
      if (param_5 != 0) {
        plVar3[7] = param_5;
      }
      if (param_6 != 0) {
        plVar3[6] = param_6;
      }
      iVar1 = BN_priv_rand_range(*plVar3,plVar3[3]);
      iVar2 = 0x20;
      while (iVar1 != 0) {
        lVar4 = int_bn_mod_inverse(plVar3[1],*plVar3,plVar3[3],param_4,local_res8);
        if (lVar4 != 0) {
          if (((code *)plVar3[7] == (code *)0x0) || (plVar3[6] == 0)) {
            iVar2 = BN_mod_exp(*plVar3,*plVar3,plVar3[2],plVar3[3],param_4);
          }
          else {
            iVar2 = (*(code *)plVar3[7])(*plVar3,*plVar3,plVar3[2],plVar3[3],param_4,plVar3[6]);
          }
          if (iVar2 != 0) {
            if (plVar3[6] == 0) {
              return plVar3;
            }
            iVar2 = bn_to_mont_fixed_top(plVar3[1],plVar3[1],plVar3[6],param_4);
            if ((iVar2 != 0) &&
               (iVar2 = bn_to_mont_fixed_top(*plVar3,*plVar3,plVar3[6],param_4), iVar2 != 0)) {
              return plVar3;
            }
          }
          break;
        }
        if (local_res8[0] == 0) break;
        if (iVar2 == 0) {
          ERR_put_error(3,0x80,0x71,"crypto\\bn\\bn_blind.c",0x10f);
          break;
        }
        iVar1 = BN_priv_rand_range(*plVar3,plVar3[3]);
        iVar2 = iVar2 + -1;
      }
    }
  }
LAB_14f723c87:
  if (param_1 == (longlong *)0x0) {
    BN_BLINDING_free(plVar3);
    plVar3 = (longlong *)0x0;
  }
  return plVar3;
}

// BN_BLINDING_free @ 14f723cc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_BLINDING_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    BN_free(*param_1);
    BN_free(param_1[1]);
    BN_free(param_1[2]);
    BN_free(param_1[3]);
    CRYPTO_THREAD_lock_free(param_1[8]);
    CRYPTO_free(param_1,"crypto\\bn\\bn_blind.c",0x4c);
  }
  return;
}

// BN_BLINDING_invert @ 14f723d40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_BLINDING_invert(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  BN_BLINDING_invert_ex(param_1,0,param_2,param_3);
  return;
}

// BN_BLINDING_invert_ex @ 14f723d70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
BN_BLINDING_invert_ex(ulonglong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  ulonglong *puVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  lVar7 = _UNK_150ae1708;
  lVar1 = ___xmm_00000000000000010000000000000000;
  if ((param_2 == 0) && (param_2 = *(longlong *)(param_3 + 8), param_2 == 0)) {
    ERR_put_error(3,0x65,0x6b,"crypto\\bn\\bn_blind.c",0xa1);
    return 0;
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    uVar2 = *(uint *)(param_2 + 8);
    uVar8 = (ulonglong)(int)uVar2;
    if ((int)uVar2 <= *(int *)((longlong)param_1 + 0xc)) {
      uVar6 = param_1[1];
      lVar11 = (longlong)(int)(uint)uVar6;
      uVar9 = 0;
      if (uVar8 != 0) {
        if (3 < uVar8) {
          puVar3 = (ulonglong *)*param_1;
          if ((param_1 < puVar3) || (puVar3 + (uVar8 - 1) < param_1)) {
            do {
              uVar5 = (puVar3 + uVar9)[1];
              puVar3[uVar9] = (longlong)((uVar9 + lVar1) - lVar11) >> 0x3f & puVar3[uVar9];
              (puVar3 + uVar9)[1] = (longlong)((uVar9 + lVar7) - lVar11) >> 0x3f & uVar5;
              uVar5 = (puVar3 + uVar9 + 2)[1];
              puVar3[uVar9 + 2] =
                   (longlong)((uVar9 + 2 + lVar1) - lVar11) >> 0x3f & puVar3[uVar9 + 2];
              (puVar3 + uVar9 + 2)[1] = (longlong)((uVar9 + 2 + lVar7) - lVar11) >> 0x3f & uVar5;
              uVar9 = uVar9 + 4;
            } while (uVar9 < uVar8 - (uVar2 & 3));
          }
        }
        if (uVar9 < uVar8) {
          do {
            puVar3 = (ulonglong *)(*param_1 + uVar9 * 8);
            lVar1 = uVar9 - lVar11;
            uVar9 = uVar9 + 1;
            *puVar3 = *puVar3 & lVar1 >> 0x3f;
          } while (uVar9 < uVar8);
        }
      }
      uVar4 = (uint)((longlong)(uVar8 - lVar11) >> 0x3f);
      *(uint *)(param_1 + 1) = ~uVar4 & uVar2 | (uint)uVar6 & uVar4;
    }
    uVar10 = BN_mod_mul_montgomery(param_1,param_1,param_2,*(undefined8 *)(param_3 + 0x30),param_4);
    return uVar10;
  }
  uVar10 = BN_mod_mul(param_1,param_1,param_2,*(undefined8 *)(param_3 + 0x18),param_4,0x14f723d80);
  return uVar10;
}

// BN_BLINDING_is_current_thread @ 14f723f40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_BLINDING_is_current_thread(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = CRYPTO_THREAD_get_current_id();
  CRYPTO_THREAD_compare_id(uVar1,*(undefined4 *)(param_1 + 0x20));
  return;
}

// BN_BLINDING_lock @ 14f723f70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_BLINDING_lock(longlong param_1)

{
  CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x40));
  return;
}

// BN_BLINDING_new @ 14f723f90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * BN_BLINDING_new(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f723faa;
  plVar3 = (longlong *)CRYPTO_zalloc(0x48,"crypto\\bn\\bn_blind.c",0x16);
  if (plVar3 == (longlong *)0x0) {
    ERR_put_error(3,0x66,0x41,"crypto\\bn\\bn_blind.c",0x17,uVar5);
    return (longlong *)0x0;
  }
  lVar4 = CRYPTO_THREAD_lock_new();
  plVar3[8] = lVar4;
  if (lVar4 == 0) {
    ERR_put_error(3,0x66,0x41,"crypto\\bn\\bn_blind.c",0x1d,uVar5);
    CRYPTO_free(plVar3,"crypto\\bn\\bn_blind.c",0x1e);
    return (longlong *)0x0;
  }
  uVar1 = CRYPTO_THREAD_get_current_id();
  *(undefined4 *)(plVar3 + 4) = uVar1;
  if (param_1 != 0) {
    lVar4 = BN_dup(param_1);
    *plVar3 = lVar4;
    if (lVar4 == 0) goto LAB_14f72407f;
  }
  if (param_2 != 0) {
    lVar4 = BN_dup(param_2);
    plVar3[1] = lVar4;
    if (lVar4 == 0) goto LAB_14f72407f;
  }
  lVar4 = BN_dup(param_3);
  plVar3[3] = lVar4;
  if (lVar4 != 0) {
    iVar2 = BN_get_flags(param_3,4);
    if (iVar2 != 0) {
      BN_set_flags(plVar3[3],4);
    }
    *(undefined4 *)((longlong)plVar3 + 0x24) = 0xffffffff;
    return plVar3;
  }
LAB_14f72407f:
  BN_BLINDING_free(plVar3);
  return (longlong *)0x0;
}

// BN_BLINDING_set_current_thread @ 14f7240d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_BLINDING_set_current_thread(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = CRYPTO_THREAD_get_current_id();
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}

// BN_BLINDING_unlock @ 14f724110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_BLINDING_unlock(longlong param_1)

{
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x40));
  return;
}

// BN_BLINDING_update @ 14f724130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_BLINDING_update(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if ((*param_1 == 0) || (lVar2 = param_1[1], lVar2 == 0)) {
    ERR_put_error(3,0x67,0x6b,"crypto\\bn\\bn_blind.c",0x54,0x14f72414a);
    goto LAB_14f724239;
  }
  if (*(int *)((longlong)param_1 + 0x24) == -1) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
  if (((*(int *)((longlong)param_1 + 0x24) == 0x20) && (param_1[2] != 0)) &&
     ((*(byte *)(param_1 + 5) & 2) == 0)) {
    lVar2 = BN_BLINDING_create_param(param_1,0,0,param_2,0,0);
    bVar4 = lVar2 == 0;
LAB_14f724210:
    uVar3 = 0;
    if (bVar4) goto LAB_14f724239;
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    if (param_1[6] == 0) {
      iVar1 = BN_mod_mul(lVar2,lVar2,lVar2,param_1[3],param_2);
      if (iVar1 == 0) goto LAB_14f724239;
      lVar2 = *param_1;
      iVar1 = BN_mod_mul(lVar2,lVar2,lVar2,param_1[3],param_2);
      bVar4 = iVar1 == 0;
      goto LAB_14f724210;
    }
    iVar1 = bn_mul_mont_fixed_top();
    if (iVar1 == 0) goto LAB_14f724239;
    lVar2 = *param_1;
    iVar1 = bn_mul_mont_fixed_top(lVar2,lVar2,lVar2,param_1[6],param_2);
    if (iVar1 == 0) goto LAB_14f724239;
  }
  uVar3 = 1;
LAB_14f724239:
  if (*(int *)((longlong)param_1 + 0x24) == 0x20) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  return uVar3;
}

