// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 38

// ECDSA_SIG_free @ 14f714d60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ECDSA_SIG_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    BN_clear_free(*param_1);
    BN_clear_free(param_1[1]);
    CRYPTO_free(param_1,"crypto\\ec\\ec_asn1.c",0x4fe);
  }
  return;
}

// ECDSA_SIG_get0 @ 14f714db0

void ECDSA_SIG_get0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = param_1[1];
  }
  return;
}

// ECDSA_SIG_new @ 14f714e00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ECDSA_SIG_new(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f714e0c;
  lVar1 = CRYPTO_zalloc(0x10,"crypto\\ec\\ec_asn1.c",0x4f2);
  if (lVar1 == 0) {
    ERR_put_error(0x10,0x109,0x41,"crypto\\ec\\ec_asn1.c",0x4f4,uVar2);
  }
  return lVar1;
}

// ECDSA_SIG_set0 @ 14f714e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ECDSA_SIG_set0(longlong *param_1,longlong param_2,longlong param_3)

{
  if ((param_2 != 0) && (param_3 != 0)) {
    BN_clear_free(*param_1);
    BN_clear_free(param_1[1]);
    *param_1 = param_2;
    param_1[1] = param_3;
    return 1;
  }
  return 0;
}

// ECDSA_size @ 14f714ed0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ECDSA_size(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res8 [32];
  int local_28 [2];
  undefined1 *local_20;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f714eda;
  if (param_1 != 0) {
    lVar2 = EC_KEY_get0_group();
    if (lVar2 != 0) {
      iVar1 = EC_GROUP_order_bits(lVar2);
      if (iVar1 != 0) {
        local_28[1] = 2;
        local_res8[0] = 0xff;
        local_28[0] = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
        local_20 = local_res8;
        iVar1 = i2d_ASN1_INTEGER(local_28,0);
        iVar1 = ASN1_object_size(1,iVar1 * 2,0x10);
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        return iVar1;
      }
    }
  }
  return 0;
}

// ECPARAMETERS_free @ 14f714f60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ECPARAMETERS_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b4950);
  return;
}

// ECPARAMETERS_new @ 14f714f90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ECPARAMETERS_new(void)

{
  ASN1_item_new(&DAT_1534b4950);
  return;
}

// ECPKPARAMETERS_free @ 14f714fc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ECPKPARAMETERS_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b49e0);
  return;
}

// ECPKPARAMETERS_new @ 14f714ff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ECPKPARAMETERS_new(void)

{
  ASN1_item_new(&DAT_1534b49e0);
  return;
}

// EC_GROUP_get_basis_type @ 14f715020

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 EC_GROUP_get_basis_type(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong lVar5;
  
  uVar3 = EC_GROUP_method_of();
  iVar2 = EC_METHOD_get_field_type(uVar3);
  if (iVar2 != 0x197) {
    return 0;
  }
  piVar4 = (int *)(param_1 + 0x48);
  iVar2 = 0;
  lVar5 = 0;
  do {
    if (*piVar4 == 0) break;
    iVar2 = iVar2 + 1;
    lVar5 = lVar5 + 1;
    piVar4 = piVar4 + 1;
  } while (lVar5 < 6);
  if (iVar2 == 4) {
    return 0x2ab;
  }
  uVar1 = 0;
  if (iVar2 == 2) {
    uVar1 = 0x2aa;
  }
  return uVar1;
}

// EC_GROUP_get_ecparameters @ 14f7150a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * EC_GROUP_get_ecparameters(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffffe8;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar8 = 0x14f7150ba;
  local_res10 = 0;
  puVar2 = param_2;
  if ((param_2 == (undefined4 *)0x0) &&
     (puVar2 = (undefined4 *)ASN1_item_new(&DAT_1534b4950), puVar2 == (undefined4 *)0x0)) {
    ERR_put_error(0x10,0x105,0x41,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar5,0x1cb),uVar8);
    goto LAB_14f7152a6;
  }
  *puVar2 = 1;
  iVar1 = FUN_14f7167e0(param_1,*(undefined8 *)(puVar2 + 2));
  if (iVar1 == 0) {
    uVar6 = CONCAT44(uVar5,0x1d6);
    uVar5 = 0x10;
  }
  else {
    iVar1 = FUN_14f716560(param_1,*(undefined8 *)(puVar2 + 4));
    if (iVar1 == 0) {
      uVar6 = CONCAT44(uVar5,0x1dc);
      uVar5 = 0x10;
    }
    else {
      lVar3 = EC_GROUP_get0_generator(param_1);
      if (lVar3 == 0) {
        uVar6 = CONCAT44(uVar5,0x1e2);
        uVar5 = 0x71;
      }
      else {
        uVar5 = EC_GROUP_get_point_conversion_form(param_1);
        uVar7 = 0;
        uVar4 = EC_POINT_point2buf(param_1,lVar3,uVar5,&local_res10,0);
        if (uVar4 == 0) {
          uVar6 = CONCAT44(uVar7,0x1ea);
          uVar5 = 0x10;
        }
        else {
          if (*(longlong *)(puVar2 + 6) == 0) {
            lVar3 = ASN1_OCTET_STRING_new();
            *(longlong *)(puVar2 + 6) = lVar3;
            if (lVar3 == 0) {
              CRYPTO_free(local_res10,"crypto\\ec\\ec_asn1.c",0x1ee);
              uVar5 = 0x41;
              uVar6 = CONCAT44(uVar7,0x1ef);
              goto LAB_14f715290;
            }
          }
          ASN1_STRING_set0(*(undefined8 *)(puVar2 + 6),local_res10,uVar4 & 0xffffffff);
          lVar3 = EC_GROUP_get0_order(param_1);
          if (lVar3 == 0) {
            uVar6 = CONCAT44(uVar7,0x1f7);
            uVar5 = 0x10;
          }
          else {
            uVar6 = *(undefined8 *)(puVar2 + 8);
            lVar3 = BN_to_ASN1_INTEGER(lVar3,uVar6);
            *(longlong *)(puVar2 + 8) = lVar3;
            if (lVar3 == 0) {
              *(undefined8 *)(puVar2 + 8) = uVar6;
              uVar6 = CONCAT44(uVar7,0x1fd);
            }
            else {
              lVar3 = EC_GROUP_get0_cofactor(param_1);
              if (lVar3 == 0) {
                return puVar2;
              }
              uVar6 = *(undefined8 *)(puVar2 + 10);
              lVar3 = BN_to_ASN1_INTEGER(lVar3,uVar6);
              *(longlong *)(puVar2 + 10) = lVar3;
              if (lVar3 != 0) {
                return puVar2;
              }
              *(undefined8 *)(puVar2 + 10) = uVar6;
              uVar6 = CONCAT44(uVar7,0x207);
            }
            uVar5 = 0xd;
          }
        }
      }
    }
  }
