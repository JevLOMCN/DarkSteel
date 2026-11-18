// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 37

// EC_KEY_can_sign @ 14f6eb050

undefined8 EC_KEY_can_sign(longlong param_1)

{
  byte *pbVar1;
  
  if (((*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) &&
      (pbVar1 = (byte *)**(undefined8 **)(param_1 + 0x18), pbVar1 != (byte *)0x0)) &&
     ((*pbVar1 & 4) == 0)) {
    return 1;
  }
  return 0;
}

// EC_KEY_check_key @ 14f6eb080

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_KEY_check_key(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (((param_1 == 0) || (*(longlong **)(param_1 + 0x18) == (longlong *)0x0)) ||
     (*(longlong *)(param_1 + 0x20) == 0)) {
    uVar3 = 0x103;
    uVar2 = 0x43;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(param_1 + 0x18) + 0x160);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f6eb0c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    uVar3 = 0x108;
    uVar2 = 0x42;
  }
  ERR_put_error(0x10,0xb1,uVar2,"crypto\\ec\\ec_key.c",uVar3);
  return 0;
}

// EC_KEY_clear_flags @ 14f6eb100

void EC_KEY_clear_flags(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & ~param_2;
  return;
}

// EC_KEY_copy @ 14f6eb110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * EC_KEY_copy(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if ((param_1 == (longlong *)0x0) || (param_2 == (longlong *)0x0)) {
    ERR_put_error(0x10,0xb2,0x43,"crypto\\ec\\ec_key.c",0x4d,0x14f6eb120);
    return (longlong *)0x0;
  }
  if (*param_2 != *param_1) {
    pcVar1 = *(code **)(*param_1 + 0x18);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
    if (((longlong *)param_1[3] != (longlong *)0x0) &&
       (pcVar1 = *(code **)(*(longlong *)param_1[3] + 0x178), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_1);
    }
    iVar2 = ENGINE_finish(param_1[1]);
    if (iVar2 == 0) {
      return (longlong *)0x0;
    }
    param_1[1] = 0;
  }
  if (param_2[3] != 0) {
    uVar3 = EC_GROUP_method_of();
    EC_GROUP_free(param_1[3]);
    lVar4 = EC_GROUP_new(uVar3);
    param_1[3] = lVar4;
    if (lVar4 == 0) {
      return (longlong *)0x0;
    }
    iVar2 = EC_GROUP_copy(lVar4,param_2[3]);
    if (iVar2 == 0) {
      return (longlong *)0x0;
    }
    if (param_2[4] != 0) {
      EC_POINT_free(param_1[4]);
      lVar4 = EC_POINT_new(param_2[3]);
      param_1[4] = lVar4;
      if (lVar4 == 0) {
        return (longlong *)0x0;
      }
      iVar2 = EC_POINT_copy(lVar4,param_2[4]);
      if (iVar2 == 0) {
        return (longlong *)0x0;
      }
    }
    if (param_2[5] != 0) {
      if (param_1[5] == 0) {
        lVar4 = BN_new();
        param_1[5] = lVar4;
        if (lVar4 == 0) {
          return (longlong *)0x0;
        }
      }
      lVar4 = BN_copy(param_1[5],param_2[5]);
      if (lVar4 == 0) {
        return (longlong *)0x0;
      }
      if ((*(code **)(*(longlong *)param_2[3] + 0x170) != (code *)0x0) &&
         (iVar2 = (**(code **)(*(longlong *)param_2[3] + 0x170))(param_1,param_2), iVar2 == 0)) {
        return (longlong *)0x0;
      }
    }
  }
  *(int *)(param_1 + 6) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  iVar2 = CRYPTO_dup_ex_data(8,param_1 + 8,param_2 + 8);
  if (iVar2 == 0) {
    return (longlong *)0x0;
  }
  if (*param_2 != *param_1) {
    if ((param_2[1] != 0) && (iVar2 = ENGINE_init(), iVar2 == 0)) {
      return (longlong *)0x0;
    }
    param_1[1] = param_2[1];
    *param_1 = *param_2;
  }
  if ((*(code **)(*param_2 + 0x20) != (code *)0x0) &&
     (iVar2 = (**(code **)(*param_2 + 0x20))(param_1,param_2), iVar2 == 0)) {
    return (longlong *)0x0;
  }
  return param_1;
}

