// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 32

// ec_GFp_simple_group_init @ 14f79c470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GFp_simple_group_init(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = BN_new();
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = BN_new();
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  lVar2 = BN_new();
  *(longlong *)(param_1 + 0x68) = lVar2;
  if (((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x60) != 0)) && (lVar2 != 0)
     ) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    return 1;
  }
  BN_free();
  BN_free(*(undefined8 *)(param_1 + 0x60));
  BN_free(*(undefined8 *)(param_1 + 0x68));
  return 0;
}

// ec_GFp_simple_group_finish @ 14f79c4f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GFp_simple_group_finish(longlong param_1)

{
  BN_free(*(undefined8 *)(param_1 + 0x40));
  BN_free(*(undefined8 *)(param_1 + 0x60));
  BN_free(*(undefined8 *)(param_1 + 0x68));
  return;
}

// ec_GFp_simple_group_clear_finish @ 14f79c530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GFp_simple_group_clear_finish(longlong param_1)

{
  BN_clear_free(*(undefined8 *)(param_1 + 0x40));
  BN_clear_free(*(undefined8 *)(param_1 + 0x60));
  BN_clear_free(*(undefined8 *)(param_1 + 0x68));
  return;
}

// ec_GFp_simple_group_copy @ 14f79c570

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GFp_simple_group_copy(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = BN_copy(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x40));
  if (lVar1 != 0) {
    lVar1 = BN_copy(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_2 + 0x60));
    if (lVar1 != 0) {
      lVar1 = BN_copy(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_2 + 0x68));
      if (lVar1 != 0) {
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
        return 1;
      }
    }
  }
  return 0;
}

// ec_GFp_simple_group_set_curve @ 14f79c5f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_GFp_simple_group_set_curve
                   (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14f79c608;
  lVar6 = 0;
  lVar5 = 0;
  iVar1 = BN_num_bits(param_2);
  if ((iVar1 < 3) || (iVar1 = BN_is_odd(param_2), iVar1 == 0)) {
    ERR_put_error(0x10,0xa6,0x67,"crypto\\ec\\ecp_smpl.c",0x90,uVar8);
    return 0;
  }
  lVar2 = lVar6;
  if ((param_5 == 0) && (lVar2 = BN_CTX_new(), param_5 = lVar2, lVar2 == 0)) {
    return 0;
  }
  BN_CTX_start(param_5);
  lVar3 = BN_CTX_get(param_5);
  if ((lVar3 != 0) && (lVar4 = BN_copy(param_1[8],param_2), lVar4 != 0)) {
    BN_set_negative(param_1[8],0);
    iVar1 = BN_nnmod(lVar3,param_3,param_2,param_5);
    if (iVar1 != 0) {
      if (*(code **)(*param_1 + 0x128) == (code *)0x0) {
        lVar6 = BN_copy(param_1[0xc],lVar3);
        bVar7 = lVar6 == 0;
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x128))(param_1,param_1[0xc],lVar3,param_5);
        bVar7 = iVar1 == 0;
      }
      lVar6 = lVar5;
      if ((((!bVar7) && (iVar1 = BN_nnmod(param_1[0xd],param_4,param_2,param_5), iVar1 != 0)) &&
          ((*(code **)(*param_1 + 0x128) == (code *)0x0 ||
           (iVar1 = (**(code **)(*param_1 + 0x128))(param_1,param_1[0xd],param_1[0xd],param_5),
           iVar1 != 0)))) && (iVar1 = BN_add_word(lVar3,3), iVar1 != 0)) {
        iVar1 = BN_cmp(lVar3,param_1[8]);
        *(uint *)(param_1 + 0xe) = (uint)(iVar1 == 0);
        lVar6 = 1;
      }
    }
  }
  BN_CTX_end(param_5);
  BN_CTX_free(lVar2);
  return lVar6;
}

// ec_GFp_simple_group_get_curve @ 14f79c7d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_GFp_simple_group_get_curve
                   (longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                   longlong param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar4 = 0;
  if ((param_2 != 0) && (lVar2 = BN_copy(param_2,param_1[8]), lVar2 == 0)) {
    return 0;
  }
  lVar2 = lVar4;
  if ((param_3 != 0) || (param_4 != 0)) {
    if (*(longlong *)(*param_1 + 0x130) == 0) {
      if ((param_3 != 0) && (lVar3 = BN_copy(param_3,param_1[0xc]), lVar3 == 0)) goto LAB_14f79c8c1;
      lVar2 = 0;
      if (param_4 != 0) {
        lVar2 = BN_copy(param_4,param_1[0xd]);
        bVar5 = lVar2 == 0;
        lVar2 = lVar4;
        goto LAB_14f79c8b9;
      }
    }
    else {
      if ((param_5 == 0) && (param_5 = BN_CTX_new(), lVar2 = param_5, param_5 == 0)) {
        return 0;
      }
      if ((param_3 != 0) &&
         (iVar1 = (**(code **)(*param_1 + 0x130))(param_1,param_3,param_1[0xc],param_5), iVar1 == 0)
         ) goto LAB_14f79c8c1;
      if (param_4 != 0) {
        iVar1 = (**(code **)(*param_1 + 0x130))(param_1,param_4,param_1[0xd],param_5);
        bVar5 = iVar1 == 0;
LAB_14f79c8b9:
        if (bVar5) goto LAB_14f79c8c1;
      }
    }
  }
  lVar4 = 1;
LAB_14f79c8c1:
  BN_CTX_free(lVar2);
  return lVar4;
}

// ec_GFp_simple_group_get_degree @ 14f79c8f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GFp_simple_group_get_degree(longlong param_1)

{
  BN_num_bits(*(undefined8 *)(param_1 + 0x40));
  return;
}

// ec_GFp_simple_group_check_discriminant @ 14f79c910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_GFp_simple_group_check_discriminant(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar11;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong lVar10;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar13 = 0x14f79c922;
  lVar1 = param_1[8];
  lVar10 = 0;
  lVar9 = 0;
  lVar8 = lVar10;
  lVar7 = lVar10;
  if ((param_2 == 0) && (param_2 = BN_CTX_new(), lVar8 = param_2, param_2 == 0)) {
    ERR_put_error(0x10,0xa5,0x41,"crypto\\ec\\ecp_smpl.c",CONCAT44(uVar12,0xfe),uVar13);
    goto LAB_14f79caff;
  }
  BN_CTX_start(param_2);
  uVar3 = BN_CTX_get(param_2);
  uVar13 = BN_CTX_get(param_2);
  uVar4 = BN_CTX_get(param_2);
  uVar5 = BN_CTX_get(param_2);
  lVar6 = BN_CTX_get(param_2);
  if (lVar6 == 0) goto LAB_14f79caff;
  if (*(code **)(*param_1 + 0x130) == (code *)0x0) {
    lVar6 = BN_copy(uVar3,param_1[0xc]);
    lVar7 = lVar9;
    if (lVar6 == 0) goto LAB_14f79caff;
    lVar7 = BN_copy(uVar13,param_1[0xd]);
    bVar11 = lVar7 == 0;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x130))(param_1,uVar3,param_1[0xc],param_2);
    if (iVar2 == 0) goto LAB_14f79caff;
    iVar2 = (**(code **)(*param_1 + 0x130))(param_1,uVar13,param_1[0xd],param_2);
    bVar11 = iVar2 == 0;
  }
  lVar7 = lVar10;
  if (bVar11) goto LAB_14f79caff;
  iVar2 = BN_is_zero(uVar3);
  if (iVar2 == 0) {
    iVar2 = BN_is_zero(uVar13);
    if (iVar2 == 0) {
      iVar2 = BN_mod_sqr(uVar4,uVar3,lVar1,param_2);
      lVar7 = lVar9;
      if ((((iVar2 == 0) || (iVar2 = BN_mod_mul(uVar5,uVar4,uVar3,lVar1,param_2), iVar2 == 0)) ||
          (iVar2 = BN_lshift(uVar4,uVar5,2), iVar2 == 0)) ||
         (((iVar2 = BN_mod_sqr(uVar5,uVar13,lVar1,param_2), iVar2 == 0 ||
           (iVar2 = BN_mul_word(uVar5,0x1b), iVar2 == 0)) ||
          (iVar2 = BN_mod_add(uVar3,uVar4,uVar5,lVar1,param_2), uVar13 = uVar3, iVar2 == 0))))
      goto LAB_14f79caff;
      goto LAB_14f79cae1;
    }
  }
  else {
LAB_14f79cae1:
    iVar2 = BN_is_zero(uVar13);
    lVar7 = lVar9;
    if (iVar2 != 0) goto LAB_14f79caff;
  }
  lVar7 = 1;
LAB_14f79caff:
  BN_CTX_end(param_2);
  BN_CTX_free(lVar8);
  return lVar7;
}

// ec_GFp_simple_point_init @ 14f79cb30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GFp_simple_point_init(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = BN_new();
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = BN_new();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  lVar2 = BN_new();
  *(longlong *)(param_1 + 0x20) = lVar2;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) && (lVar2 != 0)
     ) {
    return 1;
  }
  BN_free();
  BN_free(*(undefined8 *)(param_1 + 0x18));
  BN_free(*(undefined8 *)(param_1 + 0x20));
  return 0;
}

