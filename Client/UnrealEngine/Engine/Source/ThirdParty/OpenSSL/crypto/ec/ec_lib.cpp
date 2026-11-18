// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 67

// EC_GROUP_check_discriminant @ 14f6e8d60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_GROUP_check_discriminant(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x48) == (code *)0x0) {
    ERR_put_error(0x10,0xab,0x42,"crypto\\ec\\ec_lib.c",0x239);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f6e8da5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x48))();
  return uVar1;
}

// EC_GROUP_clear_free @ 14f6e8db0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_GROUP_clear_free(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  
  if (param_1 != (longlong *)0x0) {
    pcVar2 = *(code **)(*param_1 + 0x18);
    if ((pcVar2 != (code *)0x0) || (pcVar2 = *(code **)(*param_1 + 0x10), pcVar2 != (code *)0x0)) {
      (*pcVar2)();
    }
    EC_pre_comp_free(param_1);
    BN_MONT_CTX_free(param_1[0x12]);
    plVar1 = (longlong *)param_1[1];
    if (plVar1 != (longlong *)0x0) {
      pcVar2 = *(code **)(*plVar1 + 0x60);
      if ((pcVar2 != (code *)0x0) || (pcVar2 = *(code **)(*plVar1 + 0x58), pcVar2 != (code *)0x0)) {
        (*pcVar2)(plVar1);
      }
      CRYPTO_clear_free(plVar1,0x30,"crypto\\ec\\ec_lib.c",699);
    }
    BN_clear_free(param_1[2]);
    BN_clear_free(param_1[3]);
    CRYPTO_clear_free(param_1[6],param_1[7],"crypto\\ec\\ec_lib.c",0x7e);
    CRYPTO_clear_free(param_1,0xa8,"crypto\\ec\\ec_lib.c");
  }
  return;
}

// EC_GROUP_cmp @ 14f6e8e90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EC_GROUP_cmp(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar10 = 0;
  if (*(int *)((byte *)*param_1 + 4) != *(int *)(*param_2 + 4)) {
    return 1;
  }
  if ((((int)param_1[4] != 0) && ((int)param_2[4] != 0)) && ((int)param_1[4] != (int)param_2[4])) {
    return 1;
  }
  if ((*(byte *)*param_1 & 2) != 0) {
    return 0;
  }
  lVar9 = lVar10;
  if ((param_3 == 0) && (param_3 = BN_CTX_new(), lVar9 = param_3, param_3 == 0)) {
    return 0xffffffff;
  }
  BN_CTX_start(param_3);
  uVar3 = BN_CTX_get(param_3);
  uVar4 = BN_CTX_get(param_3);
  uVar5 = BN_CTX_get(param_3);
  uVar6 = BN_CTX_get(param_3);
  uVar7 = BN_CTX_get(param_3);
  lVar8 = BN_CTX_get(param_3);
  if (lVar8 == 0) {
LAB_14f6e9080:
    BN_CTX_end(param_3);
    BN_CTX_free(lVar9);
    return 0xffffffff;
  }
  iVar2 = (**(code **)(*param_1 + 0x30))(param_1,uVar3,uVar4,uVar5,param_3);
  if (((iVar2 != 0) &&
      (iVar2 = (**(code **)(*param_2 + 0x30))(param_2,uVar6,uVar7,lVar8,param_3), iVar2 != 0)) &&
     ((iVar2 = BN_cmp(uVar3,uVar6), iVar2 == 0 &&
      (((iVar2 = BN_cmp(uVar4,uVar7), iVar2 == 0 && (iVar2 = BN_cmp(uVar5,lVar8), iVar2 == 0)) &&
       (iVar2 = EC_POINT_cmp(param_1,param_1[1],param_2[1],param_3), iVar2 == 0)))))) {
    lVar8 = param_1[3];
    lVar1 = param_2[3];
    if ((param_1[2] == 0) || (param_2[2] == 0)) goto LAB_14f6e9080;
    iVar2 = BN_cmp();
    if ((iVar2 == 0) && (iVar2 = BN_cmp(lVar8,lVar1), iVar2 == 0)) goto LAB_14f6e9050;
  }
  lVar10 = 1;
LAB_14f6e9050:
  BN_CTX_end(param_3);
  BN_CTX_free(lVar9);
  return lVar10;
}