// EC_KEY_decoded_from_explicit_params @ 14f6eb320

undefined4 EC_KEY_decoded_from_explicit_params(longlong param_1)

{
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x28);
  }
  return 0xffffffff;
}

// EC_KEY_dup @ 14f6eb340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EC_KEY_dup(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = EC_KEY_new_method(*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar2 = EC_KEY_copy(lVar1,param_1);
    if (lVar2 != 0) {
      return lVar1;
    }
    EC_KEY_free(lVar1);
  }
  return 0;
}

// EC_KEY_free @ 14f6eb3a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_KEY_free(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    LOCK();
    plVar1 = param_1 + 7;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 < 2) {
      if ((*param_1 != 0) && (pcVar2 = *(code **)(*param_1 + 0x18), pcVar2 != (code *)0x0)) {
        (*pcVar2)();
      }
      ENGINE_finish(param_1[1]);
      if (((longlong *)param_1[3] != (longlong *)0x0) &&
         (pcVar2 = *(code **)(*(longlong *)param_1[3] + 0x178), pcVar2 != (code *)0x0)) {
        (*pcVar2)(param_1);
      }
      CRYPTO_free_ex_data(8,param_1,param_1 + 8);
      CRYPTO_THREAD_lock_free(param_1[9]);
      EC_GROUP_free(param_1[3]);
      EC_POINT_free(param_1[4]);
      BN_clear_free(param_1[5]);
      CRYPTO_clear_free(param_1,0x50,"crypto\\ec\\ec_key.c");
    }
  }
  return;
}

// EC_KEY_generate_key @ 14f6eb460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_KEY_generate_key(longlong *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if ((param_1 == (longlong *)0x0) || (param_1[3] == 0)) {
    uVar2 = 0xb9;
    uVar1 = 0x43;
  }
  else {
    if (*(code **)(*param_1 + 0x40) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f6eb489. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*param_1 + 0x40))();
      return uVar1;
    }
    uVar2 = 0xbe;
    uVar1 = 0x98;
  }
  ERR_put_error(0x10,0xb3,uVar1,"crypto\\ec\\ec_key.c",uVar2);
  return 0;
}

// EC_KEY_get0_group @ 14f6eb4e0

undefined8 EC_KEY_get0_group(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}

// EC_KEY_get0_private_key @ 14f6eb4f0

undefined8 EC_KEY_get0_private_key(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}

// EC_KEY_get0_public_key @ 14f6eb500

undefined8 EC_KEY_get0_public_key(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}

// EC_KEY_get_conv_form @ 14f6eb510

undefined4 EC_KEY_get_conv_form(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}

// EC_KEY_get_enc_flags @ 14f6eb520

undefined4 EC_KEY_get_enc_flags(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}

// EC_KEY_get_flags @ 14f6eb530

undefined4 EC_KEY_get_flags(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}

// EC_KEY_key2buf @ 14f6eb540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_KEY_key2buf(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) &&
     (*(longlong *)(param_1 + 0x18) != 0)) {
    uVar1 = EC_POINT_point2buf(*(longlong *)(param_1 + 0x18),*(longlong *)(param_1 + 0x20),param_2,
                               param_3,param_4);
    return uVar1;
  }
  return 0;
}

// EC_KEY_new @ 14f6eb590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_KEY_new(void)

{
  EC_KEY_new_method(0);
  return;
}

// EC_KEY_new_by_curve_name @ 14f6eb5b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * EC_KEY_new_by_curve_name(undefined4 param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)EC_KEY_new_method(0);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = EC_GROUP_new_by_curve_name(param_1);
    plVar2[3] = lVar3;
    if (lVar3 != 0) {
      if (*(code **)(*plVar2 + 0x28) == (code *)0x0) {
        return plVar2;
      }
      iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,lVar3);
      if (iVar1 != 0) {
        return plVar2;
      }
    }
    EC_KEY_free(plVar2);
  }
  return (longlong *)0x0;
}

