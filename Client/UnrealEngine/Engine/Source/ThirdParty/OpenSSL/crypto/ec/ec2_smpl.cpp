// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 32

// FUN_14f7a8810 @ 14f7a8810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f7a8810(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f7a882b;
  if (*(int *)(param_4 + 0x28) != 0) {
    do {
      iVar1 = BN_num_bits(param_1[8]);
      iVar1 = BN_priv_rand(*(undefined8 *)(param_3 + 0x20),iVar1 + -1,0xffffffff,0);
      if (iVar1 == 0) {
        ERR_put_error(0x10,0x120,3,"crypto\\ec\\ec2_smpl.c",0x2bd,uVar2);
        return 0;
      }
      iVar1 = BN_is_zero(*(undefined8 *)(param_3 + 0x20));
    } while (iVar1 != 0);
    if (((*(code **)(*param_1 + 0x128) == (code *)0x0) ||
        (iVar1 = (**(code **)(*param_1 + 0x128))
                           (param_1,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x20),
                            param_5), iVar1 != 0)) &&
       (iVar1 = (**(code **)(*param_1 + 0x108))
                          (param_1,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + 0x10),
                           *(undefined8 *)(param_3 + 0x20),param_5), iVar1 != 0)) {
      do {
        iVar1 = BN_num_bits(param_1[8]);
        iVar1 = BN_priv_rand(*(undefined8 *)(param_2 + 0x18),iVar1 + -1,0xffffffff,0);
        if (iVar1 == 0) {
          ERR_put_error(0x10,0x120,3,"crypto\\ec\\ec2_smpl.c",0x2cc);
          return 0;
        }
        iVar1 = BN_is_zero(*(undefined8 *)(param_2 + 0x18));
      } while (iVar1 != 0);
      if (((((*(code **)(*param_1 + 0x128) == (code *)0x0) ||
            (iVar1 = (**(code **)(*param_1 + 0x128))
                               (param_1,*(undefined8 *)(param_2 + 0x18),
                                *(undefined8 *)(param_2 + 0x18),param_5), iVar1 != 0)) &&
           ((iVar1 = (**(code **)(*param_1 + 0x110))
                               (param_1,*(undefined8 *)(param_2 + 0x20),
                                *(undefined8 *)(param_4 + 0x10),param_5), iVar1 != 0 &&
            ((iVar1 = (**(code **)(*param_1 + 0x110))
                                (param_1,*(undefined8 *)(param_2 + 0x10),
                                 *(undefined8 *)(param_2 + 0x20),param_5), iVar1 != 0 &&
             (iVar1 = BN_GF2m_add(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x10),
                                  param_1[0xd]), iVar1 != 0)))))) &&
          (iVar1 = (**(code **)(*param_1 + 0x108))
                             (param_1,*(undefined8 *)(param_2 + 0x20),
                              *(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x18),
                              param_5), iVar1 != 0)) &&
         (iVar1 = (**(code **)(*param_1 + 0x108))
                            (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x10)
                             ,*(undefined8 *)(param_2 + 0x18),param_5), iVar1 != 0)) {
        *(undefined4 *)(param_3 + 0x28) = 0;
        *(undefined4 *)(param_2 + 0x28) = 0;
        return 1;
      }
    }
  }
  return 0;
}

