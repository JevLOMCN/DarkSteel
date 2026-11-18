// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// EC_GROUP_new_by_curve_name @ 14f6eebb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EC_GROUP_new_by_curve_name(int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f6eebba;
  uVar1 = 0;
  if (0 < param_1) {
    piVar3 = &DAT_1534af310;
    do {
      if (*piVar3 == param_1) {
        lVar2 = uVar1 * 0x20;
        local_28 = (&DAT_1534af310)[uVar1 * 8];
        uStack_24 = *(undefined4 *)(&UNK_1534af314 + lVar2);
        uStack_20 = *(undefined4 *)(&UNK_1534af318 + lVar2);
        uStack_1c = *(undefined4 *)(&UNK_1534af31c + lVar2);
        local_18 = *(undefined4 *)(&UNK_1534af320 + lVar2);
        uStack_14 = *(undefined4 *)(&UNK_1534af324 + lVar2);
        uStack_10 = *(undefined4 *)(&PTR_s_SECG_WTLS_curve_over_a_112_bit_p_1534af328 + uVar1 * 4);
        uStack_c = *(undefined4 *)
                    ((longlong)&PTR_s_SECG_WTLS_curve_over_a_112_bit_p_1534af328 + lVar2 + 4);
        lVar2 = FUN_14f6ef090(&local_28);
        if (lVar2 != 0) {
          return lVar2;
        }
        break;
      }
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 8;
    } while (uVar1 < 0x52);
    ERR_put_error(0x10,0xae,0x81,"crypto\\ec\\ec_curve.c",0xc57);
  }
  return 0;
}

// EC_curve_nid2nist @ 14f6eec40

undefined * EC_curve_nid2nist(int param_1)