// EC_KEY_oct2key @ 14f6eb630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_KEY_oct2key(longlong param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6eb64a;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      uVar2 = EC_POINT_new();
      *(undefined8 *)(param_1 + 0x20) = uVar2;
    }
    if ((*(longlong *)(param_1 + 0x20) != 0) &&
       (iVar1 = EC_POINT_oct2point(*(undefined8 *)(param_1 + 0x18),*(longlong *)(param_1 + 0x20),
                                   param_2,param_3,param_4,uVar3), iVar1 != 0)) {
      if ((*(byte *)**(undefined8 **)(param_1 + 0x18) & 2) == 0) {
        *(uint *)(param_1 + 0x34) = *param_2 & 0xfffffffe;
      }
      return 1;
    }
  }
  return 0;
}

// EC_KEY_oct2priv @ 14f6eb6e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_KEY_oct2priv(longlong param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  if ((*(longlong **)(param_1 + 0x18) != (longlong *)0x0) &&
     (lVar1 = **(longlong **)(param_1 + 0x18), lVar1 != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x148);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f6eb738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    ERR_put_error(0x10,0xff,0x42,"crypto\\ec\\ec_key.c",0x290);
  }
  return 0;
}

// EC_KEY_precompute_mult @ 14f6eb750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_KEY_precompute_mult(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return 0;
  }
  uVar1 = EC_GROUP_precompute_mult();
  return uVar1;
}

// EC_KEY_priv2buf @ 14f6eb780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EC_KEY_priv2buf(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6eb796;
  if ((*(longlong **)(param_1 + 0x18) == (longlong *)0x0) ||
     (lVar2 = **(longlong **)(param_1 + 0x18), lVar2 == 0)) {
    return 0;
  }
  pcVar1 = *(code **)(lVar2 + 0x140);
  if (pcVar1 == (code *)0x0) {
    ERR_put_error(0x10,0x100,0x42,"crypto\\ec\\ec_key.c",0x26d,0x14f6eb796);
    return 0;
  }
  lVar2 = (*pcVar1)(param_1,0,0);
  if (lVar2 != 0) {
    lVar3 = CRYPTO_malloc(lVar2,"crypto\\ec\\ec_key.c",0x2ad);
    if (lVar3 == 0) {
      ERR_put_error(0x10,0x117,0x41,"crypto\\ec\\ec_key.c",0x2ae,uVar4);
    }
    else {
      lVar2 = EC_KEY_priv2oct(param_1,lVar3,lVar2);
      if (lVar2 != 0) {
        *param_2 = lVar3;
        return lVar2;
      }
      CRYPTO_free(lVar3,"crypto\\ec\\ec_key.c",0x2b3);
    }
    return 0;
  }
  return 0;
}

// EC_KEY_priv2oct @ 14f6eb890

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_KEY_priv2oct(longlong param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  if ((*(longlong **)(param_1 + 0x18) != (longlong *)0x0) &&
     (lVar1 = **(longlong **)(param_1 + 0x18), lVar1 != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x140);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f6eb8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    ERR_put_error(0x10,0x100,0x42,"crypto\\ec\\ec_key.c",0x26d);
  }
  return 0;
}

// EC_KEY_set_asn1_flag @ 14f6eb900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_KEY_set_asn1_flag(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    EC_GROUP_set_asn1_flag();
    return;
  }
  return;
}

// EC_KEY_set_conv_form @ 14f6eb930

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_KEY_set_conv_form(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    EC_GROUP_set_point_conversion_form();
    return;
  }
  return;
}

// EC_KEY_set_enc_flags @ 14f6eb960

void EC_KEY_set_enc_flags(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}

// EC_KEY_set_flags @ 14f6eb970

void EC_KEY_set_flags(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | param_2;
  return;
}