LAB_14f715290:
  ERR_put_error(0x10,0x105,uVar5,"crypto\\ec\\ec_asn1.c",uVar6,uVar8);
  if (param_2 != (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
LAB_14f7152a6:
  ASN1_item_free(puVar2,&DAT_1534b4950);
  return (undefined4 *)0x0;
}

// EC_GROUP_get_ecpkparameters @ 14f7152e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * EC_GROUP_get_ecpkparameters(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f7152f0;
  if (param_2 == (int *)0x0) {
    param_2 = (int *)ASN1_item_new(&DAT_1534b49e0);
    if (param_2 == (int *)0x0) {
      ERR_put_error(0x10,0x106,0x41,"crypto\\ec\\ec_asn1.c",0x21c,uVar4);
      return (int *)0x0;
    }
  }
  else if (*param_2 == 0) {
    ASN1_OBJECT_free(*(undefined8 *)(param_2 + 2));
  }
  else if ((*param_2 == 1) && (*(longlong *)(param_2 + 2) != 0)) {
    ASN1_item_free(*(longlong *)(param_2 + 2),&DAT_1534b4950);
  }
  iVar1 = EC_GROUP_get_asn1_flag(param_1);
  if (iVar1 == 1) {
    iVar1 = EC_GROUP_get_curve_name();
    if (iVar1 != 0) {
      lVar2 = OBJ_nid2obj(iVar1);
      if ((lVar2 != 0) && (lVar3 = OBJ_length(lVar2), lVar3 != 0)) {
        *param_2 = 0;
        *(longlong *)(param_2 + 2) = lVar2;
        return param_2;
      }
      ASN1_OBJECT_free(lVar2);
      ERR_put_error(0x10,0x106,0xa7,"crypto\\ec\\ec_asn1.c",0x231);
    }
  }
  else {
    *param_2 = 1;
    lVar2 = EC_GROUP_get_ecparameters(param_1,0);
    *(longlong *)(param_2 + 2) = lVar2;
    if (lVar2 != 0) {
      return param_2;
    }
  }
  ASN1_item_free(param_2,&DAT_1534b49e0);
  return (int *)0x0;
}

// EC_GROUP_get_pentanomial_basis @ 14f715420

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EC_GROUP_get_pentanomial_basis
          (longlong param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f71543b;
  if (param_1 != 0) {
    uVar2 = EC_GROUP_method_of();
    iVar1 = EC_METHOD_get_field_type(uVar2);
    if ((((iVar1 == 0x197) && (*(int *)(param_1 + 0x48) != 0)) && (*(int *)(param_1 + 0x4c) != 0))
       && (((*(int *)(param_1 + 0x50) != 0 && (*(int *)(param_1 + 0x54) != 0)) &&
           (*(int *)(param_1 + 0x58) == 0)))) {
      if (param_2 != (int *)0x0) {
        *param_2 = *(int *)(param_1 + 0x54);
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(param_1 + 0x50);
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(param_1 + 0x4c);
      }
      return 1;
    }
    ERR_put_error(0x10,0xc1,0x42,"crypto\\ec\\ec_asn1.c",0x4a,uVar3);
  }
  return 0;
}

// EC_GROUP_get_trinomial_basis @ 14f7154f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_GROUP_get_trinomial_basis(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f715500;
  if (param_1 != 0) {
    uVar2 = EC_GROUP_method_of();
    iVar1 = EC_METHOD_get_field_type(uVar2);
    if ((((iVar1 == 0x197) && (*(int *)(param_1 + 0x48) != 0)) && (*(int *)(param_1 + 0x4c) != 0))
       && (*(int *)(param_1 + 0x50) == 0)) {
      if (param_2 != (int *)0x0) {
        *param_2 = *(int *)(param_1 + 0x4c);
      }
      return 1;
    }
    ERR_put_error(0x10,0xc2,0x42,"crypto\\ec\\ec_asn1.c",0x34,uVar3);
  }
  return 0;
}