// ec_GFp_simple_point_finish @ 14f79cbb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GFp_simple_point_finish(longlong param_1)

{
  BN_free(*(undefined8 *)(param_1 + 0x10));
  BN_free(*(undefined8 *)(param_1 + 0x18));
  BN_free(*(undefined8 *)(param_1 + 0x20));
  return;
}

// ec_GFp_simple_point_clear_finish @ 14f79cbf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GFp_simple_point_clear_finish(longlong param_1)

{
  BN_clear_free(*(undefined8 *)(param_1 + 0x10));
  BN_clear_free(*(undefined8 *)(param_1 + 0x18));
  BN_clear_free(*(undefined8 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

// ec_GFp_simple_point_copy @ 14f79cc30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GFp_simple_point_copy(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = BN_copy(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
  if (lVar1 != 0) {
    lVar1 = BN_copy(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18));
    if (lVar1 != 0) {
      lVar1 = BN_copy(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20));
      if (lVar1 != 0) {
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
        return 1;
      }
    }
  }
  return 0;
}

// ec_GFp_simple_point_set_to_infinity @ 14f79ccb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ec_GFp_simple_point_set_to_infinity
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined4 *)(param_2 + 0x28) = 0;
  BN_set_word(*(undefined8 *)(param_2 + 0x20),0,param_3,param_4,0x14f79ccba);
  return 1;
}

// ec_GFp_simple_set_Jprojective_coordinates_GFp @ 14f79cce0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_GFp_simple_set_Jprojective_coordinates_GFp
                   (longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                   longlong param_5,longlong param_6)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = 0;
  lVar5 = 0;
  if ((param_6 == 0) && (lVar5 = BN_CTX_new(), param_6 = lVar5, lVar5 == 0)) {
    return 0;
  }
  if (((param_3 == 0) ||
      ((iVar3 = BN_nnmod(*(undefined8 *)(param_2 + 0x10),param_3,param_1[8],param_6), lVar7 = 0,
       iVar3 != 0 &&
       ((*(code **)(*param_1 + 0x128) == (code *)0x0 ||
        (iVar3 = (**(code **)(*param_1 + 0x128))
                           (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x10),
                            param_6), lVar7 = lVar6, iVar3 != 0)))))) &&
     ((param_4 == 0 ||
      ((iVar3 = BN_nnmod(*(undefined8 *)(param_2 + 0x18),param_4,param_1[8],param_6), lVar7 = lVar6,
       iVar3 != 0 &&
       ((*(code **)(*param_1 + 0x128) == (code *)0x0 ||
        (iVar3 = (**(code **)(*param_1 + 0x128))
                           (param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x18),
                            param_6), iVar3 != 0)))))))) {
    if (param_5 != 0) {
      iVar3 = BN_nnmod(*(undefined8 *)(param_2 + 0x20),param_5,param_1[8],param_6);
      lVar7 = lVar6;
      if (iVar3 == 0) goto LAB_14f79ce36;
      iVar3 = BN_is_one(*(undefined8 *)(param_2 + 0x20));
      pcVar1 = *(code **)(*param_1 + 0x128);
      if (pcVar1 != (code *)0x0) {
        if ((iVar3 == 0) || (pcVar2 = *(code **)(*param_1 + 0x138), pcVar2 == (code *)0x0)) {
          iVar4 = (*pcVar1)(param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x20),
                            param_6);
        }
        else {
          iVar4 = (*pcVar2)(param_1,*(undefined8 *)(param_2 + 0x20),param_6);
        }
        if (iVar4 == 0) goto LAB_14f79ce36;
      }
      *(int *)(param_2 + 0x28) = iVar3;
    }
    lVar7 = 1;
  }
LAB_14f79ce36:
  BN_CTX_free(lVar5);
  return lVar7;
}

// ec_GFp_simple_get_Jprojective_coordinates_GFp @ 14f79ce70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_GFp_simple_get_Jprojective_coordinates_GFp
                   (longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                   longlong param_5,longlong param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar4 = 0;
  lVar5 = 0;
  lVar2 = lVar4;
  lVar6 = lVar5;
  if (*(longlong *)(*param_1 + 0x130) == 0) {
    if (((param_3 != 0) && (lVar3 = BN_copy(param_3,*(undefined8 *)(param_2 + 0x10)), lVar3 == 0))
       || ((param_4 != 0 && (lVar3 = BN_copy(param_4,*(undefined8 *)(param_2 + 0x18)), lVar3 == 0)))
       ) goto LAB_14f79cf83;
    if (param_5 != 0) {
      lVar2 = BN_copy(param_5,*(undefined8 *)(param_2 + 0x20));
      bVar7 = lVar2 == 0;
      goto LAB_14f79cf7b;
    }
  }
  else {
    if ((param_6 == 0) && (lVar2 = BN_CTX_new(), param_6 = lVar2, lVar2 == 0)) {
      return 0;
    }
    if (((param_3 != 0) &&
        (iVar1 = (**(code **)(*param_1 + 0x130))
                           (param_1,param_3,*(undefined8 *)(param_2 + 0x10),param_6), lVar6 = lVar4,
        iVar1 == 0)) ||
       ((param_4 != 0 &&
        (iVar1 = (**(code **)(*param_1 + 0x130))
                           (param_1,param_4,*(undefined8 *)(param_2 + 0x18),param_6), lVar6 = lVar5,
        iVar1 == 0)))) goto LAB_14f79cf83;
    lVar4 = lVar2;
    if (param_5 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x130))
                        (param_1,param_5,*(undefined8 *)(param_2 + 0x20),param_6);
      bVar7 = iVar1 == 0;
LAB_14f79cf7b:
      lVar2 = lVar4;
      lVar6 = lVar5;
      if (bVar7) goto LAB_14f79cf83;
    }
  }
  lVar2 = lVar4;
  lVar6 = 1;
LAB_14f79cf83:
  BN_CTX_free(lVar2);
  return lVar6;
}

// ec_GFp_simple_point_set_affine_coordinates @ 14f79cfc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ec_GFp_simple_point_set_affine_coordinates
          (undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    ERR_put_error(0x10,0xa8,0x43,"crypto\\ec\\ecp_smpl.c",0x1e7,0x14f79cfda);
    uVar1 = 0;
  }
  else {
    uVar1 = BN_value_one();
    uVar1 = EC_POINT_set_Jprojective_coordinates_GFp(param_1,param_2,param_3,param_4,uVar1,param_5);
  }
  return uVar1;
}

// ec_GFp_simple_point_get_affine_coordinates @ 14f79d060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
ec_GFp_simple_point_get_affine_coordinates
          (longlong *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar9;
  undefined4 local_48;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  local_48 = 0;
  iVar2 = EC_POINT_is_at_infinity();
  if (iVar2 != 0) {
    ERR_put_error(0x10,0xa7,0x6a,"crypto\\ec\\ecp_smpl.c",CONCAT44(uVar9,0x1fb));
    return 0;
  }
  lVar7 = 0;
  if ((param_5 == 0) && (param_5 = BN_CTX_new(), lVar7 = param_5, param_5 == 0)) {
    return 0;
  }
  BN_CTX_start(param_5);
  uVar3 = BN_CTX_get(param_5);
  uVar4 = BN_CTX_get(param_5);
  uVar5 = BN_CTX_get(param_5);
  lVar6 = BN_CTX_get(param_5);
  if (lVar6 == 0) goto LAB_14f79d308;
  if (*(code **)(*param_1 + 0x130) == (code *)0x0) {
    uVar3 = *(undefined8 *)(param_2 + 0x20);
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x130))(param_1,uVar3,*(undefined8 *)(param_2 + 0x20),param_5);
    if (iVar2 == 0) goto LAB_14f79d308;
  }
  iVar2 = BN_is_one(uVar3);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x120))(param_1,uVar4,uVar3,param_5);
    if (iVar2 == 0) {
      ERR_put_error(0x10,0xa7,3,"crypto\\ec\\ecp_smpl.c",CONCAT44(uVar9,0x22e));
      goto LAB_14f79d308;
    }
    if (*(longlong *)(*param_1 + 0x128) == 0) {
      iVar2 = (**(code **)(*param_1 + 0x110))(param_1,uVar5,uVar4);
    }
    else {
      iVar2 = BN_mod_sqr(uVar5,uVar4,param_1[8],param_5);
    }
    if ((iVar2 == 0) ||
       ((param_3 != 0 &&
        (iVar2 = (**(code **)(*param_1 + 0x108))
                           (param_1,param_3,*(undefined8 *)(param_2 + 0x10),uVar5,param_5),
        iVar2 == 0)))) goto LAB_14f79d308;
    if (param_4 != 0) {
      if (*(longlong *)(*param_1 + 0x128) == 0) {
        iVar2 = (**(code **)(*param_1 + 0x108))(param_1,lVar6,uVar5,uVar4);
      }
      else {
        iVar2 = BN_mod_mul(lVar6,uVar5,uVar4,param_1[8],param_5);
      }
      if (iVar2 == 0) goto LAB_14f79d308;
      iVar2 = (**(code **)(*param_1 + 0x108))
                        (param_1,param_4,*(undefined8 *)(param_2 + 0x18),lVar6,param_5);
      goto LAB_14f79d2fc;
    }
  }
  else {
    pcVar1 = *(code **)(*param_1 + 0x130);
    if (pcVar1 == (code *)0x0) {
      if ((param_3 != 0) && (lVar6 = BN_copy(param_3,*(undefined8 *)(param_2 + 0x10)), lVar6 == 0))
      goto LAB_14f79d308;
      if (param_4 != 0) {
        lVar6 = BN_copy(param_4,*(undefined8 *)(param_2 + 0x18));
        bVar8 = lVar6 == 0;
        goto LAB_14f79d2fe;
      }
    }
    else {
      if ((param_3 != 0) &&
         (iVar2 = (*pcVar1)(param_1,param_3,*(undefined8 *)(param_2 + 0x10),param_5), iVar2 == 0))
      goto LAB_14f79d308;
      if (param_4 != 0) {
        iVar2 = (**(code **)(*param_1 + 0x130))
                          (param_1,param_4,*(undefined8 *)(param_2 + 0x18),param_5);
LAB_14f79d2fc:
        bVar8 = iVar2 == 0;
LAB_14f79d2fe:
        if (bVar8) goto LAB_14f79d308;
      }
    }
  }
  local_48 = 1;