// EC_KEY_set_group @ 14f6eb980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong EC_KEY_set_group(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (*(code **)(*param_1 + 0x28) != (code *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x28))();
    if ((int)uVar1 == 0) {
      return uVar1;
    }
  }
  EC_GROUP_free(param_1[3]);
  lVar2 = EC_GROUP_dup(param_2);
  param_1[3] = lVar2;
  return (ulonglong)(lVar2 != 0);
}

// EC_KEY_set_private_key @ 14f6eb9f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_KEY_set_private_key(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((longlong *)param_1[3] == (longlong *)0x0) || (*(longlong *)param_1[3] == 0)) {
    return 0;
  }
  lVar2 = EC_GROUP_get0_order();
  if ((lVar2 != 0) && (iVar1 = BN_is_zero(lVar2), iVar1 == 0)) {
    if ((*(code **)(*(longlong *)param_1[3] + 0x150) != (code *)0x0) &&
       (iVar1 = (**(code **)(*(longlong *)param_1[3] + 0x150))(param_1,param_2), iVar1 == 0)) {
      return 0;
    }
    if ((*(code **)(*param_1 + 0x30) != (code *)0x0) &&
       (iVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2), iVar1 == 0)) {
      return 0;
    }
    if (param_2 == 0) {
      BN_clear_free(param_1[5]);
      param_1[5] = 0;
    }
    else {
      lVar3 = BN_dup(param_2);
      if (lVar3 != 0) {
        BN_set_flags(lVar3,4);
        iVar1 = bn_get_top(lVar2);
        lVar2 = bn_wexpand(lVar3,iVar1 + 2);
        if (lVar2 != 0) {
          BN_clear_free(param_1[5]);
          param_1[5] = lVar3;
          return 1;
        }
        BN_clear_free(lVar3);
        return 0;
      }
    }
  }
  return 0;
}

// EC_KEY_set_public_key @ 14f6ebb20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong EC_KEY_set_public_key(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (*(code **)(*param_1 + 0x38) != (code *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x38))();
    if ((int)uVar1 == 0) {
      return uVar1;
    }
  }
  EC_POINT_free(param_1[4]);
  lVar2 = EC_POINT_dup(param_2,param_1[3]);
  param_1[4] = lVar2;
  return (ulonglong)(lVar2 != 0);
}

// EC_KEY_set_public_key_affine_coordinates @ 14f6ebb90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EC_KEY_set_public_key_affine_coordinates(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar8;
  undefined4 uVar9;
  undefined8 uVar7;
  
  uVar7 = 0;
  uVar6 = 0;
  if ((((param_1 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) && (param_2 != 0)) && (param_3 != 0)
     ) {
    lVar2 = BN_CTX_new();
    if (lVar2 != 0) {
      BN_CTX_start(lVar2);
      lVar3 = EC_POINT_new(*(undefined8 *)(param_1 + 0x18));
      if (lVar3 != 0) {
        uVar4 = BN_CTX_get(lVar2);
        lVar5 = BN_CTX_get(lVar2);
        if ((lVar5 != 0) &&
           (iVar1 = EC_POINT_set_affine_coordinates
                              (*(undefined8 *)(param_1 + 0x18),lVar3,param_2,param_3,lVar2),
           iVar1 != 0)) {
          lVar8 = lVar2;
          iVar1 = EC_POINT_get_affine_coordinates
                            (*(undefined8 *)(param_1 + 0x18),lVar3,uVar4,lVar5,lVar2);
          uVar9 = (undefined4)((ulonglong)lVar8 >> 0x20);
          if (iVar1 != 0) {
            iVar1 = BN_cmp(param_2,uVar4);
            uVar7 = uVar6;
            if (((iVar1 == 0) && (iVar1 = BN_cmp(param_3,lVar5), iVar1 == 0)) &&
               ((iVar1 = BN_cmp(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x40)),
                iVar1 < 0 &&
                (iVar1 = BN_cmp(param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x40)),
                iVar1 < 0)))) {
              iVar1 = EC_KEY_set_public_key(param_1,lVar3);
              if ((iVar1 != 0) && (iVar1 = EC_KEY_check_key(param_1), iVar1 != 0)) {
                uVar7 = 1;
              }
            }
            else {
              ERR_put_error(0x10,0xe5,0x92,"crypto\\ec\\ec_key.c",CONCAT44(uVar9,0x17b));
            }
          }
        }
      }
      BN_CTX_end(lVar2);
      BN_CTX_free(lVar2);
      EC_POINT_free(lVar3);
      return uVar7;
    }
    return 0;
  }
  ERR_put_error(0x10,0xe5,0x43,"crypto\\ec\\ec_key.c",0x15c);
  return 0;
}