// EC_GROUP_new_from_ecparameters @ 14f715590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EC_GROUP_new_from_ecparameters(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong local_res8;
  longlong local_res18;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar18 = 0x14f7155aa;
  plVar1 = *(longlong **)(param_1 + 8);
  lVar9 = 0;
  local_res8 = 0;
  local_res18 = 0;
  lVar12 = 0;
  lVar13 = 0;
  lVar16 = 0;
  lVar15 = 0;
  if (((plVar1 == (longlong *)0x0) || (*plVar1 == 0)) || (plVar1[1] == 0)) {
    uVar17 = 0x255;
    uVar14 = 0x73;
LAB_14f715649:
    ERR_put_error(0x10,0x107,uVar14,"crypto\\ec\\ec_asn1.c",uVar17,uVar18);
    lVar12 = lVar9;
    local_res8 = lVar9;
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if (((puVar2 == (undefined8 *)0x0) ||
        (puVar3 = (undefined4 *)*puVar2, puVar3 == (undefined4 *)0x0)) ||
       ((*(longlong *)(puVar3 + 2) == 0 || ((puVar2[1] == 0 || (*(longlong *)(puVar2[1] + 8) == 0)))
        ))) {
      uVar17 = 0x262;
      uVar14 = 0x73;
      goto LAB_14f715649;
    }
    lVar16 = BN_bin2bn(*(longlong *)(puVar3 + 2),*puVar3,0);
    if (lVar16 == 0) {
      uVar17 = 0x267;
      lVar15 = lVar9;
LAB_14f715643:
      uVar14 = 3;
      lVar13 = lVar9;
      goto LAB_14f715649;
    }
    puVar3 = *(undefined4 **)(*(longlong *)(param_1 + 0x10) + 8);
    lVar15 = BN_bin2bn(*(undefined8 *)(puVar3 + 2),*puVar3,0);
    if (lVar15 == 0) {
      uVar17 = 0x26c;
      goto LAB_14f715643;
    }
    iVar6 = OBJ_obj2nid(**(undefined8 **)(param_1 + 8));
    if (iVar6 != 0x197) {
      if (iVar6 == 0x196) {
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
        if (lVar10 == 0) {
          uVar17 = CONCAT44(uVar14,0x2d0);
          uVar14 = 0x73;
        }
        else {
          lVar13 = ASN1_INTEGER_to_BN(lVar10,0);
          if (lVar13 == 0) {
            uVar17 = 0x2d5;
            uVar14 = 0xd;
          }
          else {
            iVar6 = BN_is_negative(lVar13);
            if ((iVar6 == 0) && (iVar6 = BN_is_zero(lVar13), iVar6 == 0)) {
              iVar6 = BN_num_bits(lVar13);
              if (0x295 < iVar6) {
                uVar17 = CONCAT44(uVar14,0x2e0);
                goto LAB_14f7156c2;
              }
              lVar12 = EC_GROUP_new_curve_GFp(lVar13,lVar16,lVar15,0);
LAB_14f7159df:
              lVar9 = local_res8;
              if (lVar12 == 0) {
                ERR_put_error(0x10,0x107,0x10,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar14,0x2ec));
                goto LAB_14f7157b3;
              }
              piVar4 = *(int **)(*(longlong *)(param_1 + 0x10) + 0x10);
              if (piVar4 == (int *)0x0) {
LAB_14f715ae9:
                if ((((*(longlong *)(param_1 + 0x20) != 0) &&
                     (piVar4 = *(int **)(param_1 + 0x18), piVar4 != (int *)0x0)) &&
                    (*(longlong *)(piVar4 + 2) != 0)) && (*piVar4 != 0)) {
                  lVar9 = EC_POINT_new(lVar12);
                  if (lVar9 != 0) {
                    EC_GROUP_set_point_conversion_form
                              (lVar12,**(byte **)(*(longlong *)(param_1 + 0x18) + 8) & 0xfe);
                    uVar14 = 0;
                    iVar7 = EC_POINT_oct2point(lVar12,lVar9,
                                               *(undefined8 *)(*(int **)(param_1 + 0x18) + 2),
                                               (longlong)**(int **)(param_1 + 0x18),0);
                    if (iVar7 != 0) {
                      lVar10 = ASN1_INTEGER_to_BN(*(undefined8 *)(param_1 + 0x20),lVar16);
                      if (lVar10 == 0) {
                        uVar18 = CONCAT44(uVar14,0x31e);
LAB_14f715b9e:
                        uVar14 = 0xd;
                      }
                      else {
                        iVar7 = BN_is_negative(lVar16);
                        if ((iVar7 == 0) && (iVar7 = BN_is_zero(lVar16), iVar7 == 0)) {
                          iVar7 = BN_num_bits(lVar16);
                          if (iVar6 + 1 < iVar7) {
                            ERR_put_error(0x10,0x107,0x7a,"crypto\\ec\\ec_asn1.c",
                                          CONCAT44(uVar14,0x326));
                            local_res8 = 0;
                            goto LAB_14f7157b3;
                          }
                          if (*(longlong *)(param_1 + 0x28) == 0) {
                            BN_free(lVar15);
                            lVar15 = 0;
                          }
                          else {
                            lVar10 = ASN1_INTEGER_to_BN(*(longlong *)(param_1 + 0x28),lVar15);
                            if (lVar10 == 0) {
                              uVar18 = CONCAT44(uVar14,0x32f);
                              goto LAB_14f715b9e;
                            }
                          }
                          iVar6 = EC_GROUP_set_generator(lVar12,lVar9,lVar16,lVar15);
                          if (iVar6 == 0) {
                            uVar18 = CONCAT44(uVar14,0x334);
                            uVar14 = 0x10;
                          }
                          else {
                            local_res18 = BN_CTX_new();
                            if (local_res18 != 0) {
                              local_res8 = EC_GROUP_dup(lVar12);
                              if (((local_res8 == 0) ||
                                  (lVar10 = EC_GROUP_set_seed(local_res8,0,0), lVar10 != 1)) ||
                                 (iVar6 = EC_GROUP_set_generator(local_res8,lVar9,lVar16,0),
                                 iVar6 == 0)) {
                                ERR_put_error(0x10,0x107,0x10,"crypto\\ec\\ec_asn1.c",
                                              CONCAT44(uVar14,0x34b));
                              }
                              else {
                                iVar6 = ec_curve_nid_from_params(local_res8,local_res18);
                                lVar10 = lVar12;
                                if (iVar6 == 0) goto LAB_14f7157bd;
                                lVar10 = EC_GROUP_new_by_curve_name(iVar6);
                                if (lVar10 == 0) {
                                  ERR_put_error(0x10,0x107,0x10,"crypto\\ec\\ec_asn1.c",
                                                CONCAT44(uVar14,0x364));
                                }
                                else {
                                  EC_GROUP_free(lVar12);
                                  EC_GROUP_set_asn1_flag(lVar10,0);
                                  if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) != 0) ||
                                     (lVar11 = EC_GROUP_set_seed(lVar10,0,0), lVar12 = lVar10,
                                     lVar11 == 1)) goto LAB_14f7157bd;
                                }
                              }
                              goto LAB_14f7157b3;
                            }
                            uVar18 = CONCAT44(uVar14,0x345);
                            uVar14 = 3;
                          }
                        }
                        else {
                          uVar18 = CONCAT44(uVar14,0x322);
                          uVar14 = 0x7a;
                        }
                      }
                      ERR_put_error(0x10,0x107,uVar14,"crypto\\ec\\ec_asn1.c",uVar18);
                      local_res8 = 0;
                      goto LAB_14f7157b3;
                    }
                    ERR_put_error(0x10,0x107,0x10,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar14,0x318));
                  }
                  local_res8 = 0;
                  goto LAB_14f7157b3;
                }
                uVar18 = 0x30a;
              }
              else {
                if (*piVar4 != 0) {
                  CRYPTO_free(*(undefined8 *)(lVar12 + 0x30),"crypto\\ec\\ec_asn1.c",0x2fc);
                  _Dst = (void *)CRYPTO_malloc((longlong)
                                               **(int **)(*(longlong *)(param_1 + 0x10) + 0x10),
                                               "crypto\\ec\\ec_asn1.c",0x2fd);
                  *(void **)(lVar12 + 0x30) = _Dst;
                  if (_Dst == (void *)0x0) {
                    ERR_put_error(0x10,0x107,0x41,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar14,0x2fe));
                    local_res8 = 0;
                    lVar9 = local_res8;
                    goto LAB_14f7157b3;
                  }
                  piVar4 = *(int **)(*(longlong *)(param_1 + 0x10) + 0x10);
                  memcpy(_Dst,*(void **)(piVar4 + 2),(longlong)*piVar4);
                  *(longlong *)(lVar12 + 0x38) =
                       (longlong)**(int **)(*(longlong *)(param_1 + 0x10) + 0x10);
                  goto LAB_14f715ae9;
                }
                uVar18 = CONCAT44(uVar14,0x2f9);
              }
              ERR_put_error(0x10,0x107,0x73,"crypto\\ec\\ec_asn1.c",uVar18);
              goto LAB_14f7157b3;
            }
            uVar17 = 0x2da;
            uVar14 = 0x67;
          }
        }
      }
      else {
        uVar17 = CONCAT44(uVar14,0x2e7);
        uVar14 = 0x67;
      }
      goto LAB_14f715649;
    }
    piVar4 = *(int **)(*(longlong *)(param_1 + 8) + 8);
    iVar6 = *piVar4;
    if (iVar6 < 0x296) {
      lVar13 = BN_new();
      if (lVar13 == 0) {
        ERR_put_error(0x10,0x107,0x41,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar14,0x285),uVar18);
        local_res8 = 0;
        lVar9 = 0;
      }
      else {
        iVar7 = OBJ_obj2nid(*(undefined8 *)(piVar4 + 2));
        if (iVar7 == 0x2aa) {
          if (*(longlong *)(piVar4 + 4) == 0) {
            ERR_put_error(0x10,0x107,0x73,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar14,0x290));
            local_res8 = 0;
            lVar9 = 0;
          }
          else {
            iVar7 = ASN1_INTEGER_get();
            if ((*piVar4 <= iVar7) || (iVar7 < 1)) {
              uVar18 = CONCAT44(uVar14,0x298);
              uVar14 = 0x89;
              goto LAB_14f7157a8;
            }
            iVar8 = BN_set_bit(lVar13);
            if (iVar8 != 0) {
LAB_14f715898:
              iVar7 = BN_set_bit(lVar13,iVar7);
              if ((iVar7 != 0) && (iVar7 = BN_set_bit(lVar13,0), iVar7 != 0)) {
                lVar12 = EC_GROUP_new_curve_GF2m(lVar13,lVar16,lVar15,0);
                goto LAB_14f7159df;
              }
            }
LAB_14f7157ad:
            local_res8 = 0;
            lVar9 = 0;
          }
        }
        else {
          if (iVar7 == 0x2ab) {
            piVar5 = *(int **)(piVar4 + 4);
            if (piVar5 == (int *)0x0) {
              uVar18 = CONCAT44(uVar14,0x2a8);
              uVar14 = 0x73;
            }
            else {
              if ((((piVar5[2] < *piVar4) && (piVar5[1] < piVar5[2])) && (*piVar5 < piVar5[1])) &&
                 (0 < *piVar5)) {
                iVar7 = BN_set_bit(lVar13);
                if (((iVar7 != 0) && (iVar7 = BN_set_bit(lVar13,*piVar5), iVar7 != 0)) &&
                   (iVar7 = BN_set_bit(lVar13,piVar5[1]), iVar7 != 0)) {
                  iVar7 = piVar5[2];
                  goto LAB_14f715898;
                }
                goto LAB_14f7157ad;
              }
              uVar18 = CONCAT44(uVar14,0x2b0);
              uVar14 = 0x84;
            }
LAB_14f7157a8:
            ERR_put_error(0x10,0x107,uVar14,"crypto\\ec\\ec_asn1.c",uVar18);
            goto LAB_14f7157ad;
          }
          if (iVar7 == 0x2a9) {
            ERR_put_error(0x10,0x107,0x7e,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar14,0x2c0));
            local_res8 = 0;
            lVar9 = 0;
          }
          else {
            ERR_put_error(0x10,0x107,0x73,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar14,0x2c4));
            local_res8 = 0;
            lVar9 = 0;
          }
        }
      }
    }
    else {
      uVar17 = CONCAT44(uVar14,0x280);
      lVar13 = lVar9;
LAB_14f7156c2:
      ERR_put_error(0x10,0x107,0x8f,"crypto\\ec\\ec_asn1.c",uVar17,uVar18);
      local_res8 = 0;
    }
  }
