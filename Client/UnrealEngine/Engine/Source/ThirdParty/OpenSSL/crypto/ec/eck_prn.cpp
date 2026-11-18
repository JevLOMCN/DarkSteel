// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// ECPKParameters_print @ 14f78cc70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ECPKParameters_print(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong local_res20;
  longlong lVar18;
  undefined4 uVar19;
  longlong local_68;
  longlong local_60;
  undefined8 local_50;
  undefined4 uVar12;
  
  lVar16 = 0;
  uVar11 = 0x20;
  uVar12 = 0x20;
  local_68 = 0;
  local_res20 = 0;
  local_60 = 0;
  local_50 = 0;
  lVar15 = 0;
  lVar14 = 0;
  lVar17 = lVar16;
  if (param_2 == 0) {
    local_res20 = lVar16;
    local_68 = lVar16;
    lVar4 = lVar16;
    uVar13 = 0x43;
  }
  else {
    lVar4 = BN_CTX_new();
    if (lVar4 == 0) {
      local_res20 = lVar16;
      local_68 = lVar16;
      uVar13 = 0x41;
    }
    else {
      iVar1 = EC_GROUP_get_asn1_flag(param_2);
      uVar13 = uVar11;
      if (iVar1 == 0) {
        uVar5 = EC_GROUP_method_of(param_2);
        iVar1 = EC_METHOD_get_field_type(uVar5);
        lVar15 = BN_new();
        lVar17 = lVar15;
        if (((lVar15 == 0) || (lVar14 = BN_new(), local_68 = lVar14, lVar14 == 0)) ||
           (local_res20 = BN_new(), local_res20 == 0)) {
          uVar13 = 0x41;
        }
        else {
          iVar2 = EC_GROUP_get_curve(param_2,lVar15,lVar14,local_res20,lVar4);
          if (iVar2 == 0) {
            uVar13 = 0x10;
          }
          else {
            lVar6 = EC_GROUP_get0_generator(param_2);
            if (lVar6 != 0) {
              lVar7 = EC_GROUP_get0_order(param_2);
              lVar8 = EC_GROUP_get0_cofactor(param_2);
              if (lVar7 != 0) {
                iVar2 = EC_GROUP_get_point_conversion_form(param_2);
                lVar18 = lVar4;
                local_60 = EC_POINT_point2bn(param_2,lVar6,iVar2,0,lVar4);
                uVar19 = (undefined4)((ulonglong)lVar18 >> 0x20);
                if (local_60 == 0) {
                  uVar13 = 0x10;
                }
                else {
                  lVar6 = EC_GROUP_get0_seed(param_2);
                  if (lVar6 != 0) {
                    local_50 = EC_GROUP_get_seed_len(param_2);
                  }
                  iVar3 = BIO_indent(param_1,param_3,0x80);
                  if (iVar3 != 0) {
                    uVar5 = OBJ_nid2sn(iVar1);
                    iVar3 = BIO_printf(param_1,"Field Type: %s\n",uVar5);
                    if (0 < iVar3) {
                      if (iVar1 == 0x197) {
                        iVar1 = EC_GROUP_get_basis_type(param_2);
                        uVar13 = uVar12;
                        if ((iVar1 != 0) && (iVar3 = BIO_indent(param_1,param_3,0x80), iVar3 != 0))
                        {
                          uVar5 = OBJ_nid2sn(iVar1);
                          iVar1 = BIO_printf(param_1,"Basis Type: %s\n",uVar5);
                          if (0 < iVar1) {
                            pcVar9 = "Polynomial:";
                            goto LAB_14f78cff5;
                          }
                        }
                      }
                      else {
                        pcVar9 = "Prime:";
LAB_14f78cff5:
                        uVar5 = CONCAT44(uVar19,param_3);
                        iVar1 = ASN1_bn_print(param_1,pcVar9,lVar15,0,uVar5);
                        uVar13 = uVar12;
                        if (iVar1 != 0) {
                          uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),param_3);
                          iVar1 = ASN1_bn_print(param_1,"A:   ",lVar14,0,uVar5);
                          if (iVar1 != 0) {
                            uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),param_3);
                            iVar1 = ASN1_bn_print(param_1,"B:   ",local_res20,0,uVar5);
                            if (iVar1 != 0) {
                              uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),param_3);
                              puVar10 = PTR_s_Generator__compressed___154df9e28;
                              if ((iVar2 != 2) &&
                                 (puVar10 = PTR_s_Generator__uncompressed___154df9e30, iVar2 != 4))
                              {
                                puVar10 = PTR_s_Generator__hybrid___154df9e38;
                              }
                              iVar1 = ASN1_bn_print(param_1,puVar10,local_60,0,uVar5);
                              if (iVar1 != 0) {
                                uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),param_3);
                                iVar1 = ASN1_bn_print(param_1,"Order: ",lVar7,0,uVar5);
                                uVar19 = (undefined4)((ulonglong)uVar5 >> 0x20);
                                if (iVar1 != 0) {
                                  if (lVar8 != 0) {
                                    uVar5 = CONCAT44(uVar19,param_3);
                                    iVar1 = ASN1_bn_print(param_1,"Cofactor: ",lVar8,0,uVar5);
                                    uVar19 = (undefined4)((ulonglong)uVar5 >> 0x20);
                                    if (iVar1 == 0) goto LAB_14f78ccc9;
                                  }
                                  if (lVar6 == 0) {
                                    lVar17 = 1;
                                    goto LAB_14f78ccea;
                                  }
                                  iVar1 = FUN_14f78d390(param_1,"Seed:",lVar6,local_50,
                                                        CONCAT44(uVar19,param_3));
                                  uVar13 = uVar11;
                                  if (iVar1 != 0) {
                                    lVar17 = 1;
                                    goto LAB_14f78ccea;
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
                goto LAB_14f78ccc9;
              }
            }
            uVar13 = 0x10;
          }
        }
      }
      else {
        iVar1 = BIO_indent(param_1,param_3,0x80);
        local_res20 = lVar16;
        local_68 = lVar16;
        if ((iVar1 != 0) && (iVar1 = EC_GROUP_get_curve_name(param_2), uVar13 = uVar12, iVar1 != 0))
        {
          uVar5 = OBJ_nid2sn(iVar1);
          iVar2 = BIO_printf(param_1,"ASN1 OID: %s",uVar5);
          if ((0 < iVar2) && (iVar2 = BIO_printf(param_1,"\n"), 0 < iVar2)) {
            lVar6 = EC_curve_nid2nist(iVar1);
            if (lVar6 == 0) {
              lVar17 = 1;
              goto LAB_14f78ccea;
            }
            iVar1 = BIO_indent(param_1,param_3,0x80);
            if ((iVar1 != 0) &&
               (iVar1 = BIO_printf(param_1,"NIST CURVE: %s\n",lVar6), local_68 = lVar14,
               lVar17 = lVar15, uVar13 = uVar11, 0 < iVar1)) {
              lVar17 = 1;
              lVar14 = lVar16;
              lVar15 = lVar16;
              goto LAB_14f78ccea;
            }
          }
        }
      }
    }
  }
LAB_14f78ccc9:
  ERR_put_error(0x10,0x95,uVar13,"crypto\\ec\\eck_prn.c",0xd6);
  lVar14 = local_68;
  lVar15 = lVar17;
  lVar17 = lVar16;
LAB_14f78ccea:
  BN_free(lVar15);
  BN_free(lVar14);
  BN_free(local_res20);
  BN_free(local_60);
  BN_CTX_free(lVar4);
  return lVar17;
}

// ECPKParameters_print_fp @ 14f78d180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ECPKParameters_print_fp(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f78d19a;
  uVar2 = BIO_s_file();
  lVar3 = BIO_new(uVar2);
  if (lVar3 == 0) {
    ERR_put_error(0x10,0x96,7,"crypto\\ec\\eck_prn.c",0x18,uVar4);
    uVar1 = 0;
  }
  else {
    BIO_ctrl(lVar3,0x6a,0,param_1);
    uVar1 = ECPKParameters_print(lVar3,param_2,param_3);
    BIO_free(lVar3);
  }
  return uVar1;
}