// EC_KEY_up_ref @ 14f6ebd80

bool EC_KEY_up_ref(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x38);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}

// ec_key_simple_check_key @ 14f6ebda0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_key_simple_check_key(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar7 = 0x14f6ebdba;
  lVar3 = 0;
  lVar4 = 0;
  if (((param_1 == 0) || (*(longlong *)(param_1 + 0x18) == 0)) ||
     (*(longlong *)(param_1 + 0x20) == 0)) {
    ERR_put_error(0x10,0x102,0x43,"crypto\\ec\\ec_key.c",0x117,0x14f6ebdba);
    return 0;
  }
  iVar1 = EC_POINT_is_at_infinity();
  if (iVar1 != 0) {
    ERR_put_error(0x10,0x102,0x6a,"crypto\\ec\\ec_key.c",CONCAT44(uVar6,0x11c),uVar7);
    lVar4 = lVar3;
    lVar2 = lVar3;
    goto LAB_14f6ebfb9;
  }
  lVar2 = BN_CTX_new();
  if ((lVar2 == 0) || (lVar4 = EC_POINT_new(*(undefined8 *)(param_1 + 0x18)), lVar4 == 0))
  goto LAB_14f6ebfb9;
  iVar1 = EC_POINT_is_on_curve
                    (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),lVar2);
  if (iVar1 < 1) {
    ERR_put_error(0x10,0x102,0x6b,"crypto\\ec\\ec_key.c",CONCAT44(uVar6,0x127),uVar7);
    lVar3 = 0;
    goto LAB_14f6ebfb9;
  }
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar1 = BN_is_zero(uVar7);
  if (iVar1 == 0) {
    iVar1 = EC_POINT_mul(*(undefined8 *)(param_1 + 0x18),lVar4,0,*(undefined8 *)(param_1 + 0x20),
                         uVar7,lVar2);
    if (iVar1 == 0) {
      uVar5 = 0x131;
      uVar7 = 0x10;
    }
    else {
      iVar1 = EC_POINT_is_at_infinity(*(undefined8 *)(param_1 + 0x18),lVar4);
      if (iVar1 != 0) {
        if (*(longlong *)(param_1 + 0x28) != 0) {
          iVar1 = BN_cmp(*(longlong *)(param_1 + 0x28),uVar7);
          if (-1 < iVar1) {
            uVar5 = 0x13e;
            goto LAB_14f6ebf0f;
          }
          uVar6 = 0;
          iVar1 = EC_POINT_mul(*(undefined8 *)(param_1 + 0x18),lVar4,*(undefined8 *)(param_1 + 0x28)
                               ,0,0,lVar2);
          if (iVar1 == 0) {
            ERR_put_error(0x10,0x102,0x10,"crypto\\ec\\ec_key.c",CONCAT44(uVar6,0x143));
            goto LAB_14f6ebfb9;
          }
          iVar1 = EC_POINT_cmp(*(undefined8 *)(param_1 + 0x18),lVar4,*(undefined8 *)(param_1 + 0x20)
                               ,lVar2);
          if (iVar1 != 0) {
            ERR_put_error(0x10,0x102,0x7b,"crypto\\ec\\ec_key.c",CONCAT44(uVar6,0x147));
            goto LAB_14f6ebfb9;
          }
        }
        lVar3 = 1;
        goto LAB_14f6ebfb9;
      }
      uVar5 = 0x135;
LAB_14f6ebf0f:
      uVar7 = 0x82;
    }
  }
  else {
    uVar5 = 0x12d;
    uVar7 = 0x7a;
  }
  ERR_put_error(0x10,0x102,uVar7,"crypto\\ec\\ec_key.c",uVar5);