LAB_14f79d308:
  BN_CTX_end(param_5);
  BN_CTX_free(lVar7);
  return local_48;
}

// ec_GFp_simple_add @ 14f79d350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_GFp_simple_add(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                           longlong param_5)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  bool bVar16;
  longlong local_48;
  
  uVar15 = 0;
  local_48 = 0;
  if (param_3 == param_4) {
    uVar5 = EC_POINT_dbl();
    return uVar5;
  }
  iVar3 = EC_POINT_is_at_infinity(param_1,param_3);
  lVar14 = param_4;
  if ((iVar3 != 0) ||
     (iVar3 = EC_POINT_is_at_infinity(param_1,param_4), lVar14 = param_3, iVar3 != 0)) {
    uVar5 = EC_POINT_copy(param_2,lVar14);
    return uVar5;
  }
  pcVar1 = *(code **)(*param_1 + 0x108);
  pcVar2 = *(code **)(*param_1 + 0x110);
  lVar14 = param_1[8];
  if ((param_5 == 0) && (param_5 = BN_CTX_new(), local_48 = param_5, param_5 == 0)) {
    return 0;
  }
  BN_CTX_start(param_5);
  uVar6 = BN_CTX_get(param_5);
  uVar7 = BN_CTX_get(param_5);
  uVar8 = BN_CTX_get(param_5);
  uVar9 = BN_CTX_get(param_5);
  uVar10 = BN_CTX_get(param_5);
  uVar11 = BN_CTX_get(param_5);
  lVar12 = BN_CTX_get(param_5);
  uVar4 = 0;
  if (lVar12 == 0) goto LAB_14f79d8c5;
  uVar4 = uVar15;
  if (*(int *)(param_4 + 0x28) == 0) {
    iVar3 = (*pcVar2)(param_1,uVar6,*(undefined8 *)(param_4 + 0x20),param_5);
    if (((iVar3 == 0) ||
        (iVar3 = (*pcVar1)(param_1,uVar7,*(undefined8 *)(param_3 + 0x10),uVar6,param_5), iVar3 == 0)
        ) || (iVar3 = (*pcVar1)(param_1,uVar6,uVar6,*(undefined8 *)(param_4 + 0x20),param_5),
             iVar3 == 0)) goto LAB_14f79d8c5;
    iVar3 = (*pcVar1)(param_1,uVar8,*(undefined8 *)(param_3 + 0x18),uVar6,param_5);
    bVar16 = iVar3 == 0;
  }
  else {
    lVar13 = BN_copy(uVar7,*(undefined8 *)(param_3 + 0x10));
    if (lVar13 == 0) goto LAB_14f79d8c5;
    lVar13 = BN_copy(uVar8,*(undefined8 *)(param_3 + 0x18));
    bVar16 = lVar13 == 0;
  }
  if (bVar16) goto LAB_14f79d8c5;
  if (*(int *)(param_3 + 0x28) == 0) {
    iVar3 = (*pcVar2)(param_1,uVar6,*(undefined8 *)(param_3 + 0x20),param_5);
    if (((iVar3 == 0) ||
        (iVar3 = (*pcVar1)(param_1,uVar9,*(undefined8 *)(param_4 + 0x10),uVar6,param_5), iVar3 == 0)
        ) || (iVar3 = (*pcVar1)(param_1,uVar6,uVar6,*(undefined8 *)(param_3 + 0x20),param_5),
             iVar3 == 0)) goto LAB_14f79d8c5;
    iVar3 = (*pcVar1)(param_1,uVar10,*(undefined8 *)(param_4 + 0x18),uVar6,param_5);
    bVar16 = iVar3 == 0;
  }
  else {
    lVar13 = BN_copy(uVar9,*(undefined8 *)(param_4 + 0x10));
    if (lVar13 == 0) goto LAB_14f79d8c5;
    lVar13 = BN_copy(uVar10,*(undefined8 *)(param_4 + 0x18));
    bVar16 = lVar13 == 0;
  }
  if (((bVar16) || (iVar3 = BN_mod_sub_quick(uVar11,uVar7,uVar9,lVar14), iVar3 == 0)) ||
     (iVar3 = BN_mod_sub_quick(lVar12,uVar8,uVar10,lVar14), iVar3 == 0)) goto LAB_14f79d8c5;
  iVar3 = BN_is_zero(uVar11);
  if (iVar3 != 0) {
    iVar3 = BN_is_zero(lVar12);
    if (iVar3 == 0) {
      BN_set_word(*(undefined8 *)(param_2 + 0x20),0);
      *(undefined4 *)(param_2 + 0x28) = 0;
      uVar4 = 1;
    }
    else {
      BN_CTX_end(param_5);
      uVar4 = EC_POINT_dbl(param_1,param_2,param_3,param_5);
      param_5 = 0;
    }
    goto LAB_14f79d8c5;
  }
  iVar3 = BN_mod_add_quick(uVar7,uVar7,uVar9,lVar14);
  if ((iVar3 == 0) || (iVar3 = BN_mod_add_quick(uVar8,uVar8,uVar10,lVar14), iVar3 == 0))
  goto LAB_14f79d8c5;
  if (*(int *)(param_3 + 0x28) == 0) {
LAB_14f79d709:
    if (*(int *)(param_4 + 0x28) == 0) {
      iVar3 = (*pcVar1)(param_1,uVar6,*(undefined8 *)(param_3 + 0x20),
                        *(undefined8 *)(param_4 + 0x20),param_5);
      bVar16 = iVar3 == 0;
    }
    else {
      lVar13 = BN_copy(uVar6,*(undefined8 *)(param_3 + 0x20));
      bVar16 = lVar13 == 0;
    }
LAB_14f79d738:
    if (bVar16) goto LAB_14f79d8c5;
    iVar3 = (*pcVar1)(param_1,*(undefined8 *)(param_2 + 0x20),uVar6,uVar11,param_5);
    bVar16 = iVar3 == 0;
  }
  else {
    if (*(int *)(param_4 + 0x28) == 0) {
      if (*(int *)(param_3 + 0x28) == 0) goto LAB_14f79d709;
      lVar13 = BN_copy(uVar6,*(undefined8 *)(param_4 + 0x20));
      bVar16 = lVar13 == 0;
      goto LAB_14f79d738;
    }
    lVar13 = BN_copy(*(undefined8 *)(param_2 + 0x20),uVar11);
    bVar16 = lVar13 == 0;
  }
  if (!bVar16) {
    *(undefined4 *)(param_2 + 0x28) = 0;
    iVar3 = (*pcVar2)(param_1,uVar6,lVar12,param_5);
    if (((((((iVar3 != 0) && (iVar3 = (*pcVar2)(param_1,uVar10,uVar11,param_5), iVar3 != 0)) &&
           (iVar3 = (*pcVar1)(param_1,uVar9,uVar7,uVar10,param_5), iVar3 != 0)) &&
          ((iVar3 = BN_mod_sub_quick(*(undefined8 *)(param_2 + 0x10),uVar6,uVar9,lVar14), iVar3 != 0
           && (iVar3 = BN_mod_lshift1_quick(uVar6,*(undefined8 *)(param_2 + 0x10),lVar14),
              iVar3 != 0)))) &&
         ((iVar3 = BN_mod_sub_quick(uVar6,uVar9,uVar6,lVar14), iVar3 != 0 &&
          ((iVar3 = (*pcVar1)(param_1,uVar6,uVar6,lVar12,param_5), iVar3 != 0 &&
           (iVar3 = (*pcVar1)(param_1,uVar11,uVar10,uVar11,param_5), iVar3 != 0)))))) &&
        (iVar3 = (*pcVar1)(param_1,uVar7,uVar8,uVar11,param_5), iVar3 != 0)) &&
       ((iVar3 = BN_mod_sub_quick(uVar6,uVar6,uVar7,lVar14), iVar3 != 0 &&
        ((iVar3 = BN_is_odd(uVar6), iVar3 == 0 || (iVar3 = BN_add(uVar6,uVar6,lVar14), iVar3 != 0)))
        ))) {
      iVar3 = BN_rshift1(*(undefined8 *)(param_2 + 0x18),uVar6);
      uVar4 = (uint)(iVar3 != 0);
    }
  }