LAB_14f7157b3:
  EC_GROUP_free(lVar12);
  lVar10 = 0;
LAB_14f7157bd:
  EC_GROUP_free(local_res8);
  BN_free(lVar13);
  BN_free(lVar16);
  BN_free(lVar15);
  EC_POINT_free(lVar9);
  BN_CTX_free(local_res18);
  return lVar10;
}

// EC_GROUP_new_from_ecpkparameters @ 14f715e10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EC_GROUP_new_from_ecpkparameters(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if (param_1 == (int *)0x0) {
    ERR_put_error(0x10,0x108,0x7c,"crypto\\ec\\ec_asn1.c",0x398);
    return 0;
  }
  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar2 = OBJ_obj2nid(*(undefined8 *)(param_1 + 2));
    lVar3 = EC_GROUP_new_by_curve_name(uVar2);
    if (lVar3 != 0) {
      EC_GROUP_set_asn1_flag(lVar3,1);
      return lVar3;
    }
    uVar4 = 0x3a1;
    uVar2 = 0x77;
  }
  else if (iVar1 == 1) {
    lVar3 = EC_GROUP_new_from_ecparameters(*(undefined8 *)(param_1 + 2));
    if (lVar3 != 0) {
      EC_GROUP_set_asn1_flag(lVar3,0);
      return lVar3;
    }
    uVar4 = 0x3a9;
    uVar2 = 0x10;
  }
  else {
    if (iVar1 == 2) {
      return 0;
    }
    uVar4 = 0x3b1;
    uVar2 = 0x73;
  }
  ERR_put_error(0x10,0x108,uVar2,"crypto\\ec\\ec_asn1.c",uVar4);
  return 0;
}