// FUN_14f7a8a40 @ 14f7a8a40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f7a8a40(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined8 param_5)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x108))
                    (param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),
                     *(undefined8 *)(param_3 + 0x10),param_5,0x14f7a8a60);
  if (((((iVar1 != 0) &&
        (iVar1 = (**(code **)(*param_1 + 0x108))
                           (param_1,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_2 + 0x10),
                            *(undefined8 *)(param_3 + 0x20),param_5), iVar1 != 0)) &&
       (iVar1 = (**(code **)(*param_1 + 0x110))
                          (param_1,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_2 + 0x20),
                           param_5), iVar1 != 0)) &&
      ((((iVar1 = (**(code **)(*param_1 + 0x110))
                            (param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10)
                             ,param_5), iVar1 != 0 &&
         (iVar1 = BN_GF2m_add(*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_2 + 0x18),
                              *(undefined8 *)(param_3 + 0x10)), iVar1 != 0)) &&
        ((iVar1 = (**(code **)(*param_1 + 0x110))
                            (param_1,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x20)
                             ,param_5), iVar1 != 0 &&
         ((iVar1 = (**(code **)(*param_1 + 0x108))
                             (param_1,*(undefined8 *)(param_3 + 0x10),
                              *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_3 + 0x10),
                              param_5), iVar1 != 0 &&
          (iVar1 = (**(code **)(*param_1 + 0x108))
                             (param_1,*(undefined8 *)(param_2 + 0x18),
                              *(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_4 + 0x10),
                              param_5), iVar1 != 0)))))) &&
       (iVar1 = BN_GF2m_add(*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x10),
                            *(undefined8 *)(param_2 + 0x18)), iVar1 != 0)))) &&
     ((((iVar1 = (**(code **)(*param_1 + 0x110))
                           (param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),
                            param_5), iVar1 != 0 &&
        (iVar1 = (**(code **)(*param_1 + 0x108))
                           (param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x20),
                            *(undefined8 *)(param_3 + 0x18),param_5), iVar1 != 0)) &&
       (iVar1 = (**(code **)(*param_1 + 0x110))
                          (param_1,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x18),
                           param_5), iVar1 != 0)) &&
      ((iVar1 = (**(code **)(*param_1 + 0x108))
                          (param_1,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x18),
                           param_1[0xd],param_5), iVar1 != 0 &&
       (iVar1 = BN_GF2m_add(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                            *(undefined8 *)(param_3 + 0x18)), iVar1 != 0)))))) {
    return 1;
  }
  return 0;
}