LAB_14f79d8c5:
  BN_CTX_end(param_5);
  BN_CTX_free(local_48);
  return (ulonglong)uVar4;
}

// ec_GFp_simple_dbl @ 14f79d910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GFp_simple_dbl(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  bool bVar13;
  longlong local_38;
  undefined8 uVar12;
  
  uVar12 = 0;
  uVar11 = 0;
  local_38 = 0;
  iVar4 = EC_POINT_is_at_infinity(param_1,param_3);
  if (iVar4 != 0) {
    BN_set_word(*(undefined8 *)(param_2 + 0x20),0);
    *(undefined4 *)(param_2 + 0x28) = 0;
    return 1;
  }
  lVar1 = param_1[8];
  pcVar2 = *(code **)(*param_1 + 0x108);
  pcVar3 = *(code **)(*param_1 + 0x110);
  if ((param_4 == 0) && (param_4 = BN_CTX_new(), local_38 = param_4, param_4 == 0)) {
    return 0;
  }
  BN_CTX_start(param_4);
  lVar5 = BN_CTX_get(param_4);
  lVar6 = BN_CTX_get(param_4);
  uVar7 = BN_CTX_get(param_4);
  lVar8 = BN_CTX_get(param_4);
  if (lVar8 != 0) {
    lVar9 = lVar5;
    if (*(int *)(param_3 + 0x28) == 0) {
      if ((int)param_1[0xe] == 0) {
        iVar4 = (*pcVar3)(param_1,lVar5,*(undefined8 *)(param_3 + 0x10),param_4);
        uVar12 = uVar11;
        if ((((iVar4 == 0) || (iVar4 = BN_mod_lshift1_quick(lVar6,lVar5,lVar1), iVar4 == 0)) ||
            (iVar4 = BN_mod_add_quick(lVar5,lVar5,lVar6,lVar1), iVar4 == 0)) ||
           ((iVar4 = (*pcVar3)(param_1,lVar6,*(undefined8 *)(param_3 + 0x20),param_4), iVar4 == 0 ||
            (iVar4 = (*pcVar3)(param_1,lVar6,lVar6,param_4), iVar4 == 0)))) goto LAB_14f79dd0b;
        iVar4 = (*pcVar2)(param_1,lVar6,lVar6,param_1[0xc],param_4);
        lVar10 = lVar5;
        lVar9 = lVar6;
      }
      else {
        iVar4 = (*pcVar3)(param_1,lVar6,*(undefined8 *)(param_3 + 0x20));
        uVar12 = uVar11;
        if (((iVar4 == 0) ||
            (iVar4 = BN_mod_add_quick(lVar5,*(undefined8 *)(param_3 + 0x10),lVar6,lVar1), iVar4 == 0
            )) || ((iVar4 = BN_mod_sub_quick(uVar7,*(undefined8 *)(param_3 + 0x10),lVar6,lVar1),
                   iVar4 == 0 || (iVar4 = (*pcVar2)(param_1,lVar6,lVar5,uVar7,param_4), iVar4 == 0))
                  )) goto LAB_14f79dd0b;
        iVar4 = BN_mod_lshift1_quick(lVar5,lVar6,lVar1);
        lVar10 = lVar6;
      }
      uVar12 = uVar11;
      if (iVar4 == 0) goto LAB_14f79dd0b;
    }
    else {
      iVar4 = (*pcVar3)(param_1,lVar5,*(undefined8 *)(param_3 + 0x10));
      if (((iVar4 == 0) || (iVar4 = BN_mod_lshift1_quick(lVar6,lVar5,lVar1), iVar4 == 0)) ||
         (iVar4 = BN_mod_add_quick(lVar5,lVar5,lVar6,lVar1), uVar12 = uVar11, iVar4 == 0))
      goto LAB_14f79dd0b;
      lVar10 = param_1[0xc];
    }
    iVar4 = BN_mod_add_quick(lVar6,lVar9,lVar10,lVar1);
    uVar12 = uVar11;
    if (iVar4 != 0) {
      if (*(int *)(param_3 + 0x28) == 0) {
        iVar4 = (*pcVar2)(param_1,lVar5,*(undefined8 *)(param_3 + 0x18),
                          *(undefined8 *)(param_3 + 0x20),param_4);
        bVar13 = iVar4 == 0;
      }
      else {
        lVar9 = BN_copy(lVar5,*(undefined8 *)(param_3 + 0x18));
        bVar13 = lVar9 == 0;
      }
      if ((!bVar13) &&
         (iVar4 = BN_mod_lshift1_quick(*(undefined8 *)(param_2 + 0x20),lVar5,lVar1), iVar4 != 0)) {
        *(undefined4 *)(param_2 + 0x28) = 0;
        iVar4 = (*pcVar3)(param_1,lVar8,*(undefined8 *)(param_3 + 0x18),param_4);
        if (((((iVar4 != 0) &&
              ((iVar4 = (*pcVar2)(param_1,uVar7,*(undefined8 *)(param_3 + 0x10),lVar8,param_4),
               iVar4 != 0 && (iVar4 = BN_mod_lshift_quick(uVar7,uVar7,2,lVar1), iVar4 != 0)))) &&
             (iVar4 = BN_mod_lshift1_quick(lVar5,uVar7,lVar1), iVar4 != 0)) &&
            ((((iVar4 = (*pcVar3)(param_1,*(undefined8 *)(param_2 + 0x10),lVar6,param_4), iVar4 != 0
               && (iVar4 = BN_mod_sub_quick(*(undefined8 *)(param_2 + 0x10),
                                            *(undefined8 *)(param_2 + 0x10),lVar5,lVar1), iVar4 != 0
                  )) && (iVar4 = (*pcVar3)(param_1,lVar5,lVar8,param_4), iVar4 != 0)) &&
             ((iVar4 = BN_mod_lshift_quick(lVar8,lVar5,3,lVar1), iVar4 != 0 &&
              (iVar4 = BN_mod_sub_quick(lVar5,uVar7,*(undefined8 *)(param_2 + 0x10),lVar1),
              iVar4 != 0)))))) && (iVar4 = (*pcVar2)(param_1,lVar5,lVar6,lVar5,param_4), iVar4 != 0)
           ) {
          iVar4 = BN_mod_sub_quick(*(undefined8 *)(param_2 + 0x18),lVar5,lVar8,lVar1);
          uVar12 = 0;
          if (iVar4 != 0) {
            uVar12 = 1;
          }
        }
      }
    }
  }
LAB_14f79dd0b:
  BN_CTX_end(param_4);
  BN_CTX_free(local_38);
  return uVar12;
}

// ec_GFp_simple_invert @ 14f79dd50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GFp_simple_invert(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EC_POINT_is_at_infinity();
  if (iVar1 == 0) {
    iVar1 = BN_is_zero(*(undefined8 *)(param_2 + 0x18));
    if (iVar1 == 0) {
      uVar2 = BN_usub(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_2 + 0x18));
      return uVar2;
    }
  }
  return 1;
}

// ec_GFp_simple_is_at_infinity @ 14f79ddb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GFp_simple_is_at_infinity(undefined8 param_1,longlong param_2)

{
  BN_is_zero(*(undefined8 *)(param_2 + 0x20));
  return;
}