// EC_PRIVATEKEY_free @ 14f715f10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_PRIVATEKEY_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b4a90);
  return;
}

// EC_PRIVATEKEY_new @ 14f715f50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_PRIVATEKEY_new(void)

{
  ASN1_item_new(&DAT_1534b4a90);
  return;
}

// X9_62_CHARACTERISTIC_TWO_free @ 14f715f80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X9_62_CHARACTERISTIC_TWO_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b46c0);
  return;
}

// X9_62_CHARACTERISTIC_TWO_new @ 14f715fb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X9_62_CHARACTERISTIC_TWO_new(void)

{
  ASN1_item_new(&DAT_1534b46c0);
  return;
}

// X9_62_PENTANOMIAL_free @ 14f715fe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X9_62_PENTANOMIAL_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b4b90);
  return;
}

// X9_62_PENTANOMIAL_new @ 14f716010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X9_62_PENTANOMIAL_new(void)

{
  ASN1_item_new(&DAT_1534b4b90);
  return;
}

// d2i_ECDSA_SIG @ 14f716040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_ECDSA_SIG(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_ECPKPARAMETERS @ 14f716070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_ECPKPARAMETERS(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_ECPKParameters @ 14f7160a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong d2i_ECPKParameters(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 local_res10;
  undefined8 uVar3;
  
  uVar3 = 0x14f7160b6;
  local_res10 = *param_2;
  piVar1 = (int *)ASN1_item_d2i(0,&local_res10,param_3,&DAT_1534b49e0);
  if (piVar1 == (int *)0x0) {
    ERR_put_error(0x10,0x91,0x75,"crypto\\ec\\ec_asn1.c",0x3c1,uVar3);
    ASN1_item_free(0,&DAT_1534b49e0);
    return 0;
  }
  lVar2 = EC_GROUP_new_from_ecpkparameters(piVar1);
  if (lVar2 == 0) {
    ERR_put_error(0x10,0x91,0x7f,"crypto\\ec\\ec_asn1.c",0x3c7,uVar3);
    ASN1_item_free(piVar1,&DAT_1534b49e0);
    lVar2 = 0;
  }
  else {
    if (*piVar1 == 1) {
      *(undefined4 *)(lVar2 + 0x28) = 1;
    }
    if (param_1 != (longlong *)0x0) {
      EC_GROUP_free(*param_1);
      *param_1 = lVar2;
    }
    ASN1_item_free(piVar1,&DAT_1534b49e0);
    *param_2 = local_res10;
  }
  return lVar2;
}

// d2i_ECParameters @ 14f7161c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong d2i_ECParameters(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f7161d5;
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) &&
       (lVar1 = EC_KEY_new(), lVar1 == 0)) {
      ERR_put_error(0x10,0x90,0x41,"crypto\\ec\\ec_asn1.c",0x49a,uVar3);
    }
    else {
      lVar2 = d2i_ECPKParameters(lVar1 + 0x18,param_2,param_3);
      if (lVar2 != 0) {
        if (param_1 == (longlong *)0x0) {
          return lVar1;
        }
        *param_1 = lVar1;
        return lVar1;
      }
      ERR_put_error(0x10,0x90,0x10,"crypto\\ec\\ec_asn1.c",0x4a1,uVar3);
      if ((param_1 == (longlong *)0x0) || (*param_1 != lVar1)) {
        EC_KEY_free(lVar1);
      }
    }
    return 0;
  }
  ERR_put_error(0x10,0x90,0x43,"crypto\\ec\\ec_asn1.c",0x494,0x14f7161d5);
  return 0;
}

// d2i_ECPrivateKey @ 14f7162e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong d2i_ECPrivateKey(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 local_res10;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f7162f0;
  local_res10 = *param_2;
  puVar3 = (undefined4 *)ASN1_item_d2i(0,&local_res10,param_3,&DAT_1534b4a90);
  if (puVar3 == (undefined4 *)0x0) {
    ERR_put_error(0x10,0x92,0x10,"crypto\\ec\\ec_asn1.c",0x3f3,uVar9);
    return 0;
  }
  if (((param_1 == (longlong *)0x0) || (lVar4 = *param_1, lVar4 == 0)) &&
     (lVar4 = EC_KEY_new(), lVar4 == 0)) {
    uVar8 = 0x3f9;
    uVar7 = 0x41;
  }
  else {
    if (*(longlong *)(puVar3 + 4) != 0) {
      EC_GROUP_free(*(undefined8 *)(lVar4 + 0x18));
      lVar5 = EC_GROUP_new_from_ecpkparameters(*(undefined8 *)(puVar3 + 4));
      *(longlong *)(lVar4 + 0x18) = lVar5;
      if ((lVar5 != 0) && (**(int **)(puVar3 + 4) == 1)) {
        *(undefined4 *)(lVar5 + 0x28) = 1;
      }
    }
    if (*(longlong *)(lVar4 + 0x18) == 0) {
      uVar8 = 0x408;
      uVar7 = 0x10;
    }
    else {
      *(undefined4 *)(lVar4 + 0x10) = *puVar3;
      lVar5 = *(longlong *)(puVar3 + 2);
      if (lVar5 == 0) {
        uVar8 = 0x414;
        uVar7 = 0x7d;
      }
      else {
        iVar2 = ASN1_STRING_length(lVar5);
        uVar6 = ASN1_STRING_get0_data(lVar5);
        iVar2 = EC_KEY_oct2priv(lVar4,uVar6,(longlong)iVar2);
        if (iVar2 == 0) goto LAB_14f7164e5;
        EC_POINT_clear_free(*(undefined8 *)(lVar4 + 0x20));
        lVar5 = EC_POINT_new(*(undefined8 *)(lVar4 + 0x18));
        *(longlong *)(lVar4 + 0x20) = lVar5;
        if (lVar5 == 0) {
          uVar8 = 0x41b;
          uVar7 = 0x10;
        }
        else {
          if (*(longlong *)(puVar3 + 6) == 0) {
            pcVar1 = *(code **)(**(longlong **)(lVar4 + 0x18) + 0x168);
            if ((pcVar1 == (code *)0x0) || (iVar2 = (*pcVar1)(lVar4), iVar2 == 0))
            goto LAB_14f7164e5;
            *(uint *)(lVar4 + 0x30) = *(uint *)(lVar4 + 0x30) | 2;
LAB_14f71649d:
            if (param_1 != (longlong *)0x0) {
              *param_1 = lVar4;
            }
            ASN1_item_free(puVar3,&DAT_1534b4a90);
            *param_2 = local_res10;
            return lVar4;
          }
          uVar6 = ASN1_STRING_get0_data();
          iVar2 = ASN1_STRING_length(*(undefined8 *)(puVar3 + 6));
          iVar2 = EC_KEY_oct2key(lVar4,uVar6,(longlong)iVar2,0);
          if (iVar2 != 0) goto LAB_14f71649d;
          uVar8 = 0x426;
          uVar7 = 0x10;
        }
      }
    }
  }
  ERR_put_error(0x10,0x92,uVar7,"crypto\\ec\\ec_asn1.c",uVar8,uVar9);
