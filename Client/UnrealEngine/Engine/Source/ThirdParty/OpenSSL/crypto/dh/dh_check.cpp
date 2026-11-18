// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 6

// DH_check @ 14f6f6160

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DH_check(longlong param_1,uint *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0;
  uVar6 = 0;
  uVar2 = DH_check_params();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = BN_CTX_new();
  if (lVar3 == 0) goto LAB_14f6f62f6;
  BN_CTX_start(lVar3);
  uVar2 = BN_CTX_get(lVar3);
  lVar4 = BN_CTX_get(lVar3);
  if (lVar4 == 0) goto LAB_14f6f62f6;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    uVar5 = BN_value_one();
    iVar1 = BN_cmp(*(undefined8 *)(param_1 + 0x10),uVar5);
    if ((iVar1 < 1) ||
       (iVar1 = BN_cmp(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8)), -1 < iVar1)) {
LAB_14f6f6231:
      *param_2 = *param_2 | 8;
    }
    else {
      iVar1 = BN_mod_exp(uVar2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x40),
                         *(undefined8 *)(param_1 + 8),lVar3);
      if (iVar1 == 0) goto LAB_14f6f62f6;
      iVar1 = BN_is_one(uVar2);
      if (iVar1 == 0) goto LAB_14f6f6231;
    }
    iVar1 = BN_is_prime_ex(*(undefined8 *)(param_1 + 0x40),0x40,lVar3);
    if (iVar1 < 0) goto LAB_14f6f62f6;
    if (iVar1 == 0) {
      *param_2 = *param_2 | 0x10;
    }
    iVar1 = BN_div(uVar2,lVar4,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x40),lVar3);
    uVar7 = uVar6;
    if (iVar1 == 0) goto LAB_14f6f62f6;
    iVar1 = BN_is_one(lVar4);
    if (iVar1 == 0) {
      *param_2 = *param_2 | 0x20;
    }
    if ((*(longlong *)(param_1 + 0x48) != 0) &&
       (iVar1 = BN_cmp(*(longlong *)(param_1 + 0x48),uVar2), iVar1 != 0)) {
      *param_2 = *param_2 | 0x40;
    }
  }
  iVar1 = BN_is_prime_ex(*(undefined8 *)(param_1 + 8),0x40,lVar3);
  uVar7 = uVar6;
  if (iVar1 < 0) goto LAB_14f6f62f6;
  if (iVar1 == 0) {
    *param_2 = *param_2 | 1;
  }
  else if (*(longlong *)(param_1 + 0x40) == 0) {
    iVar1 = BN_rshift1(uVar2,*(undefined8 *)(param_1 + 8));
    if (iVar1 == 0) goto LAB_14f6f62f6;
    iVar1 = BN_is_prime_ex(uVar2,0x40,lVar3);
    if (iVar1 < 0) goto LAB_14f6f62f6;
    if (iVar1 == 0) {
      *param_2 = *param_2 | 2;
    }
  }
  uVar7 = 1;
LAB_14f6f62f6:
  BN_CTX_end(lVar3);
  BN_CTX_free(lVar3);
  return uVar7;
}

// DH_check_ex @ 14f6f6320

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong DH_check_ex(undefined8 param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint local_res10 [6];
  undefined8 uVar3;
  
  uVar3 = 0x14f6f632c;
  local_res10[0] = 0;
  uVar2 = DH_check(param_1,local_res10);
  uVar1 = local_res10[0];
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if ((local_res10[0] & 8) != 0) {
    ERR_put_error(5,0x79,0x78,"crypto\\dh\\dh_check.c",0x51,uVar3);
  }
  if ((uVar1 & 0x10) != 0) {
    ERR_put_error(5,0x79,0x77,"crypto\\dh\\dh_check.c",0x53,uVar3);
  }
  if ((uVar1 & 0x20) != 0) {
    ERR_put_error(5,0x79,0x74,"crypto\\dh\\dh_check.c",0x55,uVar3);
  }
  if ((uVar1 & 0x40) != 0) {
    ERR_put_error(5,0x79,0x73,"crypto\\dh\\dh_check.c",0x57,uVar3);
  }
  if ((uVar1 & 4) != 0) {
    ERR_put_error(5,0x79,0x79,"crypto\\dh\\dh_check.c",0x59);
  }
  if ((uVar1 & 1) != 0) {
    ERR_put_error(5,0x79,0x75,"crypto\\dh\\dh_check.c",0x5b);
  }
  if ((uVar1 & 2) != 0) {
    ERR_put_error(5,0x79,0x76,"crypto\\dh\\dh_check.c",0x5d);
  }
  return (ulonglong)(uVar1 == 0);
}