// ec_GFp_simple_is_on_curve @ 14f79ddd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_GFp_simple_is_on_curve(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong local_38;
  
  local_38 = 0;
  uVar9 = 0xffffffff;
  iVar4 = EC_POINT_is_at_infinity();
  if (iVar4 != 0) {
    return 1;
  }
  lVar1 = param_1[8];
  pcVar2 = *(code **)(*param_1 + 0x108);
  pcVar3 = *(code **)(*param_1 + 0x110);
  if ((param_3 == 0) && (param_3 = BN_CTX_new(), local_38 = param_3, param_3 == 0)) {
    return 0xffffffff;
  }
  BN_CTX_start(param_3);
  uVar5 = BN_CTX_get(param_3);
  lVar6 = BN_CTX_get(param_3);
  uVar7 = BN_CTX_get(param_3);
  lVar8 = BN_CTX_get(param_3);
  uVar10 = 0xffffffff;
  if ((lVar8 == 0) ||
     (iVar4 = (*pcVar3)(param_1,uVar5,*(undefined8 *)(param_2 + 0x10),param_3), uVar10 = uVar9,
     iVar4 == 0)) goto LAB_14f79e05e;
  if (*(int *)(param_2 + 0x28) == 0) {
    iVar4 = (*pcVar3)(param_1,lVar6,*(undefined8 *)(param_2 + 0x20),param_3);
    if (((iVar4 == 0) || (iVar4 = (*pcVar3)(param_1,uVar7,lVar6,param_3), iVar4 == 0)) ||
       (iVar4 = (*pcVar2)(param_1,lVar8,uVar7,lVar6,param_3), iVar4 == 0)) goto LAB_14f79e05e;
    if ((int)param_1[0xe] == 0) {
      iVar4 = (*pcVar2)(param_1,lVar6,uVar7,param_1[0xc],param_3);
      if (iVar4 == 0) goto LAB_14f79e05e;
      iVar4 = BN_mod_add_quick(uVar5,uVar5,lVar6,lVar1);
    }
    else {
      iVar4 = BN_mod_lshift1_quick(lVar6,uVar7,lVar1);
      if ((iVar4 == 0) || (iVar4 = BN_mod_add_quick(lVar6,lVar6,uVar7,lVar1), iVar4 == 0))
      goto LAB_14f79e05e;
      iVar4 = BN_mod_sub_quick(uVar5,uVar5,lVar6,lVar1);
    }
    if (((iVar4 == 0) ||
        (iVar4 = (*pcVar2)(param_1,uVar5,uVar5,*(undefined8 *)(param_2 + 0x10),param_3), iVar4 == 0)
        ) || (iVar4 = (*pcVar2)(param_1,lVar6,param_1[0xd],lVar8,param_3), lVar8 = lVar6, iVar4 == 0
             )) goto LAB_14f79e05e;
  }
  else {
    iVar4 = BN_mod_add_quick(uVar5,uVar5,param_1[0xc],lVar1);
    if ((iVar4 == 0) ||
       (iVar4 = (*pcVar2)(param_1,uVar5,uVar5,*(undefined8 *)(param_2 + 0x10),param_3), iVar4 == 0))
    goto LAB_14f79e05e;
    lVar8 = param_1[0xd];
  }
  iVar4 = BN_mod_add_quick(uVar5,uVar5,lVar8,lVar1);
  if ((iVar4 != 0) &&
     (iVar4 = (*pcVar3)(param_1,lVar6,*(undefined8 *)(param_2 + 0x18),param_3), iVar4 != 0)) {
    iVar4 = BN_ucmp(lVar6,uVar5);
    uVar10 = (ulonglong)(iVar4 == 0);
  }
LAB_14f79e05e:
  BN_CTX_end(param_3);
  BN_CTX_free(local_38);
  return uVar10;
}

// ec_GFp_simple_cmp @ 14f79e0b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_GFp_simple_cmp(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong local_38;
  
  local_38 = 0;
  uVar8 = 0xffffffff;
  iVar3 = EC_POINT_is_at_infinity();
  if (iVar3 != 0) {
    iVar3 = EC_POINT_is_at_infinity(param_1,param_3);
    return (ulonglong)(iVar3 == 0);
  }
  iVar3 = EC_POINT_is_at_infinity(param_1,param_3);
  if (iVar3 != 0) {
    return 1;
  }
  if ((*(int *)(param_2 + 0x28) != 0) && (*(int *)(param_3 + 0x28) != 0)) {
    iVar3 = BN_cmp(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_3 + 0x10));
    if ((iVar3 == 0) &&
       (iVar3 = BN_cmp(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_3 + 0x18)), iVar3 == 0)
       ) {
      return 0;
    }
    return 1;
  }
  pcVar1 = *(code **)(*param_1 + 0x108);
  pcVar2 = *(code **)(*param_1 + 0x110);
  if ((param_4 == 0) && (param_4 = BN_CTX_new(), local_38 = param_4, param_4 == 0)) {
    return 0xffffffff;
  }
  BN_CTX_start(param_4);
  uVar4 = BN_CTX_get(param_4);
  uVar5 = BN_CTX_get(param_4);
  uVar6 = BN_CTX_get(param_4);
  lVar7 = BN_CTX_get(param_4);
  uVar9 = 0xffffffff;
  if (lVar7 != 0) {
    uVar9 = uVar8;
    if (*(int *)(param_3 + 0x28) == 0) {
      iVar3 = (*pcVar2)(param_1,lVar7,*(undefined8 *)(param_3 + 0x20),param_4);
      if ((iVar3 == 0) ||
         (iVar3 = (*pcVar1)(param_1,uVar4,*(undefined8 *)(param_2 + 0x10),lVar7,param_4),
         uVar11 = uVar4, iVar3 == 0)) goto LAB_14f79e32c;
    }
    else {
      uVar11 = *(undefined8 *)(param_2 + 0x10);
    }
    if (*(int *)(param_2 + 0x28) == 0) {
      iVar3 = (*pcVar2)(param_1,uVar6,*(undefined8 *)(param_2 + 0x20),param_4);
      if ((iVar3 == 0) ||
         (iVar3 = (*pcVar1)(param_1,uVar5,*(undefined8 *)(param_3 + 0x10),uVar6,param_4),
         uVar10 = uVar5, iVar3 == 0)) goto LAB_14f79e32c;
    }
    else {
      uVar10 = *(undefined8 *)(param_3 + 0x10);
    }
    iVar3 = BN_cmp(uVar11,uVar10);
    if (iVar3 == 0) {
      if (*(int *)(param_3 + 0x28) == 0) {
        iVar3 = (*pcVar1)(param_1,lVar7,lVar7,*(undefined8 *)(param_3 + 0x20),param_4);
        if ((iVar3 == 0) ||
           (iVar3 = (*pcVar1)(param_1,uVar4,*(undefined8 *)(param_2 + 0x18),lVar7,param_4),
           iVar3 == 0)) goto LAB_14f79e32c;
      }
      else {
        uVar11 = *(undefined8 *)(param_2 + 0x18);
      }
      if (*(int *)(param_2 + 0x28) == 0) {
        iVar3 = (*pcVar1)(param_1,uVar6,uVar6,*(undefined8 *)(param_2 + 0x20),param_4);
        if ((iVar3 == 0) ||
           (iVar3 = (*pcVar1)(param_1,uVar5,*(undefined8 *)(param_3 + 0x18),uVar6,param_4),
           iVar3 == 0)) goto LAB_14f79e32c;
      }
      else {
        uVar10 = *(undefined8 *)(param_3 + 0x18);
      }
      iVar3 = BN_cmp(uVar11,uVar10);
      uVar9 = (ulonglong)(iVar3 != 0);
    }
    else {
      uVar9 = 1;
    }
  }
LAB_14f79e32c:
  BN_CTX_end(param_4);
  BN_CTX_free(local_38);
  return uVar9;
}

// ec_GFp_simple_make_affine @ 14f79e370

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_GFp_simple_make_affine(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = 0;
  if ((*(int *)(param_2 + 0x28) != 0) || (iVar1 = EC_POINT_is_at_infinity(), iVar1 != 0)) {
    return 1;
  }
  lVar4 = 0;
  if ((param_3 == 0) && (param_3 = BN_CTX_new(), lVar4 = param_3, param_3 == 0)) {
    return 0;
  }
  BN_CTX_start(param_3);
  uVar2 = BN_CTX_get(param_3);
  lVar3 = BN_CTX_get(param_3);
  lVar6 = 0;
  if (((lVar3 != 0) &&
      (iVar1 = EC_POINT_get_affine_coordinates(param_1,param_2,uVar2,lVar3,param_3), lVar6 = lVar5,
      iVar1 != 0)) &&
     (iVar1 = EC_POINT_set_affine_coordinates(param_1,param_2,uVar2,lVar3,param_3), iVar1 != 0)) {
    if (*(int *)(param_2 + 0x28) == 0) {
      ERR_put_error(0x10,0x66,0x44,"crypto\\ec\\ecp_smpl.c",0x4a4);
    }
    else {
      lVar6 = 1;
    }
  }
  BN_CTX_end(param_3);
  BN_CTX_free(lVar4);
  return lVar6;
}