LAB_14f7164e5:
  if ((param_1 == (longlong *)0x0) || (*param_1 != lVar4)) {
    EC_KEY_free(lVar4);
  }
  ASN1_item_free(puVar3,&DAT_1534b4a90);
  return 0;
}

// d2i_EC_PRIVATEKEY @ 14f716530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_EC_PRIVATEKEY(void)

{
  ASN1_item_d2i();
  return;
}

// FUN_14f716560 @ 14f716560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f716560(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 uVar10;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar10 = 0x14f716577;
  lVar7 = 0;
  lVar9 = 0;
  if ((((param_1 == 0) || (param_2 == (longlong *)0x0)) || (*param_2 == 0)) || (param_2[1] == 0)) {
    return 0;
  }
  lVar2 = BN_new();
  lVar3 = lVar7;
  lVar4 = lVar7;
  if ((lVar2 == 0) || (lVar3 = BN_new(), lVar3 == 0)) {
    uVar10 = CONCAT44(uVar8,0x17f);
LAB_14f71674d:
    uVar8 = 0x41;
  }
  else {
    uVar8 = 0;
    iVar1 = EC_GROUP_get_curve(param_1,0,lVar2,lVar3,0,uVar10);
    if (iVar1 == 0) {
      uVar10 = CONCAT44(uVar8,0x185);
      uVar8 = 0x10;
      lVar9 = lVar7;
    }
    else {
      iVar1 = EC_GROUP_get_degree(param_1);
      uVar6 = (longlong)iVar1 + 7U >> 3;
      lVar9 = CRYPTO_malloc(uVar6,"crypto\\ec\\ec_asn1.c",399);
      if ((lVar9 == 0) || (lVar4 = CRYPTO_malloc(uVar6,"crypto\\ec\\ec_asn1.c",400), lVar4 == 0)) {
        uVar10 = CONCAT44(uVar8,0x191);
        goto LAB_14f71674d;
      }
      iVar1 = BN_bn2binpad(lVar2,lVar9,uVar6 & 0xffffffff);
      if ((iVar1 < 0) || (iVar1 = BN_bn2binpad(lVar3,lVar4,uVar6 & 0xffffffff), iVar1 < 0)) {
        uVar10 = CONCAT44(uVar8,0x196);
        uVar8 = 3;
      }
      else {
        iVar1 = ASN1_OCTET_STRING_set(*param_2,lVar9,uVar6 & 0xffffffff);
        if ((iVar1 != 0) &&
           (iVar1 = ASN1_OCTET_STRING_set(param_2[1],lVar4,uVar6 & 0xffffffff), iVar1 != 0)) {
          if (*(longlong *)(param_1 + 0x30) == 0) {
            ASN1_BIT_STRING_free(param_2[2]);
            param_2[2] = 0;
          }
          else {
            if (param_2[2] == 0) {
              lVar5 = ASN1_BIT_STRING_new();
              param_2[2] = lVar5;
              if (lVar5 == 0) {
                uVar10 = CONCAT44(uVar8,0x1a5);
                goto LAB_14f71674d;
              }
            }
            *(uint *)(param_2[2] + 0x10) = *(uint *)(param_2[2] + 0x10) & 0xfffffff0;
            *(uint *)(param_2[2] + 0x10) = *(uint *)(param_2[2] + 0x10) | 8;
            iVar1 = ASN1_BIT_STRING_set(param_2[2],*(undefined8 *)(param_1 + 0x30),
                                        *(undefined4 *)(param_1 + 0x38));
            if (iVar1 == 0) {
              uVar10 = CONCAT44(uVar8,0x1ac);
              uVar8 = 0xd;
              goto LAB_14f716758;
            }
          }
          lVar7 = 1;
          goto LAB_14f716769;
        }
        uVar10 = CONCAT44(uVar8,0x19d);
        uVar8 = 0xd;
      }
    }
  }
LAB_14f716758:
  ERR_put_error(0x10,0x99,uVar8,"crypto\\ec\\ec_asn1.c",uVar10);
LAB_14f716769:
  CRYPTO_free(lVar9,"crypto\\ec\\ec_asn1.c",0x1b7);
  CRYPTO_free(lVar4,"crypto\\ec\\ec_asn1.c",0x1b8);
  BN_free(lVar2);
  BN_free(lVar3);
  return lVar7;
}

