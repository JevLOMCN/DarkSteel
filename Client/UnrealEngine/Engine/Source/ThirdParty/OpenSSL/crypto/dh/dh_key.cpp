// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// FUN_14f75de90 @ 14f75de90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f75de90(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar10;
  undefined8 uVar9;
  
  lVar8 = 0;
  bVar1 = false;
  iVar2 = BN_num_bits(*(undefined8 *)(param_1 + 8));
  if (10000 < iVar2) {
    ERR_put_error(5,0x67,0x67,"crypto\\dh\\dh_key.c",0x71);
    return 0;
  }
  lVar3 = BN_CTX_new();
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  lVar4 = lVar8;
  lVar5 = lVar8;
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x28);
    if (lVar4 == 0) {
      lVar4 = BN_secure_new();
      uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
      lVar5 = 0;
      if (lVar4 == 0) goto LAB_14f75e05c;
      bVar1 = true;
    }
    lVar5 = *(longlong *)(param_1 + 0x20);
    if (lVar5 == 0) {
      lVar5 = BN_new();
      uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
      if (lVar5 == 0) goto LAB_14f75e05c;
    }
    lVar6 = lVar8;
    if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
      lVar6 = BN_MONT_CTX_set_locked
                        (param_1 + 0x38,*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 8)
                         ,lVar3);
      uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
      if (lVar6 == 0) goto LAB_14f75e05c;
    }
    uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
    if (bVar1) {
      if (*(longlong *)(param_1 + 0x40) == 0) {
        iVar2 = *(int *)(param_1 + 0x18);
        if (iVar2 == 0) {
          iVar2 = BN_num_bits(*(undefined8 *)(param_1 + 8));
          iVar2 = iVar2 + -1;
        }
        iVar2 = BN_priv_rand(lVar4,iVar2,0,0);
        if ((iVar2 == 0) ||
           (((iVar2 = BN_is_word(*(undefined8 *)(param_1 + 0x10),2), iVar2 != 0 &&
             (iVar2 = BN_is_bit_set(*(undefined8 *)(param_1 + 8),2), iVar2 == 0)) &&
            (iVar2 = BN_clear_bit(lVar4,0), iVar2 == 0)))) goto LAB_14f75e05c;
      }
      else {
        do {
          do {
            iVar2 = BN_priv_rand_range(lVar4,*(undefined8 *)(param_1 + 0x40));
            uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
            if (iVar2 == 0) goto LAB_14f75e05c;
            iVar2 = BN_is_zero(lVar4);
          } while (iVar2 != 0);
          iVar2 = BN_is_one(lVar4);
          uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
        } while (iVar2 != 0);
      }
    }
    lVar7 = BN_new();
    if (lVar7 != 0) {
      BN_with_flags(lVar7,lVar4,4);
      uVar9 = *(undefined8 *)(param_1 + 8);
      iVar2 = (**(code **)(*(longlong *)(param_1 + 0x78) + 0x18))
                        (param_1,lVar5,*(undefined8 *)(param_1 + 0x10),lVar7,uVar9,lVar3,lVar6);
      uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
      if (iVar2 != 0) {
        BN_clear_free(lVar7);
        *(longlong *)(param_1 + 0x20) = lVar5;
        lVar8 = 1;
        *(longlong *)(param_1 + 0x28) = lVar4;
        goto LAB_14f75e07c;
      }
      BN_clear_free(lVar7);
    }
  }
LAB_14f75e05c:
  ERR_put_error(5,0x67,3,"crypto\\dh\\dh_key.c",CONCAT44(uVar10,0xbb));
LAB_14f75e07c:
  if (lVar5 != *(longlong *)(param_1 + 0x20)) {
    BN_free(lVar5);
  }
  if (lVar4 != *(longlong *)(param_1 + 0x28)) {
    BN_free(lVar4);
  }
  BN_CTX_free(lVar3);
  return lVar8;
}