// EC_GROUP_copy @ 14f6e90a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_GROUP_copy(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  void *_Dst;
  
  if (*(longlong *)(*param_1 + 0x20) == 0) {
    ERR_put_error(0x10,0x6a,0x42,"crypto\\ec\\ec_lib.c",0x85,0x14f6e90b0);
    return 0;
  }
  if (*param_1 != *param_2) {
    ERR_put_error(0x10,0x6a,0x65,"crypto\\ec\\ec_lib.c",0x89,0x14f6e90b0);
    return 0;
  }
  if (param_1 == param_2) {
    return 1;
  }
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(int *)(param_1 + 0x13) = (int)param_2[0x13];
  iVar1 = (int)param_2[0x13];
  if (iVar1 == 0) {
    param_1[0x14] = 0;
  }
  else if (iVar1 == 4) {
    lVar2 = EC_nistz256_pre_comp_dup(param_2[0x14]);
    param_1[0x14] = lVar2;
  }
  else if (iVar1 == 5) {
    lVar2 = EC_ec_pre_comp_dup(param_2[0x14]);
    param_1[0x14] = lVar2;
  }
  if (param_2[0x12] == 0) {
    BN_MONT_CTX_free(param_1[0x12]);
    param_1[0x12] = 0;
  }
  else {
    if (param_1[0x12] == 0) {
      lVar2 = BN_MONT_CTX_new();
      param_1[0x12] = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    lVar2 = BN_MONT_CTX_copy(param_1[0x12],param_2[0x12]);
    if (lVar2 == 0) {
      return 0;
    }
  }
  if (param_2[1] == 0) {
    EC_POINT_clear_free(param_1[1]);
    param_1[1] = 0;
  }
  else {
    if (param_1[1] == 0) {
      lVar2 = EC_POINT_new(param_1);
      param_1[1] = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    uVar3 = EC_POINT_copy(param_1[1],param_2[1]);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
  }
  if ((*(byte *)*param_2 & 2) == 0) {
    lVar2 = BN_copy(param_1[2],param_2[2]);
    if (lVar2 == 0) {
      return 0;
    }
    lVar2 = BN_copy(param_1[3],param_2[3]);
    if (lVar2 == 0) {
      return 0;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(int *)(param_1 + 5) = (int)param_2[5];
  if (param_2[6] == 0) {
    CRYPTO_free(param_1[6],"crypto\\ec\\ec_lib.c",0xe2);
    param_1[6] = 0;
    param_1[7] = 0;
LAB_14f6e9328:
                    /* WARNING: Could not recover jumptable at 0x00014f6e9340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
    return uVar3;
  }
  CRYPTO_free(param_1[6],"crypto\\ec\\ec_lib.c",0xd9);
  _Dst = (void *)CRYPTO_malloc(param_2[7],"crypto\\ec\\ec_lib.c",0xda);
  param_1[6] = (longlong)_Dst;
  if (_Dst == (void *)0x0) {
    ERR_put_error(0x10,0x6a,0x41,"crypto\\ec\\ec_lib.c",0xdb);
  }
  else {
    memcpy(_Dst,(void *)param_2[6],param_2[7]);
    if (_Dst != (void *)0x0) {
      param_1[7] = param_2[7];
      goto LAB_14f6e9328;
    }
  }
  return 0;
}

// EC_GROUP_dup @ 14f6e9350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EC_GROUP_dup(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  lVar2 = EC_GROUP_new(*param_1);
  if (lVar2 != 0) {
    iVar1 = EC_GROUP_copy(lVar2,param_1);
    if (iVar1 != 0) {
      return lVar2;
    }
    EC_GROUP_free(lVar2);
  }
  return 0;
}

// EC_GROUP_free @ 14f6e93c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_GROUP_free(longlong *param_1)

{
  longlong *plVar1;
  
  if (param_1 != (longlong *)0x0) {
    if (*(code **)(*param_1 + 0x10) != (code *)0x0) {
      (**(code **)(*param_1 + 0x10))();
    }
    EC_pre_comp_free(param_1);
    BN_MONT_CTX_free(param_1[0x12]);
    plVar1 = (longlong *)param_1[1];
    if (plVar1 != (longlong *)0x0) {
      if (*(code **)(*plVar1 + 0x58) != (code *)0x0) {
        (**(code **)(*plVar1 + 0x58))(plVar1);
      }
      CRYPTO_free(plVar1,"crypto\\ec\\ec_lib.c",0x2af);
    }
    BN_free(param_1[2]);
    BN_free(param_1[3]);
    CRYPTO_free(param_1[6],"crypto\\ec\\ec_lib.c",0x6b);
    CRYPTO_free(param_1,"crypto\\ec\\ec_lib.c",0x6c);
  }
  return;
}

// EC_GROUP_get0_cofactor @ 14f6e9480

undefined8 EC_GROUP_get0_cofactor(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}

// EC_GROUP_get0_generator @ 14f6e9490

undefined8 EC_GROUP_get0_generator(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}

// EC_GROUP_get0_order @ 14f6e94a0

undefined8 EC_GROUP_get0_order(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}

// EC_GROUP_get0_seed @ 14f6e94b0

undefined8 EC_GROUP_get0_seed(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}

// EC_GROUP_get_asn1_flag @ 14f6e94c0

undefined4 EC_GROUP_get_asn1_flag(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}

// EC_GROUP_get_cofactor @ 14f6e94d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool EC_GROUP_get_cofactor(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar2 = BN_copy(param_2);
    if (lVar2 != 0) {
      iVar1 = BN_is_zero(*(undefined8 *)(param_1 + 0x18));
      return iVar1 == 0;
    }
  }
  return false;
}

// EC_GROUP_get_curve @ 14f6e9530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_GROUP_get_curve(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x30) == (code *)0x0) {
    ERR_put_error(0x10,0x123,0x42,"crypto\\ec\\ec_lib.c",0x20a);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f6e9575. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x30))();
  return uVar1;
}

// EC_GROUP_get_curve_GF2m @ 14f6e9580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_GROUP_get_curve_GF2m(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x30) == (code *)0x0) {
    ERR_put_error(0x10,0x123,0x42,"crypto\\ec\\ec_lib.c",0x20a);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f6e95c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x30))();
  return uVar1;
}

// EC_GROUP_get_curve_GFp @ 14f6e95d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_GROUP_get_curve_GFp(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x30) == (code *)0x0) {
    ERR_put_error(0x10,0x123,0x42,"crypto\\ec\\ec_lib.c",0x20a);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f6e9615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x30))();
  return uVar1;
}

// EC_GROUP_get_curve_name @ 14f6e9620

undefined4 EC_GROUP_get_curve_name(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}

// EC_GROUP_get_degree @ 14f6e9630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_GROUP_get_degree(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x38) == (code *)0x0) {
    ERR_put_error(0x10,0xad,0x42,"crypto\\ec\\ec_lib.c",0x22f);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f6e9675. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x38))();
  return uVar1;
}

// EC_GROUP_get_order @ 14f6e9690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool EC_GROUP_get_order(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar2 = BN_copy(param_2);
    if (lVar2 != 0) {
      iVar1 = BN_is_zero(param_2);
      return iVar1 == 0;
    }
  }
  return false;
}

// EC_GROUP_get_point_conversion_form @ 14f6e96e0

undefined4 EC_GROUP_get_point_conversion_form(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}

// EC_GROUP_get_seed_len @ 14f6e96f0

undefined8 EC_GROUP_get_seed_len(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}

// EC_GROUP_have_precompute_mult @ 14f6e9700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_GROUP_have_precompute_mult(longlong *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (*(longlong *)(*param_1 + 0xf0) == 0) {
    uVar1 = ec_wNAF_have_precompute_mult();
    return uVar1;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x100);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f6e9733. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}

// EC_GROUP_method_of @ 14f6e9750

undefined8 EC_GROUP_method_of(undefined8 *param_1)

{
  return *param_1;
}

// EC_GROUP_new @ 14f6e9760

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * EC_GROUP_new(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6e976c;
  if (param_1 == (byte *)0x0) {
    ERR_put_error(0x10,0x6c,0x6c,"crypto\\ec\\ec_lib.c",0x19,0x14f6e976c);
    return (undefined8 *)0x0;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    ERR_put_error(0x10,0x6c,0x42,"crypto\\ec\\ec_lib.c",0x1d,0x14f6e976c);
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)CRYPTO_zalloc(0xa8,"crypto\\ec\\ec_lib.c",0x21);
  if (puVar2 == (undefined8 *)0x0) {
    ERR_put_error(0x10,0x6c,0x41,"crypto\\ec\\ec_lib.c",0x23,uVar4);
    return (undefined8 *)0x0;
  }
  *puVar2 = param_1;
  if ((*param_1 & 2) == 0) {
    lVar3 = BN_new();
    puVar2[2] = lVar3;
    if (lVar3 == 0) goto LAB_14f6e9858;
    lVar3 = BN_new();
    puVar2[3] = lVar3;
    if (lVar3 == 0) goto LAB_14f6e9858;
  }
  *(undefined4 *)((longlong)puVar2 + 0x24) = 1;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 4;
  iVar1 = (**(code **)(param_1 + 8))(puVar2);
  if (iVar1 != 0) {
    return puVar2;
  }
LAB_14f6e9858:
  BN_free(puVar2[2]);
  BN_free(puVar2[3]);
  CRYPTO_free(puVar2,"crypto\\ec\\ec_lib.c",0x39);
  return (undefined8 *)0x0;
}

// EC_GROUP_order_bits @ 14f6e98a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_GROUP_order_bits(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f6e98b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}

// EC_GROUP_precompute_mult @ 14f6e98c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_GROUP_precompute_mult(longlong *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (*(longlong *)(*param_1 + 0xf0) == 0) {
    uVar1 = ec_wNAF_precompute_mult();
    return uVar1;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xf8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f6e98f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 1;
}

// EC_GROUP_set_asn1_flag @ 14f6e9910

void EC_GROUP_set_asn1_flag(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}

// EC_GROUP_set_curve @ 14f6e9920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_GROUP_set_curve(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x28) == (code *)0x0) {
    ERR_put_error(0x10,0x124,0x42,"crypto\\ec\\ec_lib.c",0x200);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f6e9965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x28))();
  return uVar1;
}

// EC_GROUP_set_curve_GF2m @ 14f6e9970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_GROUP_set_curve_GF2m(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x28) == (code *)0x0) {
    ERR_put_error(0x10,0x124,0x42,"crypto\\ec\\ec_lib.c",0x200);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f6e99b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x28))();
  return uVar1;
}

// EC_GROUP_set_curve_GFp @ 14f6e99c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_GROUP_set_curve_GFp(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x28) == (code *)0x0) {
    ERR_put_error(0x10,0x124,0x42,"crypto\\ec\\ec_lib.c",0x200);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f6e9a05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x28))();
  return uVar1;
}

// EC_GROUP_set_curve_name @ 14f6e9a10

void EC_GROUP_set_curve_name(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}

// EC_GROUP_set_generator @ 14f6e9a20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EC_GROUP_set_generator(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f6e9a3b;
  if (param_2 == 0) {
    uVar5 = 0x14e;
    uVar4 = 0x43;
  }
  else if (((*(longlong *)(param_1 + 0x40) == 0) || (iVar1 = BN_is_zero(), iVar1 != 0)) ||
          (iVar1 = BN_is_negative(*(undefined8 *)(param_1 + 0x40)), iVar1 != 0)) {
    uVar5 = 0x155;
    uVar4 = 0x67;
  }
  else {
    if (((param_3 != 0) && (iVar1 = BN_is_zero(param_3), iVar1 == 0)) &&
       (iVar1 = BN_is_negative(param_3), iVar1 == 0)) {
      iVar1 = BN_num_bits(*(undefined8 *)(param_1 + 0x40));
      iVar2 = BN_num_bits(param_3);
      if (iVar2 <= iVar1 + 1) {
        if ((param_4 == 0) || (iVar1 = BN_is_negative(param_4), iVar1 == 0)) {
          if (*(longlong *)(param_1 + 8) == 0) {
            lVar3 = EC_POINT_new(param_1);
            *(longlong *)(param_1 + 8) = lVar3;
            if (lVar3 == 0) {
              return 0;
            }
          }
          iVar1 = EC_POINT_copy(*(undefined8 *)(param_1 + 8),param_2);
          if (iVar1 == 0) {
            return 0;
          }
          lVar3 = BN_copy(*(undefined8 *)(param_1 + 0x10),param_3);
          if (lVar3 == 0) {
            return 0;
          }
          if ((param_4 == 0) || (iVar1 = BN_is_zero(param_4), iVar1 != 0)) {
            iVar1 = FUN_14f6eada0(param_1);
            if (iVar1 == 0) {
              BN_set_word(*(undefined8 *)(param_1 + 0x18),0);
              return 0;
            }
          }
          else {
            lVar3 = BN_copy(*(undefined8 *)(param_1 + 0x18),param_4);
            if (lVar3 == 0) {
              return 0;
            }
          }
          iVar1 = BN_is_odd(*(undefined8 *)(param_1 + 0x10));
          if (iVar1 == 0) {
            BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x90));
            *(undefined8 *)(param_1 + 0x90) = 0;
            return 1;
          }
          uVar6 = FUN_14f6eaf70(param_1);
          return uVar6;
        }
        uVar5 = 0x16a;
        uVar4 = 0xa4;
        goto LAB_14f6e9bd5;
      }
    }
    uVar5 = 0x160;
    uVar4 = 0x7a;
  }
LAB_14f6e9bd5:
  ERR_put_error(0x10,0x6f,uVar4,"crypto\\ec\\ec_lib.c",uVar5,uVar6);
  return 0;
}

// EC_GROUP_set_point_conversion_form @ 14f6e9c10

void EC_GROUP_set_point_conversion_form(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}

// EC_GROUP_set_seed @ 14f6e9c20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

size_t EC_GROUP_set_seed(longlong param_1,void *param_2,size_t param_3)

{
  void *_Dst;
  undefined8 uVar1;
  
  uVar1 = 0x14f6e9c35;
  CRYPTO_free(*(undefined8 *)(param_1 + 0x30),"crypto\\ec\\ec_lib.c",0x1e1);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if ((param_3 != 0) && (param_2 != (void *)0x0)) {
    _Dst = (void *)CRYPTO_malloc(param_3,"crypto\\ec\\ec_lib.c",0x1e8);
    *(void **)(param_1 + 0x30) = _Dst;
    if (_Dst == (void *)0x0) {
      ERR_put_error(0x10,0x11e,0x41,"crypto\\ec\\ec_lib.c",0x1e9,uVar1);
      return 0;
    }
    memcpy(_Dst,param_2,param_3);
    *(size_t *)(param_1 + 0x38) = param_3;
    return param_3;
  }
  return 1;
}

// EC_KEY_get_ex_data @ 14f6e9d00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_KEY_get_ex_data(longlong param_1)

{
  CRYPTO_get_ex_data(param_1 + 0x40);
  return;
}

// EC_KEY_set_ex_data @ 14f6e9d20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_KEY_set_ex_data(longlong param_1)

{
  CRYPTO_set_ex_data(param_1 + 0x40);
  return;
}

// EC_METHOD_get_field_type @ 14f6e9d40

undefined4 EC_METHOD_get_field_type(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// EC_POINT_add @ 14f6e9d50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_POINT_add(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0xb0) == (code *)0x0) {
    uVar4 = 0x36f;
    uVar3 = 0x42;
  }
  else {
    if ((((lVar2 == *param_2) &&
         ((((iVar1 = (int)param_1[4], iVar1 == 0 || ((int)param_2[1] == 0)) ||
           (iVar1 == (int)param_2[1])) && (lVar2 == *param_3)))) &&
        ((((iVar1 == 0 || ((int)param_3[1] == 0)) || (iVar1 == (int)param_3[1])) &&
         (lVar2 == *param_4)))) &&
       (((iVar1 == 0 || ((int)param_4[1] == 0)) || (iVar1 == (int)param_4[1])))) {
                    /* WARNING: Could not recover jumptable at 0x00014f6e9dcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar2 + 0xb0))(param_1);
      return uVar3;
    }
    uVar4 = 0x374;
    uVar3 = 0x65;
  }
  ERR_put_error(0x10,0x70,uVar3,"crypto\\ec\\ec_lib.c",uVar4,0x14f6e9d5c);
  return 0;
}

// EC_POINT_clear_free @ 14f6e9e00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_POINT_clear_free(longlong *param_1)

{
  code *pcVar1;
  
  if (param_1 != (longlong *)0x0) {
    pcVar1 = *(code **)(*param_1 + 0x60);
    if ((pcVar1 != (code *)0x0) || (pcVar1 = *(code **)(*param_1 + 0x58), pcVar1 != (code *)0x0)) {
      (*pcVar1)();
    }
    CRYPTO_clear_free(param_1,0x30,"crypto\\ec\\ec_lib.c",699);
  }
  return;
}

// EC_POINT_cmp @ 14f6e9e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_POINT_cmp(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0xd8) == (code *)0x0) {
    uVar4 = 0x3bc;
    uVar3 = 0x42;
  }
  else {
    if (((lVar2 == *param_2) &&
        (((iVar1 = (int)param_1[4], iVar1 == 0 || ((int)param_2[1] == 0)) ||
         (iVar1 == (int)param_2[1])))) &&
       ((lVar2 == *param_3 &&
        (((iVar1 == 0 || ((int)param_3[1] == 0)) || (iVar1 == (int)param_3[1])))))) {
                    /* WARNING: Could not recover jumptable at 0x00014f6e9ec6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar2 + 0xd8))(param_1);
      return uVar3;
    }
    uVar4 = 0x3c0;
    uVar3 = 0x65;
  }
  ERR_put_error(0x10,0x71,uVar3,"crypto\\ec\\ec_lib.c",uVar4,0x14f6e9e6c);
  return 0xffffffff;
}

// EC_POINT_copy @ 14f6e9f00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_POINT_copy(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x68);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar3 = 0x2c1;
    uVar2 = 0x42;
  }
  else {
    if (*param_1 == *param_2) {
      if ((((int)param_1[1] == (int)param_2[1]) || ((int)param_1[1] == 0)) || ((int)param_2[1] == 0)
         ) {
        if (param_1 == param_2) {
          return 1;
        }
                    /* WARNING: Could not recover jumptable at 0x00014f6e9f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*UNRECOVERED_JUMPTABLE)();
        return uVar1;
      }
    }
    uVar3 = 0x2c8;
    uVar2 = 0x65;
  }
  ERR_put_error(0x10,0x72,uVar2,"crypto\\ec\\ec_lib.c",uVar3);
  return 0;
}

// EC_POINT_dbl @ 14f6e9f90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_POINT_dbl(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0xb8) == (code *)0x0) {
    uVar4 = 0x37e;
    uVar3 = 0x42;
  }
  else {
    if (((lVar2 == *param_2) &&
        (((iVar1 = (int)param_1[4], iVar1 == 0 || ((int)param_2[1] == 0)) ||
         (iVar1 == (int)param_2[1])))) &&
       ((lVar2 == *param_3 &&
        (((iVar1 == 0 || ((int)param_3[1] == 0)) || (iVar1 == (int)param_3[1])))))) {
                    /* WARNING: Could not recover jumptable at 0x00014f6e9ff6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar2 + 0xb8))(param_1);
      return uVar3;
    }
    uVar4 = 0x382;
    uVar3 = 0x65;
  }
  ERR_put_error(0x10,0x73,uVar3,"crypto\\ec\\ec_lib.c",uVar4,0x14f6e9f9c);
  return 0;
}

// EC_POINT_dup @ 14f6ea030

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EC_POINT_dup(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = EC_POINT_new(param_2);
  if (lVar2 != 0) {
    iVar1 = EC_POINT_copy(lVar2,param_1);
    if (iVar1 != 0) {
      return lVar2;
    }
    EC_POINT_free(lVar2);
  }
  return 0;
}

// EC_POINT_free @ 14f6ea0a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_POINT_free(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if (*(code **)(*param_1 + 0x58) != (code *)0x0) {
      (**(code **)(*param_1 + 0x58))();
    }
    CRYPTO_free(param_1,"crypto\\ec\\ec_lib.c",0x2af);
  }
  return;
}

// EC_POINT_get_Jprojective_coordinates_GFp @ 14f6ea0f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_POINT_get_Jprojective_coordinates_GFp(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x80);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar3 = 0x310;
    uVar2 = 0x42;
  }
  else {
    if ((*param_1 == *param_2) &&
       ((((int)param_1[4] == 0 || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1]))))
    {
                    /* WARNING: Could not recover jumptable at 0x00014f6ea13b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return uVar1;
    }
    uVar3 = 0x315;
    uVar2 = 0x65;
  }
  ERR_put_error(0x10,0x75,uVar2,"crypto\\ec\\ec_lib.c",uVar3);
  return 0;
}

// EC_POINT_get_affine_coordinates @ 14f6ea170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EC_POINT_get_affine_coordinates
          (longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f6ea18a;
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x90) == 0) {
    uVar5 = 0x34b;
    uVar4 = 0x42;
LAB_14f6ea27a:
    ERR_put_error(0x10,0x125,uVar4,"crypto\\ec\\ec_lib.c",uVar5,uVar6);
    return 0;
  }
  if ((lVar1 != *param_2) ||
     (((iVar2 = (int)param_1[4], iVar2 != 0 && ((int)param_2[1] != 0)) && (iVar2 != (int)param_2[1])
      ))) {
    uVar5 = 0x34f;
    uVar4 = 0x65;
    goto LAB_14f6ea27a;
  }
  if (*(code **)(lVar1 + 200) == (code *)0x0) {
    uVar6 = 0x399;
    uVar3 = 0x42;
  }
  else {
    if (((iVar2 == 0) || ((int)param_2[1] == 0)) || (iVar2 == (int)param_2[1])) {
      iVar2 = (**(code **)(lVar1 + 200))(param_1,param_2);
      if (iVar2 != 0) {
        uVar5 = 0x353;
        uVar4 = 0x6a;
        goto LAB_14f6ea27a;
      }
      goto LAB_14f6ea201;
    }
    uVar6 = 0x39d;
    uVar3 = 0x65;
  }
  ERR_put_error(0x10,0x76,uVar3,"crypto\\ec\\ec_lib.c",uVar6,0x14f6ea18a);
LAB_14f6ea201:
  uVar6 = (**(code **)(*param_1 + 0x90))(param_1,param_2,param_3,param_4,param_5);
  return uVar6;
}

// EC_POINT_get_affine_coordinates_GF2m @ 14f6ea2b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_POINT_get_affine_coordinates_GF2m(void)

{
  EC_POINT_get_affine_coordinates();
  return;
}

// EC_POINT_get_affine_coordinates_GFp @ 14f6ea2d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_POINT_get_affine_coordinates_GFp(void)

{
  EC_POINT_get_affine_coordinates();
  return;
}

// EC_POINT_invert @ 14f6ea2f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_POINT_invert(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xc0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar3 = 0x38b;
    uVar2 = 0x42;
  }
  else {
    if ((*param_1 == *param_2) &&
       ((((int)param_1[4] == 0 || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1]))))
    {
                    /* WARNING: Could not recover jumptable at 0x00014f6ea33b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return uVar1;
    }
    uVar3 = 0x38f;
    uVar2 = 0x65;
  }
  ERR_put_error(0x10,0xd2,uVar2,"crypto\\ec\\ec_lib.c",uVar3);
  return 0;
}

// EC_POINT_is_at_infinity @ 14f6ea370

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_POINT_is_at_infinity(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 200);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar3 = 0x399;
    uVar2 = 0x42;
  }
  else {
    if (*param_1 == *param_2) {
      if ((int)param_1[4] == 0) {
LAB_14f6ea3b4:
                    /* WARNING: Could not recover jumptable at 0x00014f6ea3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*UNRECOVERED_JUMPTABLE)();
        return uVar1;
      }
      if (((int)param_2[1] == 0) || ((int)param_1[4] == (int)param_2[1])) goto LAB_14f6ea3b4;
    }
    uVar3 = 0x39d;
    uVar2 = 0x65;
  }
  ERR_put_error(0x10,0x76,uVar2,"crypto\\ec\\ec_lib.c",uVar3);
  return 0;
}

// EC_POINT_is_on_curve @ 14f6ea3f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_POINT_is_on_curve(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xd0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar3 = 0x3ae;
    uVar2 = 0x42;
  }
  else {
    if ((*param_1 == *param_2) &&
       ((((int)param_1[4] == 0 || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1]))))
    {
                    /* WARNING: Could not recover jumptable at 0x00014f6ea43b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return uVar1;
    }
    uVar3 = 0x3b2;
    uVar2 = 0x65;
  }
  ERR_put_error(0x10,0x77,uVar2,"crypto\\ec\\ec_lib.c",uVar3);
  return 0;
}

// EC_POINT_make_affine @ 14f6ea470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_POINT_make_affine(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xe0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar3 = 0x3c9;
    uVar2 = 0x42;
  }
  else {
    if ((*param_1 == *param_2) &&
       ((((int)param_1[4] == 0 || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1]))))
    {
                    /* WARNING: Could not recover jumptable at 0x00014f6ea4bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return uVar1;
    }
    uVar3 = 0x3cd;
    uVar2 = 0x65;
  }
  ERR_put_error(0x10,0x78,uVar2,"crypto\\ec\\ec_lib.c",uVar3);
  return 0;
}

// EC_POINT_mul @ 14f6ea500

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_POINT_mul(void)

{
  EC_POINTs_mul();
  return;
}

// EC_POINT_new @ 14f6ea560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * EC_POINT_new(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6ea56c;
  if (param_1 == (longlong *)0x0) {
    ERR_put_error(0x10,0x79,0x43,"crypto\\ec\\ec_lib.c",0x28f,0x14f6ea56c);
    return (longlong *)0x0;
  }
  if (*(longlong *)(*param_1 + 0x50) == 0) {
    ERR_put_error(0x10,0x79,0x42,"crypto\\ec\\ec_lib.c",0x293,0x14f6ea56c);
    return (longlong *)0x0;
  }
  plVar3 = (longlong *)CRYPTO_zalloc(0x30,"crypto\\ec\\ec_lib.c",0x297);
  if (plVar3 == (longlong *)0x0) {
    ERR_put_error(0x10,0x79,0x41,"crypto\\ec\\ec_lib.c",0x299,uVar4);
    return (longlong *)0x0;
  }
  lVar1 = *param_1;
  *plVar3 = lVar1;
  *(int *)(plVar3 + 1) = (int)param_1[4];
  iVar2 = (**(code **)(lVar1 + 0x50))(plVar3);
  if (iVar2 == 0) {
    CRYPTO_free(plVar3,"crypto\\ec\\ec_lib.c",0x2a1);
    return (longlong *)0x0;
  }
  return plVar3;
}

// EC_POINT_set_Jprojective_coordinates_GFp @ 14f6ea670

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_POINT_set_Jprojective_coordinates_GFp(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x78);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar3 = 0x2fd;
    uVar2 = 0x42;
  }
  else {
    if ((*param_1 == *param_2) &&
       ((((int)param_1[4] == 0 || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1]))))
    {
                    /* WARNING: Could not recover jumptable at 0x00014f6ea6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return uVar1;
    }
    uVar3 = 0x302;
    uVar2 = 0x65;
  }
  ERR_put_error(0x10,0x7e,uVar2,"crypto\\ec\\ec_lib.c",uVar3);
  return 0;
}

// EC_POINT_set_affine_coordinates @ 14f6ea6f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EC_POINT_set_affine_coordinates
          (longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f6ea700;
  pcVar1 = *(code **)(*param_1 + 0x88);
  if (pcVar1 == (code *)0x0) {
    ERR_put_error(0x10,0x126,0x42,"crypto\\ec\\ec_lib.c",0x322,0x14f6ea700);
    return 0;
  }
  if ((*param_1 != *param_2) ||
     ((((int)param_1[4] != 0 && ((int)param_2[1] != 0)) && ((int)param_1[4] != (int)param_2[1])))) {
    ERR_put_error(0x10,0x126,0x65,"crypto\\ec\\ec_lib.c",0x326,0x14f6ea700);
    return 0;
  }
  uVar4 = param_5;
  iVar2 = (*pcVar1)(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  pcVar1 = *(code **)(*param_1 + 0xd0);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (pcVar1 == (code *)0x0) {
    uVar4 = CONCAT44(uVar3,0x3ae);
    uVar3 = 0x42;
  }
  else {
    if ((*param_1 == *param_2) &&
       ((((int)param_1[4] == 0 || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1]))))
    {
      iVar2 = (*pcVar1)(param_1,param_2,param_5,pcVar1,uVar4);
      uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if (0 < iVar2) {
        return 1;
      }
      goto LAB_14f6ea7fd;
    }
    uVar4 = CONCAT44(uVar3,0x3b2);
    uVar3 = 0x65;
  }
  ERR_put_error(0x10,0x77,uVar3,"crypto\\ec\\ec_lib.c",uVar4,uVar5);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
LAB_14f6ea7fd:
  ERR_put_error(0x10,0x126,0x6b,"crypto\\ec\\ec_lib.c",CONCAT44(uVar3,0x32d),uVar5);
  return 0;
}

// EC_POINT_set_affine_coordinates_GF2m @ 14f6ea870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_POINT_set_affine_coordinates_GF2m(void)

{
  EC_POINT_set_affine_coordinates();
  return;
}

// EC_POINT_set_affine_coordinates_GFp @ 14f6ea890

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_POINT_set_affine_coordinates_GFp(void)

{
  EC_POINT_set_affine_coordinates();
  return;
}

// EC_POINT_set_to_infinity @ 14f6ea8b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_POINT_set_to_infinity(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x70);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    ERR_put_error(0x10,0x7f,0x42,"crypto\\ec\\ec_lib.c",0x2ec);
    return 0;
  }
  if (*param_1 != *param_2) {
    ERR_put_error(0x10,0x7f,0x65,"crypto\\ec\\ec_lib.c",0x2f0);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f6ea91f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}

// EC_POINTs_make_affine @ 14f6ea930

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_POINTs_make_affine(longlong *param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xe8);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    ERR_put_error(0x10,0x88,0x42,"crypto\\ec\\ec_lib.c",0x3d9,0x14f6ea945);
    return 0;
  }
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      plVar2 = *(longlong **)(param_3 + uVar3 * 8);
      if ((*param_1 != *plVar2) ||
         ((((int)param_1[4] != 0 && (iVar1 = (int)plVar2[1], iVar1 != 0)) &&
          ((int)param_1[4] != iVar1)))) {
        ERR_put_error(0x10,0x88,0x65,"crypto\\ec\\ec_lib.c",0x3de,0x14f6ea945);
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00014f6ea9d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return uVar4;
}

// EC_POINTs_mul @ 14f6eaa20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong EC_POINTs_mul(longlong *param_1,longlong *param_2,longlong param_3,ulonglong param_4,
                       longlong param_5,undefined8 param_6,ulonglong param_7)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14f6eaa39;
  if ((*param_1 == *param_2) &&
     (((iVar1 = (int)param_1[4], iVar1 == 0 || ((int)param_2[1] == 0)) || (iVar1 == (int)param_2[1])
      ))) {
    if ((param_3 == 0) && (param_4 == 0)) {
      uVar5 = EC_POINT_set_to_infinity();
    }
    else {
      uVar5 = 0;
      if (param_4 != 0) {
        do {
          plVar3 = *(longlong **)(param_5 + uVar5 * 8);
          if ((*param_1 != *plVar3) ||
             (((iVar1 != 0 && (iVar2 = (int)plVar3[1], iVar2 != 0)) && (iVar1 != iVar2)))) {
            uVar8 = 0x3fd;
            uVar7 = 0x65;
            goto LAB_14f6eaaef;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < param_4);
      }
      uVar6 = 0;
      if ((param_7 == 0) && (param_7 = BN_CTX_secure_new(), uVar6 = param_7, param_7 == 0)) {
        uVar8 = 0x403;
        uVar7 = 0x44;
LAB_14f6eaaef:
        ERR_put_error(0x10,0x122,uVar7,"crypto\\ec\\ec_lib.c",uVar8);
        uVar5 = 0;
      }
      else if (*(code **)(*param_1 + 0xf0) == (code *)0x0) {
        uVar4 = ec_wNAF_mul(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar8);
        uVar5 = (ulonglong)uVar4;
        BN_CTX_free(uVar6);
      }
      else {
        uVar4 = (**(code **)(*param_1 + 0xf0))();
        uVar5 = (ulonglong)uVar4;
        BN_CTX_free(uVar6);
      }
    }
  }
  else {
    ERR_put_error(0x10,0x122,0x65,"crypto\\ec\\ec_lib.c",0x3f4);
    uVar5 = 0;
  }
  return uVar5;
}

// EC_pre_comp_free @ 14f6eabc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_pre_comp_free(longlong param_1)

{
  if (*(int *)(param_1 + 0x98) == 4) {
    EC_nistz256_pre_comp_free(*(undefined8 *)(param_1 + 0xa0));
  }
  else if (*(int *)(param_1 + 0x98) == 5) {
    EC_ec_pre_comp_free(*(undefined8 *)(param_1 + 0xa0));
    *(undefined8 *)(param_1 + 0xa0) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  return;
}

// FUN_14f6eac30 @ 14f6eac30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f6eac30(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x90) == 0) {
LAB_14f6eac6b:
    lVar3 = 0;
  }
  else {
    lVar4 = 0;
    if (param_4 == 0) {
      param_4 = BN_CTX_secure_new();
      lVar4 = param_4;
      if (param_4 == 0) goto LAB_14f6eac6b;
    }
    BN_CTX_start(param_4);
    lVar2 = BN_CTX_get(param_4);
    lVar3 = 0;
    if (lVar2 != 0) {
      iVar1 = BN_set_word(lVar2,2);
      lVar3 = 0;
      if (iVar1 != 0) {
        iVar1 = BN_sub(lVar2,*(undefined8 *)(param_1 + 0x10),lVar2);
        if (iVar1 != 0) {
          iVar1 = BN_mod_exp_mont(param_2,param_3,lVar2,*(undefined8 *)(param_1 + 0x10),param_4,
                                  *(undefined8 *)(param_1 + 0x90));
          lVar3 = 0;
          if (iVar1 != 0) {
            lVar3 = 1;
          }
        }
      }
    }
    BN_CTX_end(param_4);
    BN_CTX_free(lVar4);
  }
  return lVar3;
}

// ec_group_do_inverse_ord @ 14f6ead30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_group_do_inverse_ord(longlong *param_1)

{
  if (*(code **)(*param_1 + 0x188) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f6ead50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x188))();
    return;
  }
  FUN_14f6eac30();
  return;
}

// ec_group_simple_order_bits @ 14f6ead70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_group_simple_order_bits(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return 0;
  }
  uVar1 = BN_num_bits();
  return uVar1;
}

// FUN_14f6eada0 @ 14f6eada0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f6eada0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  
  uVar7 = 0;
  iVar1 = BN_num_bits(param_1[8]);
  iVar2 = BN_num_bits(param_1[2]);
  if (iVar2 <= (iVar1 + 1) / 2 + 3) {
    BN_set_word(param_1[3],0);
    return 1;
  }
  lVar3 = BN_CTX_new();
  uVar8 = 0;
  if (lVar3 != 0) {
    BN_CTX_start(lVar3);
    lVar4 = BN_CTX_get(lVar3);
    uVar8 = 0;
    if (lVar4 != 0) {
      if (*(int *)(*param_1 + 4) == 0x197) {
        BN_set_word(lVar4,0);
        iVar1 = BN_num_bits(param_1[8]);
        iVar1 = BN_set_bit(lVar4,iVar1 + -1);
        bVar9 = iVar1 == 0;
      }
      else {
        lVar5 = BN_copy(lVar4,param_1[8]);
        bVar9 = lVar5 == 0;
      }
      uVar8 = uVar7;
      if (!bVar9) {
        iVar1 = BN_rshift1(param_1[3],param_1[2]);
        if (iVar1 != 0) {
          iVar1 = BN_add(param_1[3],param_1[3],lVar4);
          if (iVar1 != 0) {
            lVar4 = param_1[3];
            uVar6 = BN_value_one();
            iVar1 = BN_add(lVar4,lVar4,uVar6);
            if (iVar1 != 0) {
              iVar1 = BN_div(param_1[3],0,param_1[3],param_1[2],lVar3);
              uVar8 = 0;
              if (iVar1 != 0) {
                uVar8 = 1;
              }
            }
          }
        }
      }
    }
    BN_CTX_end(lVar3);
    BN_CTX_free(lVar3);
  }
  return uVar8;
}

// ec_point_blind_coordinates @ 14f6eaf00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_point_blind_coordinates(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 400) == (code *)0x0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f6eaf29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 400))();
  return uVar1;
}

// FUN_14f6eaf70 @ 14f6eaf70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6eaf70(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = BN_CTX_new();
  uVar4 = 0;
  BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x90));
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (lVar2 != 0) {
    lVar3 = BN_MONT_CTX_new();
    *(longlong *)(param_1 + 0x90) = lVar3;
    if (lVar3 != 0) {
      iVar1 = BN_MONT_CTX_set(lVar3,*(undefined8 *)(param_1 + 0x10),lVar2);
      if (iVar1 == 0) {
        BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x90));
        *(undefined8 *)(param_1 + 0x90) = 0;
      }
      else {
        uVar4 = 1;
      }
    }
  }
  BN_CTX_free(lVar2);
  return uVar4;
}