// FUN_14f7167e0 @ 14f7167e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f7167e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined4 local_res8 [2];
  undefined8 in_stack_ffffffffffffffc8;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  lVar13 = 0;
  lVar11 = 0;
  if ((param_1 == 0) || (param_2 == (longlong *)0x0)) {
    return 0;
  }
  ASN1_OBJECT_free(*param_2);
  ASN1_TYPE_free(param_2[1]);
  uVar5 = EC_GROUP_method_of(param_1);
  iVar3 = EC_METHOD_get_field_type(uVar5);
  lVar6 = OBJ_nid2obj(iVar3);
  *param_2 = lVar6;
  if (lVar6 == 0) {
    uVar5 = CONCAT44(uVar12,0x109);
    uVar12 = 8;
    lVar11 = lVar13;
LAB_14f716a8f:
    uVar10 = 0x9a;
  }
  else {
    if (iVar3 == 0x196) {
      lVar11 = BN_new();
      if (lVar11 == 0) {
        uVar5 = CONCAT44(uVar12,0x10f);
        uVar12 = 0x41;
      }
      else {
        uVar12 = 0;
        iVar3 = EC_GROUP_get_curve(param_1,lVar11,0,0,0);
        if (iVar3 == 0) {
          uVar5 = CONCAT44(uVar12,0x114);
          uVar12 = 0x10;
        }
        else {
          lVar7 = BN_to_ASN1_INTEGER(lVar11,0);
          param_2[1] = lVar7;
          lVar6 = lVar11;
          if (lVar7 != 0) goto LAB_14f716a40;
          uVar5 = CONCAT44(uVar12,0x11a);
          uVar12 = 0xd;
        }
      }
      goto LAB_14f716a8f;
    }
    if (iVar3 != 0x197) {
      uVar5 = CONCAT44(uVar12,0x169);
      uVar12 = 0x83;
      goto LAB_14f716a8f;
    }
    puVar8 = (undefined4 *)ASN1_item_new(&DAT_1534b46c0);
    param_2[1] = (longlong)puVar8;
    if (puVar8 == (undefined4 *)0x0) {
      uVar5 = CONCAT44(uVar12,300);
      uVar12 = 0x41;
      goto LAB_14f716a8f;
    }
    uVar4 = EC_GROUP_get_degree(param_1);
    *puVar8 = uVar4;
    iVar3 = EC_GROUP_get_basis_type(param_1);
    if (iVar3 == 0) {
      uVar5 = CONCAT44(uVar12,0x135);
      uVar12 = 0x10;
      lVar11 = lVar13;
      goto LAB_14f716a8f;
    }
    lVar6 = OBJ_nid2obj(iVar3);
    *(longlong *)(puVar8 + 2) = lVar6;
    if (lVar6 == 0) {
      uVar5 = CONCAT44(uVar12,0x13a);
      uVar12 = 8;
      goto LAB_14f716a8f;
    }
    if (iVar3 == 0x2aa) {
      iVar3 = EC_GROUP_get_trinomial_basis(param_1,local_res8);
      lVar6 = lVar13;
      if (iVar3 == 0) goto LAB_14f716aa0;
      lVar7 = ASN1_INTEGER_new();
      *(longlong *)(puVar8 + 4) = lVar7;
      if (lVar7 == 0) {
        uVar5 = CONCAT44(uVar12,0x146);
        uVar12 = 0x41;
      }
      else {
        iVar3 = ASN1_INTEGER_set(lVar7,local_res8[0]);
        if (iVar3 != 0) goto LAB_14f716a40;
        uVar5 = CONCAT44(uVar12,0x14a);
        uVar12 = 0xd;
      }
      goto LAB_14f716a8f;
    }
    lVar6 = lVar11;
    if (iVar3 != 0x2ab) {
      lVar7 = ASN1_NULL_new();
      *(longlong *)(puVar8 + 4) = lVar7;
      if (lVar7 != 0) {
LAB_14f716a40:
        lVar13 = 1;
        goto LAB_14f716aa0;
      }
      uVar5 = CONCAT44(uVar12,0x162);
      uVar12 = 0x41;
      goto LAB_14f716a8f;
    }
    uVar5 = EC_GROUP_method_of(param_1);
    iVar3 = EC_METHOD_get_field_type(uVar5);
    if ((((iVar3 == 0x197) && (*(int *)(param_1 + 0x48) != 0)) &&
        (iVar3 = *(int *)(param_1 + 0x4c), iVar3 != 0)) &&
       (((iVar1 = *(int *)(param_1 + 0x50), iVar1 != 0 &&
         (iVar2 = *(int *)(param_1 + 0x54), iVar2 != 0)) && (*(int *)(param_1 + 0x58) == 0)))) {
      piVar9 = (int *)ASN1_item_new(&DAT_1534b4b90);
      *(int **)(puVar8 + 4) = piVar9;
      if (piVar9 != (int *)0x0) {
        *piVar9 = iVar2;
        *(int *)(*(longlong *)(puVar8 + 4) + 4) = iVar1;
        *(int *)(*(longlong *)(puVar8 + 4) + 8) = iVar3;
        goto LAB_14f716a40;
      }
      uVar5 = CONCAT44(uVar12,0x155);
      uVar12 = 0x41;
      goto LAB_14f716a8f;
    }
    uVar10 = 0xc1;
    uVar5 = CONCAT44(uVar12,0x4a);
    uVar12 = 0x42;
    lVar11 = lVar13;
  }
  ERR_put_error(0x10,uVar10,uVar12,"crypto\\ec\\ec_asn1.c",uVar5);
  lVar6 = lVar11;
LAB_14f716aa0:
  BN_free(lVar6);
  return lVar13;
}

// i2d_ECDSA_SIG @ 14f716ae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_ECDSA_SIG(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b4b00);
  return;
}

// i2d_ECPKPARAMETERS @ 14f716b10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_ECPKPARAMETERS(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b49e0);
  return;
}

// i2d_ECPKParameters @ 14f716b40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int i2d_ECPKParameters(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f716b50;
  lVar2 = EC_GROUP_get_ecpkparameters(param_1,0);
  if (lVar2 == 0) {
    ERR_put_error(0x10,0xbf,0x78,"crypto\\ec\\ec_asn1.c",0x3de,uVar3);
    return 0;
  }
  iVar1 = ASN1_item_i2d(lVar2,param_2,&DAT_1534b49e0);
  if (iVar1 == 0) {
    ERR_put_error(0x10,0xbf,0x79,"crypto\\ec\\ec_asn1.c",0x3e2,uVar3);
    ASN1_item_free(lVar2,&DAT_1534b49e0);
    return 0;
  }
  ASN1_item_free(lVar2,&DAT_1534b49e0);
  return iVar1;
}

// i2d_ECParameters @ 14f716c10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 i2d_ECParameters(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    ERR_put_error(0x10,0xbe,0x43,"crypto\\ec\\ec_asn1.c",0x489);
    return 0;
  }
  uVar1 = i2d_ECPKParameters(*(undefined8 *)(param_1 + 0x18));
  return uVar1;
}

