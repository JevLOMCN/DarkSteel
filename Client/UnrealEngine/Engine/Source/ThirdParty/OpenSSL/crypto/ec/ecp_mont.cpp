// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 12

// ec_GFp_mont_group_init @ 14f79f9b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GFp_mont_group_init(longlong param_1)

{
  ec_GFp_simple_group_init();
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}

// ec_GFp_mont_group_set_curve @ 14f79f9e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_GFp_mont_group_set_curve
                    (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    ulonglong param_5)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar5 = 0;
  uVar7 = 0;
  BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  BN_free(*(undefined8 *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  uVar3 = uVar5;
  if ((param_5 == 0) && (uVar3 = BN_CTX_new(), param_5 = uVar3, uVar3 == 0)) {
    return 0;
  }
  lVar4 = BN_MONT_CTX_new();
  uVar8 = uVar5;
  if (lVar4 != 0) {
    iVar1 = BN_MONT_CTX_set(lVar4,param_2,param_5);
    uVar8 = uVar7;
    if (iVar1 == 0) {
      ERR_put_error(0x10,0xbd,3,"crypto\\ec\\ecp_mont.c",CONCAT44(uVar9,0x9e));
      uVar5 = 0;
    }
    else {
      uVar5 = BN_new();
      if (uVar5 != 0) {
        uVar6 = BN_value_one();
        iVar1 = BN_to_montgomery(uVar5,uVar6,lVar4,param_5);
        if (iVar1 != 0) {
          *(longlong *)(param_1 + 0x78) = lVar4;
          *(ulonglong *)(param_1 + 0x80) = uVar5;
          lVar4 = 0;
          uVar5 = 0;
          uVar2 = ec_GFp_simple_group_set_curve(param_1,param_2,param_3,param_4,param_5);
          uVar8 = (ulonglong)uVar2;
          if (uVar2 == 0) {
            BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x78));
            *(undefined8 *)(param_1 + 0x78) = 0;
            BN_free(*(undefined8 *)(param_1 + 0x80));
            *(undefined8 *)(param_1 + 0x80) = 0;
          }
        }
      }
    }
  }
  BN_free(uVar5);
  BN_CTX_free(uVar3);
  BN_MONT_CTX_free(lVar4);
  return uVar8;
}

// ec_GFp_mont_group_finish @ 14f79fb60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GFp_mont_group_finish(longlong param_1)

{
  BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  BN_free(*(undefined8 *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  ec_GFp_simple_group_finish(param_1);
  return;
}

// ec_GFp_mont_group_clear_finish @ 14f79fbb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GFp_mont_group_clear_finish(longlong param_1)

{
  BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  BN_clear_free(*(undefined8 *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  ec_GFp_simple_group_clear_finish(param_1);
  return;
}

// ec_GFp_mont_group_copy @ 14f79fc00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GFp_mont_group_copy(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  BN_clear_free(*(undefined8 *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  iVar1 = ec_GFp_simple_group_copy(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(longlong *)(param_2 + 0x78) != 0) {
    lVar2 = BN_MONT_CTX_new();
    *(longlong *)(param_1 + 0x78) = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    lVar2 = BN_MONT_CTX_copy(lVar2,*(undefined8 *)(param_2 + 0x78));
    if (lVar2 == 0) goto LAB_14f79fc93;
  }
  if (*(longlong *)(param_2 + 0x80) == 0) {
    return 1;
  }
  lVar2 = BN_dup();
  *(longlong *)(param_1 + 0x80) = lVar2;
  if (lVar2 != 0) {
    return 1;
  }
LAB_14f79fc93:
  BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  return 0;
}

// ec_GFp_mont_field_mul @ 14f79fcd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ec_GFp_mont_field_mul(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    ERR_put_error(0x10,0x83,0x6f,"crypto\\ec\\ecp_mont.c",0xc0,0x14f79fcdc);
    return 0;
  }
  uVar1 = BN_mod_mul_montgomery(param_2,param_3,param_4);
  return uVar1;
}

// ec_GFp_mont_field_sqr @ 14f79fd30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ec_GFp_mont_field_sqr(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    ERR_put_error(0x10,0x84,0x6f,"crypto\\ec\\ecp_mont.c",0xcb);
    return 0;
  }
  uVar1 = BN_mod_mul_montgomery(param_2,param_3,param_3,*(longlong *)(param_1 + 0x78),param_4);
  return uVar1;
}

// ec_GFp_mont_field_inv @ 14f79fd90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_GFp_mont_field_inv
                   (longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x78) == 0) {
LAB_14f79fdc8:
    lVar4 = 0;
  }
  else {
    lVar5 = 0;
    if (param_4 == 0) {
      param_4 = BN_CTX_secure_new();
      lVar5 = param_4;
      if (param_4 == 0) goto LAB_14f79fdc8;
    }
    BN_CTX_start(param_4);
    lVar2 = BN_CTX_get(param_4);
    lVar4 = 0;
    if (lVar2 != 0) {
      iVar1 = BN_set_word(lVar2,2);
      lVar4 = lVar3;
      if (iVar1 != 0) {
        iVar1 = BN_sub(lVar2,*(undefined8 *)(param_1 + 0x40),lVar2);
        if (iVar1 != 0) {
          lVar3 = param_4;
          iVar1 = BN_mod_exp_mont(param_2,param_3,lVar2,*(undefined8 *)(param_1 + 0x40),param_4,
                                  *(undefined8 *)(param_1 + 0x78));
          uVar6 = (undefined4)((ulonglong)lVar3 >> 0x20);
          if (iVar1 != 0) {
            iVar1 = BN_is_zero(param_2);
            if (iVar1 == 0) {
              lVar4 = 1;
            }
            else {
              ERR_put_error(0x10,0x129,0xa5,"crypto\\ec\\ecp_mont.c",CONCAT44(uVar6,0xf6));
            }
          }
        }
      }
    }
    BN_CTX_end(param_4);
    BN_CTX_free(lVar5);
  }
  return lVar4;
}

// ec_GFp_mont_field_encode @ 14f79fec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GFp_mont_field_encode(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    ERR_put_error(0x10,0x86,0x6f,"crypto\\ec\\ecp_mont.c",0x106);
    return 0;
  }
  uVar1 = BN_to_montgomery(param_2,param_3);
  return uVar1;
}

// ec_GFp_mont_field_decode @ 14f79ff20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GFp_mont_field_decode(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    ERR_put_error(0x10,0x85,0x6f,"crypto\\ec\\ecp_mont.c",0x111);
    return 0;
  }
  uVar1 = BN_from_montgomery(param_2,param_3);
  return uVar1;
}

// ec_GFp_mont_field_set_to_one @ 14f79ff80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ec_GFp_mont_field_set_to_one(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    ERR_put_error(0x10,0xd1,0x6f,"crypto\\ec\\ecp_mont.c",0x11c);
    return false;
  }
  lVar1 = BN_copy(param_2);
  return lVar1 != 0;
}

// EC_GFp_mont_method @ 14f79fff0

undefined * EC_GFp_mont_method(void)

{
  return &DAT_1534e63e0;
}