// ECParameters_print_fp @ 14f78d230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ECParameters_print_fp(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f78d245;
  uVar2 = BIO_s_file();
  lVar3 = BIO_new(uVar2);
  if (lVar3 == 0) {
    ERR_put_error(0x10,0x94,0x20,"crypto\\ec\\eck_prn.c",0x36,uVar4);
    return 0;
  }
  BIO_ctrl(lVar3,0x6a,0,param_1);
  uVar1 = ECParameters_print(lVar3,param_2);
  BIO_free(lVar3);
  return uVar1;
}

// EC_KEY_print_fp @ 14f78d2e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 EC_KEY_print_fp(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f78d2fa;
  uVar2 = BIO_s_file();
  lVar3 = BIO_new(uVar2);
  if (lVar3 == 0) {
    ERR_put_error(0x10,0xb5,0x20,"crypto\\ec\\eck_prn.c",0x27,uVar4);
    uVar1 = 0;
  }
  else {
    BIO_ctrl(lVar3,0x6a,0,param_1);
    uVar1 = EC_KEY_print(lVar3,param_2,param_3);
    BIO_free(lVar3);
  }
  return uVar1;
}

// FUN_14f78d390 @ 14f78d390

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_14f78d390(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                  int param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  char *pcVar4;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_e7 [143];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (param_3 == 0) {
    return true;
  }
  uVar3 = 0;
  if (param_5 < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0x80;
    if (param_5 < 0x81) {
      iVar2 = param_5;
    }
    memset(&local_e8,0x20,(longlong)iVar2);
    iVar1 = BIO_write(param_1,&local_e8,iVar2);
    if (iVar1 < 1) {
      return false;
    }
  }
  iVar1 = BIO_printf(param_1,"%s",param_2);
  if (iVar1 < 1) {
    return false;
  }
  if (param_4 != 0) {
    do {
      if (uVar3 == (uVar3 / 0xf) * 0xf) {
        local_e8 = 10;
        memset(local_e7,0x20,(longlong)(iVar2 + 4));
        iVar1 = BIO_write(param_1,&local_e8,iVar2 + 5);
        if (iVar1 < 1) {
          return false;
        }
      }
      pcVar4 = ":";
      if (uVar3 + 1 == param_4) {
        pcVar4 = "";
      }
      iVar1 = BIO_printf(param_1,"%02x%s",*(undefined1 *)(param_3 + uVar3),pcVar4);
      if (iVar1 < 1) {
        return false;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_4);
  }
  iVar2 = BIO_write(param_1,"\n",1);
  return 0 < iVar2;
}