// ec_GFp_simple_points_make_affine @ 14f79e490

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_GFp_simple_points_make_affine
                    (longlong *param_1,ulonglong param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  bool bVar11;
  longlong in_stack_ffffffffffffff98;
  undefined4 uVar12;
  undefined8 *local_58;
  longlong local_48;
  
  uVar6 = 0;
  local_48 = 0;
  local_58 = (undefined8 *)0x0;
  if (param_2 == 0) {
    return 1;
  }
  if ((param_4 == 0) && (param_4 = BN_CTX_new(), local_48 = param_4, param_4 == 0)) {
    return 0;
  }
  BN_CTX_start(param_4);
  uVar2 = BN_CTX_get(param_4);
  lVar3 = BN_CTX_get(param_4);
  uVar10 = uVar6;
  if ((lVar3 != 0) &&
     (local_58 = (undefined8 *)CRYPTO_malloc(param_2 * 8,"crypto\\ec\\ecp_smpl.c",0x4c8),
     local_58 != (undefined8 *)0x0)) {
    uVar7 = uVar6;
    uVar10 = 0;
    if (param_2 != 0) {
      do {
        lVar4 = BN_new();
        local_58[uVar7] = lVar4;
        if (lVar4 == 0) goto LAB_14f79e69b;
        uVar7 = uVar7 + 1;
      } while (uVar7 < param_2);
    }
    iVar1 = BN_is_zero(*(undefined8 *)(*param_3 + 0x20));
    if (iVar1 == 0) {
      lVar4 = BN_copy(*local_58,*(undefined8 *)(*param_3 + 0x20));
      bVar11 = lVar4 == 0;
    }
    else {
      if (*(code **)(*param_1 + 0x138) == (code *)0x0) {
        iVar1 = BN_set_word(*local_58,1);
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x138))(param_1,*local_58,param_4);
      }
      bVar11 = iVar1 == 0;
    }
    uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
    if (!bVar11) {
      uVar10 = 1;
      if (1 < param_2) {
        lVar4 = (longlong)local_58 - (longlong)param_3;
        plVar9 = param_3;
        do {
          plVar8 = plVar9 + 1;
          iVar1 = BN_is_zero(*(undefined8 *)(*plVar8 + 0x20));
          if (iVar1 == 0) {
            in_stack_ffffffffffffff98 = param_4;
            iVar1 = (**(code **)(*param_1 + 0x108))
                              (param_1,*(undefined8 *)((longlong)plVar8 + lVar4),
                               *(undefined8 *)((longlong)plVar9 + lVar4),
                               *(undefined8 *)(*plVar8 + 0x20),param_4);
            bVar11 = iVar1 == 0;
          }
          else {
            lVar5 = BN_copy(*(undefined8 *)((longlong)plVar8 + lVar4),
                            *(undefined8 *)((longlong)plVar9 + lVar4));
            bVar11 = lVar5 == 0;
          }
          uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
          if (bVar11) goto LAB_14f79e693;
          uVar10 = uVar10 + 1;
          plVar9 = plVar8;
        } while (uVar10 < param_2);
      }
      iVar1 = (**(code **)(*param_1 + 0x120))(param_1,uVar2,local_58[param_2 - 1],param_4);
      if (iVar1 == 0) {
        ERR_put_error(0x10,0x89,3,"crypto\\ec\\ecp_smpl.c",CONCAT44(uVar12,0x4f5));
      }
      else if ((*(code **)(*param_1 + 0x128) == (code *)0x0) ||
              ((iVar1 = (**(code **)(*param_1 + 0x128))(param_1,uVar2,uVar2,param_4), iVar1 != 0 &&
               (iVar1 = (**(code **)(*param_1 + 0x128))(param_1,uVar2,uVar2,param_4), iVar1 != 0))))
      {
        lVar4 = param_2 - 1;
        if (lVar4 != 0) {
          plVar9 = param_3 + lVar4;
          do {
            iVar1 = BN_is_zero(*(undefined8 *)(*plVar9 + 0x20));
            if ((iVar1 == 0) &&
               (((iVar1 = (**(code **)(*param_1 + 0x108))
                                    (param_1,lVar3,
                                     *(undefined8 *)
                                      ((longlong)plVar9 +
                                      (longlong)local_58 + (-8 - (longlong)param_3)),uVar2,param_4),
                 iVar1 == 0 ||
                 (iVar1 = (**(code **)(*param_1 + 0x108))
                                    (param_1,uVar2,uVar2,*(undefined8 *)(*plVar9 + 0x20),param_4),
                 iVar1 == 0)) ||
                (lVar5 = BN_copy(*(undefined8 *)(*plVar9 + 0x20),lVar3), lVar5 == 0))))
            goto LAB_14f79e693;
            plVar9 = plVar9 + -1;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        iVar1 = BN_is_zero(*(undefined8 *)(*param_3 + 0x20));
        if ((iVar1 != 0) || (lVar3 = BN_copy(*(undefined8 *)(*param_3 + 0x20),uVar2), lVar3 != 0)) {
          uVar10 = uVar6;
          if (param_2 != 0) {
            do {
              lVar3 = param_3[uVar10];
              iVar1 = BN_is_zero(*(undefined8 *)(lVar3 + 0x20));
              if (iVar1 == 0) {
                iVar1 = (**(code **)(*param_1 + 0x110))
                                  (param_1,uVar2,*(undefined8 *)(lVar3 + 0x20),param_4);
                if (((iVar1 == 0) ||
                    (iVar1 = (**(code **)(*param_1 + 0x108))
                                       (param_1,*(undefined8 *)(lVar3 + 0x10),
                                        *(undefined8 *)(lVar3 + 0x10),uVar2,param_4), iVar1 == 0))
                   || ((iVar1 = (**(code **)(*param_1 + 0x108))
                                          (param_1,uVar2,uVar2,*(undefined8 *)(lVar3 + 0x20),param_4
                                          ), iVar1 == 0 ||
                       (iVar1 = (**(code **)(*param_1 + 0x108))
                                          (param_1,*(undefined8 *)(lVar3 + 0x18),
                                           *(undefined8 *)(lVar3 + 0x18),uVar2,param_4), iVar1 == 0)
                       ))) goto LAB_14f79e693;
                if (*(code **)(*param_1 + 0x138) == (code *)0x0) {
                  iVar1 = BN_set_word(*(undefined8 *)(lVar3 + 0x20),1);
                }
                else {
                  iVar1 = (**(code **)(*param_1 + 0x138))
                                    (param_1,*(undefined8 *)(lVar3 + 0x20),param_4);
                }
                if (iVar1 == 0) goto LAB_14f79e693;
                *(undefined4 *)(lVar3 + 0x28) = 1;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < param_2);
          }
          uVar10 = 1;
          goto LAB_14f79e69b;
        }
      }
LAB_14f79e693:
      uVar10 = 0;
    }
  }
LAB_14f79e69b:
  BN_CTX_end(param_4);
  BN_CTX_free(local_48);
  if (local_58 != (undefined8 *)0x0) {
    if (param_2 != 0) {
      do {
        if (local_58[uVar6] == 0) break;
        BN_clear_free();
        uVar6 = uVar6 + 1;
      } while (uVar6 < param_2);
    }
    CRYPTO_free(local_58,"crypto\\ec\\ecp_smpl.c",0x54a);
  }
  return uVar10;
}

// ec_GFp_simple_field_mul @ 14f79e920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GFp_simple_field_mul
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  BN_mod_mul(param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x40));
  return;
}

// ec_GFp_simple_field_sqr @ 14f79e960

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GFp_simple_field_sqr(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  BN_mod_sqr(param_2,param_3,*(undefined8 *)(param_1 + 0x40));
  return;
}

// ec_GFp_simple_field_inv @ 14f79e990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_GFp_simple_field_inv
                   (longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar4 = 0;
  lVar2 = 0;
  if ((param_4 == 0) && (lVar2 = BN_CTX_secure_new(), param_4 = lVar2, lVar2 == 0)) {
    return 0;
  }
  BN_CTX_start(param_4);
  lVar3 = BN_CTX_get(param_4);
  lVar5 = 0;
  if (lVar3 != 0) {
    do {
      iVar1 = BN_priv_rand_range(lVar3,param_1[8]);
      lVar5 = lVar4;
      if (iVar1 == 0) goto LAB_14f79ea9f;
      iVar1 = BN_is_zero(lVar3);
    } while (iVar1 != 0);
    lVar4 = param_4;
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,param_2,param_3,lVar3,param_4);
    uVar6 = (undefined4)((ulonglong)lVar4 >> 0x20);
    if (iVar1 != 0) {
      lVar4 = BN_mod_inverse(param_2,param_2,param_1[8],param_4);
      if (lVar4 == 0) {
        ERR_put_error(0x10,0x12a,0xa5,"crypto\\ec\\ecp_smpl.c",CONCAT44(uVar6,0x579));
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x108))(param_1,param_2,param_2,lVar3,param_4);
        lVar5 = 0;
        if (iVar1 != 0) {
          lVar5 = 1;
        }
      }
    }
  }
LAB_14f79ea9f:
  BN_CTX_end(param_4);
  BN_CTX_free(lVar2);
  return lVar5;
}