// FUN_14f7a8c50 @ 14f7a8c50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f7a8c50(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                       undefined8 param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint local_res10;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
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
    ERR_put_error(0x10,0x11d,0x10,"crypto\\ec\\ec2_smpl.c",CONCAT44(uVar6,0x311));
    return 0;
  }
  BN_CTX_start(param_5);
  uVar3 = BN_CTX_get(param_5);
  uVar4 = BN_CTX_get(param_5);
  lVar5 = BN_CTX_get(param_5);
  if (lVar5 == 0) {
    ERR_put_error(0x10,0x11d,0x41,"crypto\\ec\\ec2_smpl.c",CONCAT44(uVar6,0x31c));
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x108))
                      (param_1,uVar3,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_3 + 0x20)
                       ,param_5);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x108))
                        (param_1,uVar4,*(undefined8 *)(param_4 + 0x10),
                         *(undefined8 *)(param_2 + 0x20),param_5);
      if (iVar1 != 0) {
        iVar1 = BN_GF2m_add(uVar4,*(undefined8 *)(param_2 + 0x10),uVar4);
        if (iVar1 != 0) {
          iVar1 = (**(code **)(*param_1 + 0x108))
                            (param_1,lVar5,*(undefined8 *)(param_4 + 0x10),
                             *(undefined8 *)(param_3 + 0x20),param_5);
          if (iVar1 != 0) {
            iVar1 = (**(code **)(*param_1 + 0x108))
                              (param_1,*(undefined8 *)(param_2 + 0x20),
                               *(undefined8 *)(param_2 + 0x10),lVar5,param_5);
            if (iVar1 != 0) {
              iVar1 = BN_GF2m_add(lVar5,lVar5,*(undefined8 *)(param_3 + 0x10));
              if (iVar1 != 0) {
                iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar4,uVar4,lVar5,param_5);
                if (iVar1 != 0) {
                  iVar1 = (**(code **)(*param_1 + 0x110))
                                    (param_1,lVar5,*(undefined8 *)(param_4 + 0x10),param_5);
                  if (iVar1 != 0) {
                    iVar1 = BN_GF2m_add(lVar5,*(undefined8 *)(param_4 + 0x18),lVar5);
                    if (iVar1 != 0) {
                      iVar1 = (**(code **)(*param_1 + 0x108))(param_1,lVar5,lVar5,uVar3,param_5);
                      if (iVar1 != 0) {
                        iVar1 = BN_GF2m_add(uVar4,lVar5,uVar4);
                        if (iVar1 != 0) {
                          iVar1 = (**(code **)(*param_1 + 0x108))
                                            (param_1,lVar5,*(undefined8 *)(param_4 + 0x10),uVar3,
                                             param_5);
                          if (iVar1 != 0) {
                            iVar1 = (**(code **)(*param_1 + 0x120))(param_1,lVar5,lVar5,param_5);
                            if (iVar1 != 0) {
                              iVar1 = (**(code **)(*param_1 + 0x108))
                                                (param_1,uVar4,uVar4,lVar5,param_5);
                              if (iVar1 != 0) {
                                iVar1 = (**(code **)(*param_1 + 0x108))
                                                  (param_1,*(undefined8 *)(param_2 + 0x10),
                                                   *(undefined8 *)(param_2 + 0x20),lVar5,param_5);
                                if (iVar1 != 0) {
                                  iVar1 = BN_GF2m_add(lVar5,*(undefined8 *)(param_4 + 0x10),
                                                      *(undefined8 *)(param_2 + 0x10));
                                  if (iVar1 != 0) {
                                    iVar1 = (**(code **)(*param_1 + 0x108))
                                                      (param_1,lVar5,lVar5,uVar4,param_5);
                                    if (iVar1 != 0) {
                                      iVar1 = BN_GF2m_add(*(undefined8 *)(param_2 + 0x18),
                                                          *(undefined8 *)(param_4 + 0x18),lVar5);
                                      if (iVar1 != 0) {
                                        iVar1 = BN_set_word(*(undefined8 *)(param_2 + 0x20),1);
                                        if (iVar1 != 0) {
                                          *(undefined4 *)(param_2 + 0x28) = 1;
                                          BN_set_negative(*(undefined8 *)(param_2 + 0x10),0);
                                          BN_set_negative(*(undefined8 *)(param_2 + 0x18),0);
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
  BN_CTX_end(param_5);
  return (ulonglong)local_res10;
}

// FUN_14f7a9000 @ 14f7a9000

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f7a9000(longlong param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                       undefined8 *param_5,undefined8 *param_6,undefined8 param_7)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar6 = 0x14f7a9018;
  if (((1 < param_4) || (iVar1 = BN_is_zero(*(undefined8 *)(param_1 + 0x10)), iVar1 != 0)) ||
     (iVar1 = BN_is_zero(*(undefined8 *)(param_1 + 0x18)), iVar1 != 0)) {
    uVar2 = ec_wNAF_mul(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar6);
    return uVar2;
  }
  if (param_3 == 0) {
    if (param_4 == 1) {
      uVar2 = ec_scalar_mul_ladder(param_1,param_2,*param_6,*param_5,param_7);
      return uVar2;
    }
  }
  else if (param_4 == 0) {
    uVar2 = ec_scalar_mul_ladder(param_1,param_2,param_3,0,param_7);
    return uVar2;
  }
  lVar3 = EC_POINT_new(param_1);
  if (lVar3 == 0) {
    ERR_put_error(0x10,0x121,0x41,"crypto\\ec\\ec2_smpl.c",CONCAT44(uVar5,0x36b));
    return 0;
  }
  iVar1 = ec_scalar_mul_ladder(param_1,lVar3,param_3,0,param_7);
  uVar4 = 0;
  if ((iVar1 != 0) &&
     (iVar1 = ec_scalar_mul_ladder(param_1,param_2,*param_6,*param_5,param_7), uVar4 = 0, iVar1 != 0
     )) {
    iVar1 = EC_POINT_add(param_1,param_2,lVar3,param_2,param_7);
    uVar4 = 0;
    if (iVar1 != 0) {
      uVar4 = 1;
    }
  }
  EC_POINT_free(lVar3);
  return (ulonglong)uVar4;
}

// FUN_14f7a91d0 @ 14f7a91d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f7a91d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f7a91dc;
  uVar1 = BN_GF2m_mod_inv(param_2,param_3,*(undefined8 *)(param_1 + 0x40));
  if ((int)uVar1 == 0) {
    ERR_put_error(0x10,0x128,0xa5,"crypto\\ec\\ec2_smpl.c",0x386,uVar2);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}

// ec_GF2m_simple_group_init @ 14f7a9230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GF2m_simple_group_init(longlong param_1)

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
    return 1;
  }
  BN_free();
  BN_free(*(undefined8 *)(param_1 + 0x60));
  BN_free(*(undefined8 *)(param_1 + 0x68));
  return 0;
}

// ec_GF2m_simple_group_finish @ 14f7a92b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GF2m_simple_group_finish(longlong param_1)

{
  BN_free(*(undefined8 *)(param_1 + 0x40));
  BN_free(*(undefined8 *)(param_1 + 0x60));
  BN_free(*(undefined8 *)(param_1 + 0x68));
  return;
}

// ec_GF2m_simple_group_clear_finish @ 14f7a92f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GF2m_simple_group_clear_finish(longlong param_1)

{
  BN_clear_free(*(undefined8 *)(param_1 + 0x40));
  BN_clear_free(*(undefined8 *)(param_1 + 0x60));
  BN_clear_free(*(undefined8 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}

// ec_GF2m_simple_group_copy @ 14f7a9340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GF2m_simple_group_copy(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = BN_copy(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x40));
  if (lVar2 != 0) {
    lVar2 = BN_copy(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_2 + 0x60));
    if (lVar2 != 0) {
      lVar2 = BN_copy(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_2 + 0x68));
      if (lVar2 != 0) {
        iVar1 = *(int *)(param_2 + 0x48);
        *(int *)(param_1 + 0x48) = iVar1;
        iVar1 = iVar1 + 0x3f;
        *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
        *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
        lVar2 = bn_wexpand(*(undefined8 *)(param_1 + 0x60),
                           (int)((iVar1 >> 0x1f & 0x3fU) + iVar1) >> 6);
        if (lVar2 != 0) {
          iVar1 = *(int *)(param_1 + 0x48) + 0x3f;
          lVar2 = bn_wexpand(*(undefined8 *)(param_1 + 0x68),
                             (int)((iVar1 >> 0x1f & 0x3fU) + iVar1) >> 6);
          if (lVar2 != 0) {
            bn_set_all_zero(*(undefined8 *)(param_1 + 0x60));
            bn_set_all_zero(*(undefined8 *)(param_1 + 0x68));
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

// ec_GF2m_simple_group_set_curve @ 14f7a9430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ec_GF2m_simple_group_set_curve
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f7a9445;
  lVar2 = BN_copy(*(undefined8 *)(param_1 + 0x40));
  if (lVar2 == 0) {
    return 0;
  }
  iVar1 = BN_GF2m_poly2arr(*(undefined8 *)(param_1 + 0x40),param_1 + 0x48,6);
  if ((iVar1 - 4U & 0xfffffffd) == 0) {
    iVar1 = BN_GF2m_mod_arr(*(undefined8 *)(param_1 + 0x60),param_3,param_1 + 0x48);
    if ((iVar1 != 0) &&
       (iVar1 = *(int *)(param_1 + 0x48) + 0x3f,
       lVar2 = bn_wexpand(*(undefined8 *)(param_1 + 0x60),
                          (int)((iVar1 >> 0x1f & 0x3fU) + iVar1) >> 6), lVar2 != 0)) {
      bn_set_all_zero(*(undefined8 *)(param_1 + 0x60));
      iVar1 = BN_GF2m_mod_arr(*(undefined8 *)(param_1 + 0x68),param_4,param_1 + 0x48);
      if ((iVar1 != 0) &&
         (iVar1 = *(int *)(param_1 + 0x48) + 0x3f,
         lVar2 = bn_wexpand(*(undefined8 *)(param_1 + 0x68),
                            (int)((iVar1 >> 0x1f & 0x3fU) + iVar1) >> 6), lVar2 != 0)) {
        bn_set_all_zero(*(undefined8 *)(param_1 + 0x68));
        return 1;
      }
    }
  }
  else {
    ERR_put_error(0x10,0xc3,0x83,"crypto\\ec\\ec2_smpl.c",0x6a,uVar3);
  }
  return 0;
}

// ec_GF2m_simple_group_get_curve @ 14f7a9560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ec_GF2m_simple_group_get_curve(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0) && (lVar1 = BN_copy(param_2,*(undefined8 *)(param_1 + 0x40)), lVar1 == 0)) {
    return 0;
  }
  if (((param_3 == 0) || (lVar1 = BN_copy(param_3,*(undefined8 *)(param_1 + 0x60)), lVar1 != 0)) &&
     ((param_4 == 0 || (lVar1 = BN_copy(param_4,*(undefined8 *)(param_1 + 0x68)), lVar1 != 0)))) {
    uVar2 = 1;
  }
  return uVar2;
}

// ec_GF2m_simple_group_get_degree @ 14f7a95f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ec_GF2m_simple_group_get_degree(longlong param_1)

{
  int iVar1;
  
  iVar1 = BN_num_bits(*(undefined8 *)(param_1 + 0x40));
  return iVar1 + -1;
}

// ec_GF2m_simple_group_check_discriminant @ 14f7a9620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ec_GF2m_simple_group_check_discriminant(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f7a963b;
  lVar4 = 0;
  uVar3 = 0;
  if ((param_2 == 0) && (param_2 = BN_CTX_new(), lVar4 = param_2, param_2 == 0)) {
    ERR_put_error(0x10,0x9f,0x41,"crypto\\ec\\ec2_smpl.c",0xb9,uVar5);
  }
  else {
    BN_CTX_start(param_2);
    lVar2 = BN_CTX_get(param_2);
    if ((lVar2 != 0) &&
       (iVar1 = BN_GF2m_mod_arr(lVar2,*(undefined8 *)(param_1 + 0x68),param_1 + 0x48), uVar3 = 0,
       iVar1 != 0)) {
      iVar1 = BN_is_zero(lVar2);
      uVar3 = 0;
      if (iVar1 == 0) {
        uVar3 = 1;
      }
    }
  }
  BN_CTX_end(param_2);
  BN_CTX_free(lVar4);
  return uVar3;
}

// ec_GF2m_simple_point_init @ 14f7a9700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GF2m_simple_point_init(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = BN_new();
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = BN_new();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  lVar2 = BN_new();
  *(longlong *)(param_1 + 0x20) = lVar2;
  if (((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) && (lVar2 != 0)
     ) {
    return 1;
  }
  BN_free();
  BN_free(*(undefined8 *)(param_1 + 0x18));
  BN_free(*(undefined8 *)(param_1 + 0x20));
  return 0;
}

// ec_GF2m_simple_point_finish @ 14f7a9780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GF2m_simple_point_finish(longlong param_1)

{
  BN_free(*(undefined8 *)(param_1 + 0x10));
  BN_free(*(undefined8 *)(param_1 + 0x18));
  BN_free(*(undefined8 *)(param_1 + 0x20));
  return;
}

// ec_GF2m_simple_point_clear_finish @ 14f7a97c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GF2m_simple_point_clear_finish(longlong param_1)

{
  BN_clear_free(*(undefined8 *)(param_1 + 0x10));
  BN_clear_free(*(undefined8 *)(param_1 + 0x18));
  BN_clear_free(*(undefined8 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

// ec_GF2m_simple_point_copy @ 14f7a9800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GF2m_simple_point_copy(longlong param_1,longlong param_2)

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

// ec_GF2m_simple_point_set_to_infinity @ 14f7a9880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ec_GF2m_simple_point_set_to_infinity
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined4 *)(param_2 + 0x28) = 0;
  BN_set_word(*(undefined8 *)(param_2 + 0x20),0,param_3,param_4,0x14f7a988a);
  return 1;
}

// ec_GF2m_simple_point_set_affine_coordinates @ 14f7a98b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ec_GF2m_simple_point_set_affine_coordinates
          (undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar1 = BN_copy(*(undefined8 *)(param_2 + 0x10),param_3);
    if (lVar1 != 0) {
      BN_set_negative(*(undefined8 *)(param_2 + 0x10),0);
      lVar1 = BN_copy(*(undefined8 *)(param_2 + 0x18),param_4);
      if (lVar1 != 0) {
        BN_set_negative(*(undefined8 *)(param_2 + 0x18),0);
        uVar2 = BN_value_one();
        lVar1 = BN_copy(*(undefined8 *)(param_2 + 0x20),uVar2);
        if (lVar1 != 0) {
          BN_set_negative(*(undefined8 *)(param_2 + 0x20),0);
          uVar3 = 1;
          *(undefined4 *)(param_2 + 0x28) = 1;
        }
      }
    }
    return uVar3;
  }
  ERR_put_error(0x10,0xa3,0x43,"crypto\\ec\\ec2_smpl.c",0x11f,0x14f7a98c5);
  return 0;
}

// ec_GF2m_simple_point_get_affine_coordinates @ 14f7a9990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
ec_GF2m_simple_point_get_affine_coordinates
          (undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f7a99aa;
  iVar1 = EC_POINT_is_at_infinity();
  if (iVar1 == 0) {
    uVar2 = BN_value_one();
    iVar1 = BN_cmp(*(undefined8 *)(param_2 + 0x20),uVar2);
    if (iVar1 == 0) {
      if (param_3 != 0) {
        lVar3 = BN_copy(param_3,*(undefined8 *)(param_2 + 0x10));
        if (lVar3 == 0) {
          return 0;
        }
        BN_set_negative(param_3,0);
      }
      if (param_4 != 0) {
        lVar3 = BN_copy(param_4,*(undefined8 *)(param_2 + 0x18));
        if (lVar3 == 0) {
          return 0;
        }
        BN_set_negative(param_4,0);
      }
      uVar4 = 1;
    }
    else {
      ERR_put_error(0x10,0xa2,0x42,"crypto\\ec\\ec2_smpl.c",0x146,uVar5);
      uVar4 = 0;
    }
  }
  else {
    ERR_put_error(0x10,0xa2,0x6a,"crypto\\ec\\ec2_smpl.c",0x140,uVar5);
    uVar4 = 0;
  }
  return uVar4;
}

// ec_GF2m_simple_add @ 14f7a9a90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ec_GF2m_simple_add(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                       longlong param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  bool bVar13;
  
  lVar2 = 0;
  bVar13 = false;
  iVar1 = EC_POINT_is_at_infinity(param_1,param_3);
  lVar10 = param_4;
  if ((iVar1 != 0) ||
     (iVar1 = EC_POINT_is_at_infinity(param_1,param_4), lVar10 = param_3, iVar1 != 0)) {
    iVar1 = EC_POINT_copy(param_2,lVar10);
    return iVar1 != 0;
  }
  if ((param_5 == 0) && (lVar2 = BN_CTX_new(), param_5 = lVar2, lVar2 == 0)) {
    return false;
  }
  BN_CTX_start(param_5);
  uVar3 = BN_CTX_get(param_5);
  uVar4 = BN_CTX_get(param_5);
  uVar5 = BN_CTX_get(param_5);
  uVar6 = BN_CTX_get(param_5);
  uVar7 = BN_CTX_get(param_5);
  uVar8 = BN_CTX_get(param_5);
  uVar9 = BN_CTX_get(param_5);
  lVar10 = BN_CTX_get(param_5);
  if (lVar10 != 0) {
    if (*(int *)(param_3 + 0x28) == 0) {
      iVar1 = EC_POINT_get_affine_coordinates(param_1,param_3,uVar3,uVar4,param_5);
      bVar12 = iVar1 == 0;
    }
    else {
      lVar11 = BN_copy(uVar3,*(undefined8 *)(param_3 + 0x10));
      if (lVar11 == 0) goto LAB_14f7a9e5f;
      lVar11 = BN_copy(uVar4,*(undefined8 *)(param_3 + 0x18));
      bVar12 = lVar11 == 0;
    }
    if (!bVar12) {
      if (*(int *)(param_4 + 0x28) == 0) {
        iVar1 = EC_POINT_get_affine_coordinates(param_1,param_4,uVar5,uVar6,param_5);
        if (iVar1 == 0) goto LAB_14f7a9e5f;
      }
      else {
        lVar11 = BN_copy(uVar5,*(undefined8 *)(param_4 + 0x10));
        if ((lVar11 == 0) || (lVar11 = BN_copy(uVar6,*(undefined8 *)(param_4 + 0x18)), lVar11 == 0))
        goto LAB_14f7a9e5f;
      }
      iVar1 = BN_ucmp(uVar3,uVar5);
      if (iVar1 == 0) {
        iVar1 = BN_ucmp(uVar4,uVar6);
        if ((iVar1 != 0) || (iVar1 = BN_is_zero(uVar5), iVar1 != 0)) {
          iVar1 = EC_POINT_set_to_infinity(param_1,param_2);
          bVar13 = iVar1 != 0;
          goto LAB_14f7a9e5f;
        }
        iVar1 = (**(code **)(*param_1 + 0x118))(param_1,uVar9,uVar6,uVar5,param_5);
        if ((((iVar1 == 0) || (iVar1 = BN_GF2m_add(uVar9,uVar9,uVar5), iVar1 == 0)) ||
            (iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar7,uVar9,param_5), iVar1 == 0)) ||
           (iVar1 = BN_GF2m_add(uVar7,uVar7,uVar9), iVar1 == 0)) goto LAB_14f7a9e5f;
        lVar10 = param_1[0xc];
      }
      else {
        iVar1 = BN_GF2m_add(lVar10,uVar3,uVar5);
        if ((((iVar1 == 0) || (iVar1 = BN_GF2m_add(uVar9,uVar4,uVar6), iVar1 == 0)) ||
            ((iVar1 = (**(code **)(*param_1 + 0x118))(param_1,uVar9,uVar9,lVar10,param_5),
             iVar1 == 0 ||
             ((iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar7,uVar9,param_5), iVar1 == 0 ||
              (iVar1 = BN_GF2m_add(uVar7,uVar7,param_1[0xc]), iVar1 == 0)))))) ||
           (iVar1 = BN_GF2m_add(uVar7,uVar7,uVar9), iVar1 == 0)) goto LAB_14f7a9e5f;
      }
      iVar1 = BN_GF2m_add(uVar7,uVar7,lVar10);
      if (((((iVar1 != 0) && (iVar1 = BN_GF2m_add(uVar8,uVar5,uVar7), iVar1 != 0)) &&
           (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar8,uVar8,uVar9,param_5), iVar1 != 0))
          && ((iVar1 = BN_GF2m_add(uVar8,uVar8,uVar7), iVar1 != 0 &&
              (iVar1 = BN_GF2m_add(uVar8,uVar8,uVar6), iVar1 != 0)))) &&
         (iVar1 = EC_POINT_set_affine_coordinates(param_1,param_2,uVar7,uVar8,param_5), iVar1 != 0))
      {
        bVar13 = true;
      }
    }
  }
LAB_14f7a9e5f:
  BN_CTX_end(param_5);
  BN_CTX_free(lVar2);
  return bVar13;
}

// ec_GF2m_simple_dbl @ 14f7a9ea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GF2m_simple_dbl(void)

{
  ec_GF2m_simple_add();
  return;
}

// ec_GF2m_simple_invert @ 14f7a9ed0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GF2m_simple_invert(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EC_POINT_is_at_infinity();
  if (iVar1 == 0) {
    iVar1 = BN_is_zero(*(undefined8 *)(param_2 + 0x18));
    if (iVar1 == 0) {
      uVar2 = EC_POINT_make_affine(param_1,param_2,param_3);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      uVar2 = BN_GF2m_add(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
                          *(undefined8 *)(param_2 + 0x18));
      return uVar2;
    }
  }
  return 1;
}

// ec_GF2m_simple_is_at_infinity @ 14f7a9f70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GF2m_simple_is_at_infinity(undefined8 param_1,longlong param_2)

{
  BN_is_zero(*(undefined8 *)(param_2 + 0x20));
  return;
}

// ec_GF2m_simple_is_on_curve @ 14f7a9f90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ec_GF2m_simple_is_on_curve(longlong *param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  uVar4 = 0xffffffff;
  uVar7 = 0xffffffff;
  iVar3 = EC_POINT_is_at_infinity();
  if (iVar3 != 0) {
    return 1;
  }
  pcVar1 = *(code **)(*param_1 + 0x108);
  pcVar2 = *(code **)(*param_1 + 0x110);
  if (*(int *)(param_2 + 0x28) != 0) {
    lVar8 = 0;
    if ((param_3 == 0) && (param_3 = BN_CTX_new(), lVar8 = param_3, param_3 == 0)) {
      return 0xffffffff;
    }
    BN_CTX_start(param_3);
    uVar5 = BN_CTX_get(param_3);
    lVar6 = BN_CTX_get(param_3);
    if (((((lVar6 != 0) &&
          (iVar3 = BN_GF2m_add(lVar6,*(undefined8 *)(param_2 + 0x10),param_1[0xc]), uVar4 = uVar7,
          iVar3 != 0)) &&
         (iVar3 = (*pcVar1)(param_1,lVar6,lVar6,*(undefined8 *)(param_2 + 0x10),param_3), iVar3 != 0
         )) && ((iVar3 = BN_GF2m_add(lVar6,lVar6,*(undefined8 *)(param_2 + 0x18)), iVar3 != 0 &&
                (iVar3 = (*pcVar1)(param_1,lVar6,lVar6,*(undefined8 *)(param_2 + 0x10),param_3),
                iVar3 != 0)))) &&
       ((iVar3 = BN_GF2m_add(lVar6,lVar6,param_1[0xd]), iVar3 != 0 &&
        ((iVar3 = (*pcVar2)(param_1,uVar5,*(undefined8 *)(param_2 + 0x18),param_3), iVar3 != 0 &&
         (iVar3 = BN_GF2m_add(lVar6,lVar6,uVar5), iVar3 != 0)))))) {
      uVar4 = BN_is_zero(lVar6);
    }
    BN_CTX_end(param_3);
    BN_CTX_free(lVar8);
  }
  return uVar4;
}

// ec_GF2m_simple_cmp @ 14f7aa110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_GF2m_simple_cmp(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar6 = 0;
  iVar1 = EC_POINT_is_at_infinity();
  if (iVar1 == 0) {
    iVar1 = EC_POINT_is_at_infinity(param_1,param_3);
    if (iVar1 == 0) {
      if ((*(int *)(param_2 + 0x28) == 0) || (*(int *)(param_3 + 0x28) == 0)) {
        uVar8 = uVar6;
        uVar7 = 0xffffffff;
        if ((param_4 != 0) || (param_4 = BN_CTX_new(), uVar8 = param_4, param_4 != 0)) {
          BN_CTX_start(param_4);
          uVar2 = BN_CTX_get(param_4);
          uVar3 = BN_CTX_get(param_4);
          uVar4 = BN_CTX_get(param_4);
          lVar5 = BN_CTX_get(param_4);
          if ((((lVar5 != 0) &&
               (iVar1 = EC_POINT_get_affine_coordinates(param_1,param_2,uVar2,uVar3,param_4),
               uVar7 = 0xffffffff, iVar1 != 0)) &&
              (iVar1 = EC_POINT_get_affine_coordinates(param_1,param_3,uVar4,lVar5,param_4),
              iVar1 != 0)) &&
             ((iVar1 = BN_cmp(uVar2,uVar4), iVar1 != 0 ||
              (iVar1 = BN_cmp(uVar3,lVar5), uVar7 = uVar6, iVar1 != 0)))) {
            uVar7 = 1;
          }
          BN_CTX_end(param_4);
          BN_CTX_free(uVar8);
        }
      }
      else {
        iVar1 = BN_cmp(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_3 + 0x10));
        if ((iVar1 != 0) ||
           (iVar1 = BN_cmp(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_3 + 0x18)),
           uVar7 = uVar6, iVar1 != 0)) {
          uVar7 = 1;
        }
      }
    }
    else {
      uVar7 = 1;
    }
  }
  else {
    iVar1 = EC_POINT_is_at_infinity(param_1,param_3);
    uVar7 = (ulonglong)(iVar1 == 0);
  }
  return uVar7;
}

// ec_GF2m_simple_make_affine @ 14f7aa2b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_GF2m_simple_make_affine(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = 0;
  if ((*(int *)(param_2 + 0x28) != 0) || (iVar1 = EC_POINT_is_at_infinity(), iVar1 != 0)) {
    return 1;
  }
  lVar2 = 0;
  if ((param_3 == 0) && (lVar2 = BN_CTX_new(), param_3 = lVar2, lVar2 == 0)) {
    return 0;
  }
  BN_CTX_start(param_3);
  uVar3 = BN_CTX_get(param_3);
  lVar4 = BN_CTX_get(param_3);
  lVar6 = 0;
  if ((((lVar4 != 0) &&
       (iVar1 = EC_POINT_get_affine_coordinates(param_1,param_2,uVar3,lVar4,param_3), lVar6 = lVar5,
       iVar1 != 0)) && (lVar5 = BN_copy(*(undefined8 *)(param_2 + 0x10),uVar3), lVar5 != 0)) &&
     ((lVar5 = BN_copy(*(undefined8 *)(param_2 + 0x18),lVar4), lVar5 != 0 &&
      (iVar1 = BN_set_word(*(undefined8 *)(param_2 + 0x20),1), iVar1 != 0)))) {
    *(undefined4 *)(param_2 + 0x28) = 1;
    lVar6 = 1;
  }
  BN_CTX_end(param_3);
  BN_CTX_free(lVar2);
  return lVar6;
}

// ec_GF2m_simple_points_make_affine @ 14f7aa3d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ec_GF2m_simple_points_make_affine
          (longlong *param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = (**(code **)(*param_1 + 0xe0))(param_1,*(undefined8 *)(param_3 + uVar2 * 8),param_4);
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
  }
  return 1;
}

// ec_GF2m_simple_field_mul @ 14f7aa460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GF2m_simple_field_mul
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  BN_GF2m_mod_mul_arr(param_2,param_3,param_4,param_1 + 0x48);
  return;
}

// ec_GF2m_simple_field_sqr @ 14f7aa4a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GF2m_simple_field_sqr(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  BN_GF2m_mod_sqr_arr(param_2,param_3,param_1 + 0x48);
  return;
}

// ec_GF2m_simple_field_div @ 14f7aa4d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GF2m_simple_field_div
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  BN_GF2m_mod_div(param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x40));
  return;
}

// EC_GF2m_simple_method @ 14f7aa510

undefined * EC_GF2m_simple_method(void)

{
  return &DAT_1534e67f0;
}