// i2d_ECPrivateKey @ 14f716c60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong i2d_ECPrivateKey(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 local_res8;
  undefined8 local_res18;
  undefined4 uVar10;
  undefined8 uVar11;
  
  uVar11 = 0x14f716c7c;
  uVar6 = 0;
  local_res8 = 0;
  local_res18 = 0;
  uVar9 = 0;
  bVar1 = false;
  uVar5 = 0;
  puVar7 = (undefined4 *)0x0;
  if (((param_1 == 0) || (*(longlong *)(param_1 + 0x18) == 0)) ||
     (((*(byte *)(param_1 + 0x30) & 2) == 0 && (*(longlong *)(param_1 + 0x20) == 0)))) {
    uVar10 = 0x448;
    uVar8 = 0x43;
    uVar9 = uVar6;
  }
  else {
    puVar7 = (undefined4 *)ASN1_item_new(&DAT_1534b4a90);
    if (puVar7 == (undefined4 *)0x0) {
      uVar10 = 0x44d;
      uVar8 = 0x41;
      uVar5 = uVar6;
      uVar9 = uVar6;
    }
    else {
      *puVar7 = *(undefined4 *)(param_1 + 0x10);
      uVar5 = EC_KEY_priv2buf(param_1,&local_res8);
      if (uVar5 == 0) {
        uVar10 = 0x456;
        uVar8 = 0x10;
      }
      else {
        ASN1_STRING_set0(*(undefined8 *)(puVar7 + 2),local_res8,uVar5 & 0xffffffff);
        local_res8 = 0;
        if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
          lVar3 = EC_GROUP_get_ecpkparameters
                            (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(puVar7 + 4));
          *(longlong *)(puVar7 + 4) = lVar3;
          if (lVar3 == 0) {
            uVar10 = 0x461;
            uVar8 = 0x10;
            goto LAB_14f716e17;
          }
        }
        if ((*(byte *)(param_1 + 0x30) & 2) == 0) {
          lVar3 = ASN1_BIT_STRING_new();
          *(longlong *)(puVar7 + 6) = lVar3;
          if (lVar3 == 0) {
            uVar10 = 0x469;
            uVar8 = 0x41;
            uVar9 = uVar6;
          }
          else {
            uVar4 = EC_KEY_key2buf(param_1,*(undefined4 *)(param_1 + 0x34),&local_res18,0);
            if (uVar4 != 0) {
              *(uint *)(*(longlong *)(puVar7 + 6) + 0x10) =
                   *(uint *)(*(longlong *)(puVar7 + 6) + 0x10) & 0xfffffff0;
              *(uint *)(*(longlong *)(puVar7 + 6) + 0x10) =
                   *(uint *)(*(longlong *)(puVar7 + 6) + 0x10) | 8;
              ASN1_STRING_set0(*(undefined8 *)(puVar7 + 6),local_res18,uVar4 & 0xffffffff);
              local_res18 = 0;
              goto LAB_14f716dd1;
            }
            uVar10 = 0x470;
            uVar8 = 0x10;
          }
        }
        else {
LAB_14f716dd1:
          uVar2 = ASN1_item_i2d(puVar7,param_2,&DAT_1534b4a90);
          uVar9 = (ulonglong)uVar2;
          if (uVar2 != 0) {
            bVar1 = true;
            goto LAB_14f716e28;
          }
          uVar10 = 0x47b;
          uVar8 = 0x10;
        }
      }
    }
  }
LAB_14f716e17:
  ERR_put_error(0x10,0xc0,uVar8,"crypto\\ec\\ec_asn1.c",uVar10,uVar11);
LAB_14f716e28:
  CRYPTO_clear_free(local_res8,uVar5,"crypto\\ec\\ec_asn1.c",0x480);
  CRYPTO_free(local_res18,"crypto\\ec\\ec_asn1.c",0x481);
  ASN1_item_free(puVar7,&DAT_1534b4a90);
  if (bVar1) {
    uVar6 = uVar9;
  }
  return uVar6;
}

// i2d_EC_PRIVATEKEY @ 14f716e90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_EC_PRIVATEKEY(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b4a90);
  return;
}

// i2o_ECPublicKey @ 14f716ec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong i2o_ECPublicKey(longlong param_1,longlong *param_2)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  bVar1 = false;
  if (param_1 == 0) {
    ERR_put_error(0x10,0x97,0x43,"crypto\\ec\\ec_asn1.c",0x4c7,0x14f716edb);
    uVar2 = 0;
  }
  else {
    uVar4 = 0;
    uVar2 = EC_POINT_point2oct(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                               *(undefined4 *)(param_1 + 0x34),0,0,0);
    if ((param_2 != (longlong *)0x0) && (uVar2 != 0)) {
      if (*param_2 == 0) {
        lVar3 = CRYPTO_malloc(uVar2,"crypto\\ec\\ec_asn1.c",0x4d3);
        *param_2 = lVar3;
        if (lVar3 == 0) {
          ERR_put_error(0x10,0x97,0x41,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar4,0x4d4));
          return 0;
        }
        bVar1 = true;
      }
      lVar3 = EC_POINT_point2oct(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                                 *(undefined4 *)(param_1 + 0x34),*param_2,uVar2,0);
      if (lVar3 == 0) {
        ERR_put_error(0x10,0x97,0x10,"crypto\\ec\\ec_asn1.c",0x4db);
        if (bVar1) {
          CRYPTO_free(*param_2,"crypto\\ec\\ec_asn1.c",0x4dd);
          *param_2 = 0;
        }
        uVar2 = 0;
      }
      else {
        if (!bVar1) {
          *param_2 = *param_2 + uVar2;
        }
        uVar2 = uVar2 & 0xffffffff;
      }
    }
  }
  return uVar2;
}

// o2i_ECPublicKey @ 14f717030

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong o2i_ECPublicKey(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f717040;
  if (((param_1 != (longlong *)0x0) && (lVar1 = *param_1, lVar1 != 0)) &&
     (*(longlong *)(lVar1 + 0x18) != 0)) {
    iVar2 = EC_KEY_oct2key(lVar1,*param_2,(longlong)param_3,0);
    if (iVar2 == 0) {
      ERR_put_error(0x10,0x98,0x10,"crypto\\ec\\ec_asn1.c",0x4ba,uVar3);
      return 0;
    }
    *param_2 = *param_2 + (longlong)param_3;
    return lVar1;
  }
  ERR_put_error(0x10,0x98,0x43,"crypto\\ec\\ec_asn1.c",0x4b5,0x14f717040);
  return 0;
}