// ec_GFp_simple_blind_coordinates @ 14f79eae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ec_GFp_simple_blind_coordinates(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar6 = 0x14f79eafe;
  iVar1 = 0;
  BN_CTX_start(param_3);
  uVar3 = BN_CTX_get(param_3);
  lVar4 = BN_CTX_get(param_3);
  if (lVar4 == 0) {
    ERR_put_error(0x10,0x11f,0x41,"crypto\\ec\\ecp_smpl.c",CONCAT44(uVar5,0x59a),uVar6);
  }
  else {
    do {
      ERR_set_mark();
      iVar1 = BN_priv_rand_range(uVar3,param_1[8]);
      ERR_pop_to_mark();
      if (iVar1 == 0) goto LAB_14f79ec45;
      iVar2 = BN_is_zero(uVar3);
    } while (iVar2 != 0);
    if (*(code **)(*param_1 + 0x128) != (code *)0x0) {
      iVar2 = (**(code **)(*param_1 + 0x128))(param_1,uVar3,uVar3,param_3);
      if (iVar2 == 0) goto LAB_14f79ec4a;
    }
    iVar2 = (**(code **)(*param_1 + 0x108))
                      (param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x20),uVar3
                       ,param_3);
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*param_1 + 0x110))(param_1,lVar4,uVar3,param_3);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*param_1 + 0x108))
                          (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x10),
                           lVar4,param_3);
        if (iVar2 != 0) {
          iVar2 = (**(code **)(*param_1 + 0x108))(param_1,lVar4,lVar4,uVar3,param_3);
          if (iVar2 != 0) {
            iVar2 = (**(code **)(*param_1 + 0x108))
                              (param_1,*(undefined8 *)(param_2 + 0x18),
                               *(undefined8 *)(param_2 + 0x18),lVar4,param_3);
            if (iVar2 != 0) {
              *(undefined4 *)(param_2 + 0x28) = 0;
LAB_14f79ec45:
              iVar1 = 1;
            }
          }
        }
      }
    }
  }
LAB_14f79ec4a:
  BN_CTX_end(param_3);
  return iVar1;
}

// ec_GFp_simple_ladder_pre @ 14f79ec80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ec_GFp_simple_ladder_pre
          (longlong *param_1,longlong param_2,longlong param_3,longlong param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f79ec9f;
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  if (((((((*(int *)(param_4 + 0x28) != 0) &&
          (iVar6 = (**(code **)(*param_1 + 0x110))
                             (param_1,uVar3,*(undefined8 *)(param_4 + 0x10),param_5), iVar6 != 0))
         && (iVar6 = BN_mod_sub_quick(uVar4,uVar3,param_1[0xc],param_1[8]), iVar6 != 0)) &&
        ((iVar6 = (**(code **)(*param_1 + 0x110))(param_1,uVar4,uVar4,param_5), iVar6 != 0 &&
         (iVar6 = (**(code **)(*param_1 + 0x108))
                            (param_1,uVar5,*(undefined8 *)(param_4 + 0x10),param_1[0xd],param_5,
                             uVar7), iVar6 != 0)))) &&
       ((iVar6 = BN_mod_lshift_quick(uVar5,uVar5,3,param_1[8]), iVar6 != 0 &&
        ((iVar6 = BN_mod_sub_quick(*(undefined8 *)(param_2 + 0x10),uVar4,uVar5,param_1[8]),
         iVar6 != 0 && (iVar6 = BN_mod_add_quick(uVar1,uVar3,param_1[0xc],param_1[8]), iVar6 != 0)))
        ))) && (iVar6 = (**(code **)(*param_1 + 0x108))
                                  (param_1,uVar2,*(undefined8 *)(param_4 + 0x10),uVar1,param_5),
               iVar6 != 0)) &&
     ((iVar6 = BN_mod_add_quick(uVar2,param_1[0xd],uVar2,param_1[8]), iVar6 != 0 &&
      (iVar6 = BN_mod_lshift_quick(*(undefined8 *)(param_2 + 0x20),uVar2,2,param_1[8]), iVar6 != 0))
     )) {
    do {
      iVar6 = BN_priv_rand_range(*(undefined8 *)(param_2 + 0x18),param_1[8]);
      if (iVar6 == 0) {
        return 0;
      }
      iVar6 = BN_is_zero(*(undefined8 *)(param_2 + 0x18));
    } while (iVar6 != 0);
    do {
      iVar6 = BN_priv_rand_range(*(undefined8 *)(param_3 + 0x20),param_1[8]);
      if (iVar6 == 0) {
        return 0;
      }
      iVar6 = BN_is_zero(*(undefined8 *)(param_3 + 0x20));
    } while (iVar6 != 0);
    if (((*(code **)(*param_1 + 0x128) == (code *)0x0) ||
        ((iVar6 = (**(code **)(*param_1 + 0x128))
                            (param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x18)
                             ,param_5), iVar6 != 0 &&
         (iVar6 = (**(code **)(*param_1 + 0x128))
                            (param_1,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x20)
                             ,param_5), iVar6 != 0)))) &&
       ((iVar6 = (**(code **)(*param_1 + 0x108))
                           (param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x20),
                            *(undefined8 *)(param_2 + 0x18),param_5), iVar6 != 0 &&
        ((iVar6 = (**(code **)(*param_1 + 0x108))
                            (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x10)
                             ,*(undefined8 *)(param_2 + 0x18),param_5), iVar6 != 0 &&
         (iVar6 = (**(code **)(*param_1 + 0x108))
                            (param_1,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + 0x10)
                             ,*(undefined8 *)(param_3 + 0x20),param_5), iVar6 != 0)))))) {
      *(undefined4 *)(param_2 + 0x28) = 0;
      *(undefined4 *)(param_3 + 0x28) = 0;
      return 1;
    }
  }
  return 0;
}

// ec_GFp_simple_ladder_step @ 14f79ef40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ec_GFp_simple_ladder_step
               (longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
               undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  
  bVar9 = false;
  BN_CTX_start(param_5);
  uVar2 = BN_CTX_get(param_5);
  uVar3 = BN_CTX_get(param_5);
  uVar4 = BN_CTX_get(param_5);
  uVar5 = BN_CTX_get(param_5);
  uVar6 = BN_CTX_get(param_5);
  uVar7 = BN_CTX_get(param_5);
  lVar8 = BN_CTX_get(param_5);
  if (((((((((lVar8 != 0) &&
            (iVar1 = (**(code **)(*param_1 + 0x108))
                               (param_1,lVar8,*(undefined8 *)(param_2 + 0x10),
                                *(undefined8 *)(param_3 + 0x10),param_5), iVar1 != 0)) &&
           (iVar1 = (**(code **)(*param_1 + 0x108))
                              (param_1,uVar2,*(undefined8 *)(param_2 + 0x20),
                               *(undefined8 *)(param_3 + 0x20),param_5), iVar1 != 0)) &&
          ((iVar1 = (**(code **)(*param_1 + 0x108))
                              (param_1,uVar6,*(undefined8 *)(param_2 + 0x10),
                               *(undefined8 *)(param_3 + 0x20),param_5), iVar1 != 0 &&
           (iVar1 = (**(code **)(*param_1 + 0x108))
                              (param_1,uVar5,*(undefined8 *)(param_2 + 0x20),
                               *(undefined8 *)(param_3 + 0x10),param_5), iVar1 != 0)))) &&
         ((iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar7,param_1[0xc],uVar2,param_5),
          iVar1 != 0 &&
          ((iVar1 = BN_mod_add_quick(uVar7,lVar8,uVar7,param_1[8]), iVar1 != 0 &&
           (iVar1 = BN_mod_add_quick(lVar8,uVar5,uVar6,param_1[8]), iVar1 != 0)))))) &&
        (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar7,lVar8,uVar7,param_5), iVar1 != 0)) &&
       (((((iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar2,uVar2,param_5), iVar1 != 0 &&
           (iVar1 = BN_mod_lshift_quick(uVar4,param_1[0xd],2,param_1[8]), iVar1 != 0)) &&
          (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar2,uVar4,uVar2,param_5), iVar1 != 0))
         && (((iVar1 = BN_mod_lshift1_quick(uVar7,uVar7,param_1[8]), iVar1 != 0 &&
              (iVar1 = BN_mod_sub_quick(uVar5,uVar6,uVar5,param_1[8]), iVar1 != 0)) &&
             ((iVar1 = (**(code **)(*param_1 + 0x110))
                                 (param_1,*(undefined8 *)(param_3 + 0x20),uVar5,param_5), iVar1 != 0
              && ((iVar1 = (**(code **)(*param_1 + 0x108))
                                     (param_1,uVar6,*(undefined8 *)(param_3 + 0x20),
                                      *(undefined8 *)(param_4 + 0x10),param_5), iVar1 != 0 &&
                  (iVar1 = BN_mod_add_quick(uVar2,uVar2,uVar7,param_1[8]), iVar1 != 0)))))))) &&
        ((iVar1 = BN_mod_sub_quick(*(undefined8 *)(param_3 + 0x10),uVar2,uVar6,param_1[8]),
         iVar1 != 0 &&
         (((iVar1 = (**(code **)(*param_1 + 0x110))
                              (param_1,uVar6,*(undefined8 *)(param_2 + 0x10),param_5), iVar1 != 0 &&
           (iVar1 = (**(code **)(*param_1 + 0x110))
                              (param_1,uVar7,*(undefined8 *)(param_2 + 0x20),param_5), iVar1 != 0))
          && (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,lVar8,uVar7,param_1[0xc],param_5),
             iVar1 != 0)))))))) &&
      ((((iVar1 = BN_mod_add_quick(uVar3,*(undefined8 *)(param_2 + 0x10),
                                   *(undefined8 *)(param_2 + 0x20),param_1[8]), iVar1 != 0 &&
         (iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar3,uVar3,param_5), iVar1 != 0)) &&
        (((iVar1 = BN_mod_sub_quick(uVar3,uVar3,uVar6,param_1[8]), iVar1 != 0 &&
          ((iVar1 = BN_mod_sub_quick(uVar3,uVar3,uVar7,param_1[8]), iVar1 != 0 &&
           (iVar1 = BN_mod_sub_quick(uVar5,uVar6,lVar8,param_1[8]), iVar1 != 0)))) &&
         (iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar5,uVar5,param_5), iVar1 != 0)))) &&
       ((((iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar2,uVar7,uVar3,param_5), iVar1 != 0 &&
          (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar2,uVar4,uVar2,param_5), iVar1 != 0))
         && (iVar1 = BN_mod_sub_quick(*(undefined8 *)(param_2 + 0x10),uVar5,uVar2,param_1[8]),
            iVar1 != 0)) &&
        ((iVar1 = BN_mod_add_quick(uVar5,uVar6,lVar8,param_1[8]), iVar1 != 0 &&
         (iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar6,uVar7,param_5), iVar1 != 0))))))))
     && ((iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar6,uVar6,uVar4,param_5), iVar1 != 0 &&
         ((iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar3,uVar3,uVar5,param_5), iVar1 != 0 &&
          (iVar1 = BN_mod_lshift1_quick(uVar3,uVar3,param_1[8]), iVar1 != 0)))))) {
    iVar1 = BN_mod_add_quick(*(undefined8 *)(param_2 + 0x20),uVar6,uVar3,param_1[8]);
    bVar9 = iVar1 != 0;
  }
  BN_CTX_end(param_5);
  return bVar9;
}