LAB_14f6ebfb9:
  BN_CTX_free(lVar2);
  EC_POINT_free(lVar4);
  return lVar3;
}

// ec_key_simple_generate_key @ 14f6ec010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_key_simple_generate_key(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = 0;
  lVar2 = BN_CTX_new();
  lVar3 = lVar6;
  lVar5 = lVar6;
  if ((lVar2 != 0) &&
     (((lVar3 = *(longlong *)(param_1 + 0x28), lVar3 != 0 ||
       (lVar3 = BN_new(), lVar5 = 0, lVar3 != 0)) &&
      (lVar4 = EC_GROUP_get0_order(*(undefined8 *)(param_1 + 0x18)), lVar5 = lVar6, lVar4 != 0)))) {
    do {
      iVar1 = BN_priv_rand_range(lVar3,lVar4);
      lVar5 = 0;
      if (iVar1 == 0) goto LAB_14f6ec0d9;
      iVar1 = BN_is_zero(lVar3);
    } while (iVar1 != 0);
    lVar5 = *(longlong *)(param_1 + 0x20);
    if (((lVar5 != 0) || (lVar5 = EC_POINT_new(*(undefined8 *)(param_1 + 0x18)), lVar5 != 0)) &&
       (iVar1 = EC_POINT_mul(*(undefined8 *)(param_1 + 0x18),lVar5,lVar3,0,0,lVar2), lVar6 = 0,
       iVar1 != 0)) {
      *(longlong *)(param_1 + 0x28) = lVar3;
      lVar6 = 1;
      *(longlong *)(param_1 + 0x20) = lVar5;
    }
  }
LAB_14f6ec0d9:
  if (*(longlong *)(param_1 + 0x20) == 0) {
    EC_POINT_free(lVar5);
  }
  if (*(longlong *)(param_1 + 0x28) != lVar3) {
    BN_free(lVar3);
  }
  BN_CTX_free(lVar2);
  return lVar6;
}

// ec_key_simple_generate_public_key @ 14f6ec120

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_key_simple_generate_public_key(longlong param_1)

{
  EC_POINT_mul(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28),0,0,0,0x14f6ec12a);
  return;
}

// ec_key_simple_oct2priv @ 14f6ec160

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_key_simple_oct2priv(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6ec175;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar1 = BN_secure_new();
    *(undefined8 *)(param_1 + 0x28) = uVar1;
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    ERR_put_error(0x10,0x103,0x41,"crypto\\ec\\ec_key.c",0x29b,uVar3);
    return 0;
  }
  lVar2 = BN_bin2bn(param_2,param_3);
  if (lVar2 == 0) {
    ERR_put_error(0x10,0x103,3,"crypto\\ec\\ec_key.c",0x29f,uVar3);
    return 0;
  }
  return 1;
}

// ec_key_simple_priv2oct @ 14f6ec230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_key_simple_priv2oct(longlong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6ec24a;
  iVar1 = EC_GROUP_order_bits(*(undefined8 *)(param_1 + 0x18));
  iVar1 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  uVar2 = (ulonglong)iVar1;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    if (param_2 == 0) {
      return uVar2;
    }
    if (uVar2 <= param_3) {
      iVar1 = BN_bn2binpad(*(longlong *)(param_1 + 0x28),param_2,iVar1);
      if (iVar1 != -1) {
        return uVar2;
      }
      ERR_put_error(0x10,0x104,100,"crypto\\ec\\ec_key.c",0x284,uVar3);
    }
  }
  return 0;
}

// ossl_ec_key_gen @ 14f6ec2e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_ec_key_gen(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f6ec2f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x158))();
  return;
}