// DH_check_params @ 14f6f6470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 DH_check_params(longlong param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  *param_2 = 0;
  lVar2 = BN_CTX_new();
  uVar5 = 0;
  if (lVar2 != 0) {
    BN_CTX_start(lVar2);
    lVar3 = BN_CTX_get(lVar2);
    if (lVar3 != 0) {
      iVar1 = BN_is_odd(*(undefined8 *)(param_1 + 8));
      if (iVar1 == 0) {
        *param_2 = *param_2 | 1;
      }
      iVar1 = BN_is_negative(*(undefined8 *)(param_1 + 0x10));
      if (((iVar1 != 0) || (iVar1 = BN_is_zero(*(undefined8 *)(param_1 + 0x10)), iVar1 != 0)) ||
         (iVar1 = BN_is_one(*(undefined8 *)(param_1 + 0x10)), iVar1 != 0)) {
        *param_2 = *param_2 | 8;
      }
      lVar4 = BN_copy(lVar3,*(undefined8 *)(param_1 + 8));
      uVar5 = 0;
      if ((lVar4 != 0) && (iVar1 = BN_sub_word(lVar3,1), iVar1 != 0)) {
        iVar1 = BN_cmp(*(undefined8 *)(param_1 + 0x10),lVar3);
        if (-1 < iVar1) {
          *param_2 = *param_2 | 8;
        }
        uVar5 = 1;
      }
    }
  }
  BN_CTX_end(lVar2);
  BN_CTX_free(lVar2);
  return uVar5;
}

// DH_check_params_ex @ 14f6f6570

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong DH_check_params_ex(undefined8 param_1)

{
  ulonglong uVar1;
  uint local_res10 [6];
  undefined8 uVar2;
  
  uVar2 = 0x14f6f657c;
  local_res10[0] = 0;
  uVar1 = DH_check_params(param_1,local_res10);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  if ((local_res10[0] & 1) != 0) {
    ERR_put_error(5,0x7a,0x75,"crypto\\dh\\dh_check.c",0x1f,uVar2);
  }
  if ((local_res10[0] & 8) != 0) {
    ERR_put_error(5,0x7a,0x78,"crypto\\dh\\dh_check.c",0x21,uVar2);
  }
  return (ulonglong)(local_res10[0] == 0);
}

// DH_check_pub_key @ 14f6f6600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 DH_check_pub_key(longlong param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar5 = 0;
  *param_3 = 0;
  lVar2 = BN_CTX_new();
  uVar6 = 0;
  if (lVar2 != 0) {
    BN_CTX_start(lVar2);
    lVar3 = BN_CTX_get(lVar2);
    if ((lVar3 != 0) && (iVar1 = BN_set_word(lVar3,1), uVar6 = uVar5, iVar1 != 0)) {
      iVar1 = BN_cmp(param_2,lVar3);
      if (iVar1 < 1) {
        *param_3 = *param_3 | 1;
      }
      lVar4 = BN_copy(lVar3,*(undefined8 *)(param_1 + 8));
      if ((lVar4 != 0) && (iVar1 = BN_sub_word(lVar3,1), iVar1 != 0)) {
        iVar1 = BN_cmp(param_2,lVar3);
        if (-1 < iVar1) {
          *param_3 = *param_3 | 2;
        }
        if (*(longlong *)(param_1 + 0x40) != 0) {
          iVar1 = BN_mod_exp(lVar3,param_2,*(longlong *)(param_1 + 0x40),
                             *(undefined8 *)(param_1 + 8),lVar2);
          if (iVar1 == 0) goto LAB_14f6f66eb;
          iVar1 = BN_is_one(lVar3);
          if (iVar1 == 0) {
            *param_3 = *param_3 | 4;
          }
        }
        uVar6 = 1;
      }
    }
  }
LAB_14f6f66eb:
  BN_CTX_end(lVar2);
  BN_CTX_free(lVar2);
  return uVar6;
}

// DH_check_pub_key_ex @ 14f6f6720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong DH_check_pub_key_ex(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint local_res18 [4];
  undefined8 uVar3;
  
  uVar3 = 0x14f6f672c;
  local_res18[0] = 0;
  uVar2 = DH_check_pub_key(param_1,param_2,local_res18);
  uVar1 = local_res18[0];
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if ((local_res18[0] & 1) != 0) {
    ERR_put_error(5,0x7b,0x7c,"crypto\\dh\\dh_check.c",0xab,uVar3);
  }
  if ((uVar1 & 2) != 0) {
    ERR_put_error(5,0x7b,0x7b,"crypto\\dh\\dh_check.c",0xad,uVar3);
  }
  if ((uVar1 & 4) != 0) {
    ERR_put_error(5,0x7b,0x7a,"crypto\\dh\\dh_check.c",0xaf,uVar3);
  }
  return (ulonglong)(uVar1 == 0);
}