// ec_GFp_simple_ladder_post @ 14f79f480

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_GFp_simple_ladder_post
                    (longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                    undefined8 param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint local_res10;
  
  local_res10 = 0;
  iVar1 = BN_is_zero(*(undefined8 *)(param_2 + 0x20));
  if (iVar1 != 0) {
    uVar2 = EC_POINT_set_to_infinity(param_1,param_2);
    return uVar2;
  }
  iVar1 = BN_is_zero(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 0) {
    iVar1 = EC_POINT_copy(param_2,param_4);
    if (iVar1 != 0) {
      iVar1 = EC_POINT_invert(param_1,param_2,param_5);
      if (iVar1 != 0) {
        return 1;
      }
    }
    return 0;
  }
  BN_CTX_start(param_5);
  uVar3 = BN_CTX_get(param_5);
  uVar4 = BN_CTX_get(param_5);
  uVar5 = BN_CTX_get(param_5);
  uVar6 = BN_CTX_get(param_5);
  uVar7 = BN_CTX_get(param_5);
  uVar8 = BN_CTX_get(param_5);
  lVar9 = BN_CTX_get(param_5);
  if (lVar9 != 0) {
    iVar1 = BN_mod_lshift1_quick(uVar7,*(undefined8 *)(param_4 + 0x18),param_1[8]);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x108))
                        (param_1,lVar9,*(undefined8 *)(param_2 + 0x10),uVar7,param_5);
      if (iVar1 != 0) {
        iVar1 = (**(code **)(*param_1 + 0x108))
                          (param_1,lVar9,*(undefined8 *)(param_3 + 0x20),lVar9,param_5);
        if (iVar1 != 0) {
          iVar1 = (**(code **)(*param_1 + 0x108))
                            (param_1,uVar8,*(undefined8 *)(param_2 + 0x20),lVar9,param_5);
          if (iVar1 != 0) {
            iVar1 = BN_mod_lshift1_quick(uVar4,param_1[0xd],param_1[8]);
            if (iVar1 != 0) {
              iVar1 = (**(code **)(*param_1 + 0x108))
                                (param_1,uVar4,*(undefined8 *)(param_3 + 0x20),uVar4,param_5);
              if (iVar1 != 0) {
                iVar1 = (**(code **)(*param_1 + 0x110))
                                  (param_1,uVar6,*(undefined8 *)(param_2 + 0x20),param_5);
                if (iVar1 != 0) {
                  iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar5,uVar6,uVar4,param_5);
                  if (iVar1 != 0) {
                    iVar1 = (**(code **)(*param_1 + 0x108))
                                      (param_1,lVar9,*(undefined8 *)(param_2 + 0x20),param_1[0xc],
                                       param_5);
                    if (iVar1 != 0) {
                      iVar1 = (**(code **)(*param_1 + 0x108))
                                        (param_1,uVar4,*(undefined8 *)(param_4 + 0x10),
                                         *(undefined8 *)(param_2 + 0x10),param_5);
                      if (iVar1 != 0) {
                        iVar1 = BN_mod_add_quick(uVar4,uVar4,lVar9,param_1[8]);
                        if (iVar1 != 0) {
                          iVar1 = (**(code **)(*param_1 + 0x108))
                                            (param_1,uVar4,*(undefined8 *)(param_3 + 0x20),uVar4,
                                             param_5);
                          if (iVar1 != 0) {
                            iVar1 = (**(code **)(*param_1 + 0x108))
                                              (param_1,uVar3,*(undefined8 *)(param_4 + 0x10),
                                               *(undefined8 *)(param_2 + 0x20),param_5);
                            if (iVar1 != 0) {
                              iVar1 = BN_mod_add_quick(lVar9,*(undefined8 *)(param_2 + 0x10),uVar3,
                                                       param_1[8]);
                              if (iVar1 != 0) {
                                iVar1 = (**(code **)(*param_1 + 0x108))
                                                  (param_1,lVar9,lVar9,uVar4,param_5);
                                if (iVar1 != 0) {
                                  iVar1 = BN_mod_add_quick(lVar9,lVar9,uVar5,param_1[8]);
                                  if (iVar1 != 0) {
                                    iVar1 = BN_mod_sub_quick(uVar3,uVar3,
                                                             *(undefined8 *)(param_2 + 0x10),
                                                             param_1[8]);
                                    if (iVar1 != 0) {
                                      iVar1 = (**(code **)(*param_1 + 0x110))
                                                        (param_1,uVar3,uVar3,param_5);
                                      if (iVar1 != 0) {
                                        iVar1 = (**(code **)(*param_1 + 0x108))
                                                          (param_1,uVar3,uVar3,
                                                           *(undefined8 *)(param_3 + 0x10),param_5);
                                        if (iVar1 != 0) {
                                          iVar1 = BN_mod_sub_quick(uVar3,lVar9,uVar3,param_1[8]);
                                          if (iVar1 != 0) {
                                            iVar1 = (**(code **)(*param_1 + 0x108))
                                                              (param_1,uVar4,
                                                               *(undefined8 *)(param_3 + 0x20),uVar7
                                                               ,param_5);
                                            if (iVar1 != 0) {
                                              iVar1 = (**(code **)(*param_1 + 0x108))
                                                                (param_1,uVar4,uVar6,uVar4,param_5);
                                              if (iVar1 != 0) {
                                                if (*(code **)(*param_1 + 0x130) != (code *)0x0) {
                                                  iVar1 = (**(code **)(*param_1 + 0x130))
                                                                    (param_1,uVar4,uVar4,param_5);
                                                  if (iVar1 == 0) goto LAB_14f79f95f;
                                                }
                                                iVar1 = (**(code **)(*param_1 + 0x120))
                                                                  (param_1,uVar4,uVar4,param_5);
                                                if (iVar1 != 0) {
                                                  if (*(code **)(*param_1 + 0x128) != (code *)0x0) {
                                                    iVar1 = (**(code **)(*param_1 + 0x128))
                                                                      (param_1,uVar4,uVar4,param_5);
                                                    if (iVar1 == 0) goto LAB_14f79f95f;
                                                  }
                                                  iVar1 = (**(code **)(*param_1 + 0x108))
                                                                    (param_1,*(undefined8 *)
                                                                              (param_2 + 0x10),uVar8
                                                                     ,uVar4,param_5);
                                                  if (iVar1 != 0) {
                                                    iVar1 = (**(code **)(*param_1 + 0x108))
                                                                      (param_1,*(undefined8 *)
                                                                                (param_2 + 0x18),
                                                                       uVar3,uVar4,param_5);
                                                    if (iVar1 != 0) {
                                                      if (*(code **)(*param_1 + 0x138) ==
                                                          (code *)0x0) {
                                                        iVar1 = BN_set_word(*(undefined8 *)
                                                                             (param_2 + 0x20),1);
                                                      }
                                                      else {
                                                        iVar1 = (**(code **)(*param_1 + 0x138))
                                                                          (param_1,*(undefined8 *)
                                                                                    (param_2 + 0x20)
                                                                           ,param_5);
                                                      }
                                                      if (iVar1 != 0) {
                                                        *(undefined4 *)(param_2 + 0x28) = 1;
                                                        local_res10 = 1;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_14f79f95f:
  BN_CTX_end(param_5);
  return (ulonglong)local_res10;
}