// FUN_14f75e0e0 @ 14f75e0e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f75e0e0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  int local_res18 [4];
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar7;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar5 = 0;
  uVar6 = 0xffffffff;
  iVar1 = BN_num_bits(*(undefined8 *)(param_3 + 8));
  if (iVar1 < 0x2711) {
    lVar3 = BN_CTX_new();
    uVar2 = uVar6;
    if (lVar3 != 0) {
      BN_CTX_start(lVar3);
      lVar4 = BN_CTX_get(lVar3);
      uVar2 = 0xffffffff;
      if (lVar4 != 0) {
        if (*(longlong *)(param_3 + 0x28) == 0) {
          uVar7 = 0xdb;
          uVar2 = 100;
        }
        else {
          if ((*(byte *)(param_3 + 0x30) & 1) != 0) {
            lVar5 = BN_MONT_CTX_set_locked
                              (param_3 + 0x38,*(undefined8 *)(param_3 + 0x88),
                               *(undefined8 *)(param_3 + 8),lVar3);
            BN_set_flags(*(undefined8 *)(param_3 + 0x28),4);
            uVar2 = uVar6;
            if (lVar5 == 0) goto LAB_14f75e26e;
          }
          iVar1 = DH_check_pub_key(param_3,param_2,local_res18);
          if ((iVar1 == 0) || (local_res18[0] != 0)) {
            uVar7 = 0xe8;
            uVar2 = 0x66;
          }
          else {
            iVar1 = (**(code **)(*(longlong *)(param_3 + 0x78) + 0x18))
                              (param_3,lVar4,param_2,*(undefined8 *)(param_3 + 0x28),
                               *(undefined8 *)(param_3 + 8),lVar3,lVar5);
            if (iVar1 != 0) {
              iVar1 = BN_num_bits(*(undefined8 *)(param_3 + 8));
              uVar2 = BN_bn2binpad(lVar4,param_1,(int)((iVar1 + 7 >> 0x1f & 7U) + iVar1 + 7) >> 3);
              goto LAB_14f75e26e;
            }
            uVar7 = 0xee;
            uVar2 = 3;
          }
        }
        ERR_put_error(5,0x66,uVar2,"crypto\\dh\\dh_key.c",uVar7);
        uVar2 = uVar6;
      }
    }
  }
  else {
    ERR_put_error(5,0x66,0x67,"crypto\\dh\\dh_key.c",CONCAT44(uVar2,0xce));
    lVar3 = lVar5;
    uVar2 = 0xffffffff;
  }
LAB_14f75e26e:
  BN_CTX_end(lVar3);
  BN_CTX_free(lVar3);
  return uVar2;
}

// FUN_14f75e2a0 @ 14f75e2a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f75e2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  BN_mod_exp_mont(param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

// FUN_14f75e300 @ 14f75e300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75e300(longlong param_1)

{
  BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x38));
  return 1;
}

// DH_compute_key @ 14f75e340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong DH_compute_key(void *param_1,undefined8 param_2,longlong param_3)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = 0;
  local_res20 = 1;
  iVar2 = (**(code **)(*(longlong *)(param_3 + 0x78) + 0x10))();
  uVar5 = (ulonglong)iVar2;
  if (0 < iVar2) {
    lVar3 = 0;
    if (0 < iVar2) {
      do {
        pcVar1 = (char *)(lVar3 + (longlong)param_1);
        lVar3 = lVar3 + 1;
        local_res20 = local_res20 & *pcVar1 == '\0';
        local_res18 = local_res20 + local_res18;
      } while (lVar3 < (longlong)uVar5);
    }
    uVar4 = iVar2 - (int)local_res18;
    uVar5 = (ulonglong)uVar4;
    memmove(param_1,(void *)(local_res18 + (longlong)param_1),(longlong)(int)uVar4);
    memset((void *)((longlong)(int)uVar4 + (longlong)param_1),0,local_res18);
  }
  return uVar5 & 0xffffffff;
}

// DH_compute_key_padded @ 14f75e400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int DH_compute_key_padded(void *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*(longlong *)(param_3 + 0x78) + 0x10))();
  if (iVar1 < 1) {
    return iVar1;
  }
  iVar2 = BN_num_bits(*(undefined8 *)(param_3 + 8));
  iVar2 = (int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3;
  iVar3 = iVar2 - iVar1;
  if (0 < iVar3) {
    memmove((void *)((longlong)iVar3 + (longlong)param_1),param_1,(longlong)iVar1);
    memset(param_1,0,(longlong)iVar3);
  }
  return iVar2;
}

// DH_generate_key @ 14f75e4a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DH_generate_key(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f75e4b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x78) + 8))();
  return;
}

// DH_get_default_method @ 14f75e4c0

undefined * DH_get_default_method(void)

{
  return PTR_PTR_154df97a8;
}