{
  ulonglong uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = &DAT_154df8d78;
  do {
    if (*piVar2 == param_1) {
      return (&PTR_s_B_163_154df8d70)[uVar1 * 2];
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 4;
  } while (uVar1 < 0xf);
  return (undefined *)0x0;
}

// EC_curve_nist2nid @ 14f6eec80

undefined4 EC_curve_nist2nid(longlong param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined **ppuVar6;
  
  ppuVar6 = &PTR_s_B_163_154df8d70;
  uVar5 = 0;
  do {
    pcVar3 = *ppuVar6;
    lVar4 = param_1 - (longlong)pcVar3;
    do {
      cVar1 = *pcVar3;
      cVar2 = pcVar3[lVar4];
      if (cVar1 != cVar2) break;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      return (&DAT_154df8d78)[uVar5 * 4];
    }
    uVar5 = uVar5 + 1;
    ppuVar6 = ppuVar6 + 2;
    if (0xe < uVar5) {
      return 0;
    }
  } while( true );
}

// ec_curve_nid_from_params @ 14f6eed50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int ec_curve_nid_from_params(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  size_t _Size;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  void *pvVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  uint local_a8;
  int local_a4;
  ulonglong local_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 local_88;
  void *local_80;
  size_t local_78;
  longlong local_70;
  int *piStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_70 = 0;
  piStack_68 = (int *)0x0;
  iVar11 = -1;
  iVar3 = -1;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_88 = param_2;
  lVar4 = EC_GROUP_method_of();
  iVar12 = iVar11;
  if (lVar4 != 0) {
    local_a8 = EC_GROUP_get_curve_name(param_1);
    local_a4 = EC_METHOD_get_field_type(lVar4);
    _Size = EC_GROUP_get_seed_len(param_1);
    local_80 = (void *)EC_GROUP_get0_seed(param_1);
    local_90 = EC_GROUP_get0_cofactor(param_1);
    BN_CTX_start(param_2);
    iVar2 = BN_num_bits(*(undefined8 *)(param_1 + 0x10));
    iVar6 = (int)((iVar2 + 7 >> 0x1f & 7U) + iVar2 + 7) >> 3;
    iVar2 = BN_num_bits(*(undefined8 *)(param_1 + 0x40));
    iVar2 = (int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3;
    if (iVar2 <= iVar6) {
      iVar2 = iVar6;
    }
    local_78 = (size_t)(iVar2 * 6);
    local_98 = (void *)CRYPTO_malloc(local_78,"crypto\\ec\\ec_curve.c",0xcca);
    if (local_98 != (void *)0x0) {
      uVar7 = 0;
      do {
        lVar4 = BN_CTX_get(param_2);
        (&local_70)[uVar7] = lVar4;
        iVar12 = iVar3;
        if (lVar4 == 0) goto LAB_14f6ef03b;
        uVar7 = uVar7 + 1;
      } while (uVar7 < 6);
      local_b8 = param_2;
      iVar3 = EC_GROUP_get_curve(param_1,local_70,piStack_68,local_60);
      if ((((iVar3 != 0) && (lVar4 = EC_GROUP_get0_generator(param_1), lVar4 != 0)) &&
          (local_b8 = param_2,
          iVar3 = EC_POINT_get_affine_coordinates(param_1,lVar4,uStack_58,local_50), iVar3 != 0)) &&
         (iVar3 = EC_GROUP_get_order(param_1,uStack_48,param_2), iVar3 != 0)) {
        uVar7 = 0;
        pvVar9 = local_98;
        do {
          iVar3 = BN_bn2binpad((&local_70)[uVar7],pvVar9,iVar2);
          iVar12 = iVar11;
          if (iVar3 < 1) goto LAB_14f6ef03b;
          uVar7 = uVar7 + 1;
          pvVar9 = (void *)((longlong)pvVar9 + (longlong)iVar2);
        } while (uVar7 < 6);
        uVar7 = (ulonglong)(int)local_a8;
        plVar10 = (longlong *)&DAT_1534af310;
        uVar8 = 0;
        uVar5 = uVar7;
        local_a0 = uVar7;
        iVar3 = local_a4;
        do {
          local_70 = *plVar10;
          piVar1 = (int *)plVar10[1];
          iVar11 = piVar1[1];
          piStack_68 = piVar1;
          if (((*piVar1 == iVar3) && (iVar2 == piVar1[2])) &&
             ((iVar12 = (int)local_70, (longlong)uVar7 < 1 || ((int)uVar5 == (int)local_70)))) {
            iVar3 = BN_is_zero(local_90);
            if ((((iVar3 != 0) || (iVar3 = BN_is_word(local_90,piVar1[3]), iVar3 != 0)) &&
                ((piVar1[1] == 0 ||
                 ((_Size == 0 ||
                  (((longlong)piVar1[1] == _Size &&
                   (iVar3 = memcmp(piVar1 + 4,local_80,_Size), iVar3 == 0)))))))) &&
               (iVar3 = memcmp(local_98,(void *)((longlong)iVar11 + (longlong)(piVar1 + 4)),local_78
                              ), param_2 = local_88, iVar3 == 0)) goto LAB_14f6ef03b;
            uVar5 = (ulonglong)local_a8;
            uVar7 = local_a0;
            iVar3 = local_a4;
          }
          uVar8 = uVar8 + 0x20;
          plVar10 = plVar10 + 4;
        } while (uVar8 < 0xa40);
        iVar12 = 0;
        param_2 = local_88;
      }
    }
LAB_14f6ef03b:
    CRYPTO_free(local_98,"crypto\\ec\\ec_curve.c",0xd07);
    BN_CTX_end(param_2);
  }
  return iVar12;
}

// FUN_14f6ef090 @ 14f6ef090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_14f6ef090(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong local_res20;
  undefined8 in_stack_ffffffffffffff88;
  longlong lVar13;
  undefined8 uVar14;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined4 uVar15;
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  plVar5 = (longlong *)0x0;
  plVar11 = (longlong *)0x0;
  local_res20 = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  if (*(longlong *)(param_1 + 2) == 0) {
    if (*(code **)(param_1 + 4) != (code *)0x0) {
      plVar5 = (longlong *)(**(code **)(param_1 + 4))();
    }
    plVar11 = (longlong *)EC_GROUP_new(plVar5);
    return plVar11;
  }
  lVar6 = BN_CTX_new();
  plVar9 = plVar5;
  if (lVar6 == 0) {
    ERR_put_error(0x10,0xaf,0x41,"crypto\\ec\\ec_curve.c",CONCAT44(uVar15,0xbd5));
    plVar11 = plVar5;
    plVar12 = plVar5;
    goto LAB_14f6ef50e;
  }
  piVar1 = *(int **)(param_1 + 2);
  iVar4 = piVar1[1];
  lVar7 = (longlong)iVar4;
  iVar3 = piVar1[2];
  lVar10 = (longlong)piVar1 + lVar7 + 0x10;
  local_res20 = BN_bin2bn(lVar10,iVar3,0);
  if (local_res20 == 0) {
LAB_14f6ef4e6:
    uVar14 = CONCAT44(uVar15,0xbe2);
    uVar8 = 3;
LAB_14f6ef4f7:
    ERR_put_error(0x10,0xaf,uVar8,"crypto\\ec\\ec_curve.c",uVar14);
LAB_14f6ef50b:
    plVar12 = (longlong *)0x0;
  }
  else {
    local_68 = BN_bin2bn(iVar3 + lVar10,iVar3,0);
    if (local_68 == 0) goto LAB_14f6ef4e6;
    local_60 = BN_bin2bn(iVar3 * 2 + lVar10,iVar3,0);
    if (local_60 == 0) goto LAB_14f6ef4e6;
    if (*(code **)(param_1 + 4) != (code *)0x0) {
      uVar8 = (**(code **)(param_1 + 4))();
      plVar11 = (longlong *)EC_GROUP_new(uVar8);
      if (plVar11 != (longlong *)0x0) {
        lVar13 = lVar6;
        iVar2 = (**(code **)(*plVar11 + 0x28))(plVar11,local_res20,local_68,local_60,lVar6);
        uVar15 = (undefined4)((ulonglong)lVar13 >> 0x20);
        if (iVar2 != 0) goto LAB_14f6ef263;
      }
      uVar14 = CONCAT44(uVar15,0xbea);
      uVar8 = 0x10;
      goto LAB_14f6ef4f7;
    }
    if (*piVar1 != 0x196) {
      plVar11 = (longlong *)EC_GROUP_new_curve_GF2m(local_res20,local_68,local_60,lVar6);
      if (plVar11 != (longlong *)0x0) goto LAB_14f6ef263;
      uVar14 = CONCAT44(uVar15,0xbf8);
      uVar8 = 0x10;
      goto LAB_14f6ef4f7;
    }
    plVar11 = (longlong *)EC_GROUP_new_curve_GFp();
    if (plVar11 == (longlong *)0x0) {
      uVar14 = CONCAT44(uVar15,0xbef);
      uVar8 = 0x10;
      goto LAB_14f6ef4f7;
    }
LAB_14f6ef263:
    EC_GROUP_set_curve_name(plVar11,*param_1);
    plVar9 = (longlong *)EC_POINT_new(plVar11);
    if (plVar9 == (longlong *)0x0) {
      ERR_put_error(0x10,0xaf,0x10,"crypto\\ec\\ec_curve.c",CONCAT44(uVar15,0xc01));
      goto LAB_14f6ef50b;
    }
    plVar12 = (longlong *)BN_bin2bn(iVar3 * 3 + lVar10,iVar3,0);
    if (plVar12 == (longlong *)0x0) {
LAB_14f6ef4b2:
      ERR_put_error(0x10,0xaf,3,"crypto\\ec\\ec_curve.c",CONCAT44(uVar15,0xc07));
    }
    else {
      local_50 = BN_bin2bn(iVar3 * 4 + lVar10,iVar3,0);
      if (local_50 == 0) goto LAB_14f6ef4b2;
      lVar13 = lVar6;
      iVar2 = EC_POINT_set_affine_coordinates(plVar11,plVar9,plVar12,local_50,lVar6);
      uVar15 = (undefined4)((ulonglong)lVar13 >> 0x20);
      if (iVar2 == 0) {
        ERR_put_error(0x10,0xaf,0x10,"crypto\\ec\\ec_curve.c",CONCAT44(uVar15,0xc0b));
        goto LAB_14f6ef50e;
      }
      local_58 = BN_bin2bn(iVar3 * 5 + lVar10,iVar3,0);
      if (local_58 == 0) {
LAB_14f6ef486:
        ERR_put_error(0x10,0xaf,3,"crypto\\ec\\ec_curve.c",CONCAT44(uVar15,0xc10));
      }
      else {
        iVar3 = BN_set_word(plVar12,piVar1[3]);
        if (iVar3 == 0) goto LAB_14f6ef486;
        iVar3 = EC_GROUP_set_generator(plVar11,plVar9,local_58,plVar12);
        if (iVar3 == 0) {
          ERR_put_error(0x10,0xaf,0x10,"crypto\\ec\\ec_curve.c",CONCAT44(uVar15,0xc14));
        }
        else {
          if (iVar4 != 0) {
            lVar7 = EC_GROUP_set_seed(plVar11,lVar10 - lVar7,lVar7);
            if (lVar7 == 0) {
              ERR_put_error(0x10,0xaf,0x10,"crypto\\ec\\ec_curve.c",CONCAT44(uVar15,0xc19));
              goto LAB_14f6ef50e;
            }
          }
          iVar4 = EC_GROUP_get_asn1_flag(plVar11);
          if (iVar4 != 1) goto LAB_14f6ef519;
          lVar7 = OBJ_nid2obj(*param_1);
          if (lVar7 != 0) {
            lVar10 = OBJ_length(lVar7);
            if (lVar10 == 0) {
              EC_GROUP_set_asn1_flag(plVar11,0);
            }
            ASN1_OBJECT_free(lVar7);
            goto LAB_14f6ef519;
          }
          ERR_put_error(0x10,0xaf,8,"crypto\\ec\\ec_curve.c",CONCAT44(uVar15,0xc2e));
        }
      }
    }
  }
LAB_14f6ef50e:
  EC_GROUP_free(plVar11);
  plVar11 = plVar5;
LAB_14f6ef519:
  EC_POINT_free(plVar9);
  BN_CTX_free(lVar6);
  BN_free(local_res20);
  BN_free(local_68);
  BN_free(local_60);
  BN_free(local_58);
  BN_free(plVar12);
  BN_free(local_50);
  return plVar11;
}

