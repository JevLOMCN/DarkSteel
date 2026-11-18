// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// ec_GFp_simple_oct2point @ 14f7a0360

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_GFp_simple_oct2point
                    (longlong param_1,undefined8 param_2,byte *param_3,longlong param_4,
                    longlong param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint local_res20;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar12;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  local_res20 = 0;
  if (param_4 == 0) {
    ERR_put_error(0x10,0x67,100,"crypto\\ec\\ecp_oct.c",0x118);
    return 0;
  }
  bVar1 = *param_3;
  uVar10 = bVar1 & 1;
  uVar8 = bVar1 & 0xfffffffe;
  if ((bVar1 & 0xfe) == 0) {
LAB_14f7a03f2:
    if ((bVar1 & 1) != 0) {
      uVar5 = 0x125;
      goto LAB_14f7a0413;
    }
  }
  else {
    if (uVar8 != 2) {
      if (uVar8 == 4) goto LAB_14f7a03f2;
      if (uVar8 != 6) {
        uVar5 = 0x121;
        goto LAB_14f7a0413;
      }
    }
    if (uVar8 == 4) goto LAB_14f7a03f2;
  }
  if ((bVar1 & 0xfe) == 0) {
    if (param_4 == 1) {
      uVar4 = EC_POINT_set_to_infinity();
      return uVar4;
    }
    uVar5 = 299;
LAB_14f7a0413:
    ERR_put_error(0x10,0x67,0x66,"crypto\\ec\\ecp_oct.c",uVar5);
    return 0;
  }
  iVar2 = BN_num_bits(*(undefined8 *)(param_1 + 0x40));
  iVar2 = (int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3;
  lVar9 = (longlong)iVar2;
  lVar11 = lVar9;
  if (uVar8 != 2) {
    lVar11 = lVar9 * 2;
  }
  if (param_4 != lVar11 + 1) {
    ERR_put_error(0x10,0x67,0x66,"crypto\\ec\\ecp_oct.c",CONCAT44(uVar12,0x138));
    return 0;
  }
  lVar11 = 0;
  if ((param_5 == 0) && (param_5 = BN_CTX_new(), lVar11 = param_5, param_5 == 0)) {
    return 0;
  }
  BN_CTX_start(param_5);
  uVar5 = BN_CTX_get(param_5);
  lVar6 = BN_CTX_get(param_5);
  if ((lVar6 == 0) || (lVar7 = BN_bin2bn(param_3 + 1,iVar2,uVar5), lVar7 == 0)) goto LAB_14f7a05d5;
  iVar3 = BN_ucmp(uVar5,*(undefined8 *)(param_1 + 0x40));
  if (iVar3 < 0) {
    if (uVar8 == 2) {
      iVar2 = EC_POINT_set_compressed_coordinates(param_1,param_2,uVar5,uVar10,param_5);
LAB_14f7a05c6:
      if (iVar2 != 0) {
        local_res20 = 1;
      }
      goto LAB_14f7a05d5;
    }
    lVar9 = BN_bin2bn(param_3 + lVar9 + 1,iVar2,lVar6);
    if (lVar9 == 0) goto LAB_14f7a05d5;
    iVar2 = BN_ucmp(lVar6,*(undefined8 *)(param_1 + 0x40));
    if (iVar2 < 0) {
      if ((uVar8 != 6) || (uVar8 = BN_is_odd(lVar6), uVar10 == uVar8)) {
        iVar2 = EC_POINT_set_affine_coordinates(param_1,param_2,uVar5,lVar6,param_5);
        goto LAB_14f7a05c6;
      }
      uVar5 = CONCAT44(uVar12,0x15b);
    }
    else {
      uVar5 = CONCAT44(uVar12,0x156);
    }
  }
  else {
    uVar5 = CONCAT44(uVar12,0x14b);
  }
  ERR_put_error(0x10,0x67,0x66,"crypto\\ec\\ecp_oct.c",uVar5);
LAB_14f7a05d5:
  BN_CTX_end(param_5);
  BN_CTX_free(lVar11);
  return (ulonglong)local_res20;
}

// ec_GFp_simple_point2oct @ 14f7a0620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_GFp_simple_point2oct
                    (longlong param_1,undefined8 param_2,int param_3,char *param_4,ulonglong param_5
                    ,longlong param_6)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  char *pcVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar12;
  undefined8 uVar11;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar10 = 0;
  if (((param_3 - 2U & 0xfffffff9) == 0) && (param_3 != 8)) {
    iVar1 = EC_POINT_is_at_infinity();
    if (iVar1 != 0) {
      if (param_4 == (char *)0x0) {
        return 1;
      }
      if (param_5 == 0) {
        ERR_put_error(0x10,0x68,100,"crypto\\ec\\ecp_oct.c",CONCAT44(uVar12,0xaf));
        return 0;
      }
      *param_4 = '\0';
      return 1;
    }
    iVar1 = BN_num_bits(*(undefined8 *)(param_1 + 0x40));
    uVar9 = (ulonglong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
    uVar2 = uVar9;
    if (param_3 != 2) {
      uVar2 = uVar9 * 2;
    }
    uVar2 = uVar2 + 1;
    if (param_4 == (char *)0x0) goto LAB_14f7a08ac;
    if (uVar2 <= param_5) {
      if ((param_6 == 0) && (param_6 = BN_CTX_new(), lVar10 = param_6, param_6 == 0)) {
        return 0;
      }
      BN_CTX_start(param_6);
      uVar3 = BN_CTX_get(param_6);
      lVar4 = BN_CTX_get(param_6);
      if (lVar4 != 0) {
        lVar7 = param_6;
        iVar1 = EC_POINT_get_affine_coordinates(param_1,param_2,uVar3,lVar4,param_6);
        uVar12 = (undefined4)((ulonglong)lVar7 >> 0x20);
        if (iVar1 != 0) {
          if (((param_3 - 2U & 0xfffffffb) == 0) && (iVar1 = BN_is_odd(lVar4), iVar1 != 0)) {
            *param_4 = (char)param_3 + '\x01';
          }
          else {
            *param_4 = (char)param_3;
          }
          lVar7 = 1;
          iVar1 = BN_num_bits(uVar3);
          uVar5 = uVar9 - (longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
          if (uVar9 < uVar5) {
            uVar3 = CONCAT44(uVar12,0xde);
          }
          else {
            if (uVar5 != 0) {
              lVar7 = uVar5 + 1;
              pcVar8 = param_4;
              for (; pcVar8 = pcVar8 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
                *pcVar8 = '\0';
              }
            }
            iVar1 = BN_bn2bin(uVar3,param_4 + lVar7);
            uVar5 = lVar7 + iVar1;
            if (uVar5 == uVar9 + 1) {
              if ((param_3 - 4U & 0xfffffffd) == 0) {
                iVar1 = BN_num_bits(lVar4);
                uVar6 = uVar9 - (longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
                if (uVar9 < uVar6) {
                  uVar3 = CONCAT44(uVar12,0xf0);
                  goto LAB_14f7a07c9;
                }
                if (uVar6 != 0) {
                  pcVar8 = param_4 + uVar5;
                  uVar5 = uVar5 + uVar6;
                  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *pcVar8 = '\0';
                    pcVar8 = pcVar8 + 1;
                  }
                }
                iVar1 = BN_bn2bin(lVar4,param_4 + uVar5);
                uVar5 = uVar5 + (longlong)iVar1;
              }
              if (uVar5 == uVar2) {
                BN_CTX_end(param_6);
LAB_14f7a08ac:
                BN_CTX_free(lVar10);
                return uVar2;
              }
              uVar3 = CONCAT44(uVar12,0xfc);
            }
            else {
              uVar3 = CONCAT44(uVar12,0xe8);
            }
          }
LAB_14f7a07c9:
          ERR_put_error(0x10,0x68,0x44,"crypto\\ec\\ecp_oct.c",uVar3);
        }
      }
      BN_CTX_end(param_6);
      goto LAB_14f7a08da;
    }
    uVar11 = 0xc0;
    uVar3 = 100;
  }
  else {
    uVar11 = 0xa7;
    uVar3 = 0x68;
  }
  ERR_put_error(0x10,0x68,uVar3,"crypto\\ec\\ecp_oct.c",uVar11);
LAB_14f7a08da:
  BN_CTX_free(lVar10);
  return 0;
}

// ec_GFp_simple_set_compressed_coordinates @ 14f7a0910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ec_GFp_simple_set_compressed_coordinates
          (longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,longlong param_5)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 uVar11;
  longlong local_38;
  undefined8 uVar10;
  
  uVar10 = 0;
  uVar9 = 0;
  local_38 = 0;
  ERR_clear_error();
  if ((param_5 == 0) && (param_5 = BN_CTX_new(), local_38 = param_5, param_5 == 0)) {
    return 0;
  }
  BN_CTX_start(param_5);
  uVar4 = BN_CTX_get(param_5);
  lVar5 = BN_CTX_get(param_5);
  uVar6 = BN_CTX_get(param_5);
  lVar7 = BN_CTX_get(param_5);
  if ((lVar7 != 0) && (iVar2 = BN_nnmod(uVar6,param_3,param_1[8],param_5), iVar2 != 0)) {
    if (*(longlong *)(*param_1 + 0x130) == 0) {
      iVar2 = (**(code **)(*param_1 + 0x110))(param_1,lVar5,param_3);
      if (iVar2 == 0) goto LAB_14f7a0cb8;
      lVar8 = param_5;
      iVar2 = (**(code **)(*param_1 + 0x108))(param_1,uVar4,lVar5,param_3,param_5);
      uVar11 = (undefined4)((ulonglong)lVar8 >> 0x20);
    }
    else {
      iVar2 = BN_mod_sqr(lVar5,param_3,param_1[8],param_5);
      uVar10 = uVar9;
      if (iVar2 == 0) goto LAB_14f7a0cb8;
      lVar8 = param_5;
      iVar2 = BN_mod_mul(uVar4,lVar5,param_3,param_1[8],param_5);
      uVar11 = (undefined4)((ulonglong)lVar8 >> 0x20);
    }
    uVar10 = uVar9;
    if (iVar2 != 0) {
      if ((int)param_1[0xe] == 0) {
        pcVar1 = *(code **)(*param_1 + 0x130);
        if (pcVar1 == (code *)0x0) {
          lVar8 = param_5;
          iVar2 = (**(code **)(*param_1 + 0x108))(param_1,lVar5,param_1[0xc],uVar6,param_5);
          uVar11 = (undefined4)((ulonglong)lVar8 >> 0x20);
        }
        else {
          iVar2 = (*pcVar1)();
          if (iVar2 == 0) goto LAB_14f7a0cb8;
          lVar8 = param_5;
          iVar2 = BN_mod_mul(lVar5,lVar5,uVar6,param_1[8],param_5);
          uVar11 = (undefined4)((ulonglong)lVar8 >> 0x20);
        }
        if (iVar2 == 0) goto LAB_14f7a0cb8;
        iVar2 = BN_mod_add_quick(uVar4,uVar4,lVar5,param_1[8]);
      }
      else {
        iVar2 = BN_mod_lshift1_quick(lVar5,uVar6,param_1[8]);
        if ((iVar2 == 0) || (iVar2 = BN_mod_add_quick(lVar5,lVar5,uVar6,param_1[8]), iVar2 == 0))
        goto LAB_14f7a0cb8;
        iVar2 = BN_mod_sub_quick(uVar4,uVar4,lVar5,param_1[8]);
      }
      if (iVar2 != 0) {
        lVar8 = param_1[0xd];
        if (((*(code **)(*param_1 + 0x130) == (code *)0x0) ||
            (iVar2 = (**(code **)(*param_1 + 0x130))(param_1,lVar5,param_1[0xd],param_5),
            lVar8 = lVar5, iVar2 != 0)) &&
           (iVar2 = BN_mod_add_quick(uVar4,uVar4,lVar8,param_1[8]), iVar2 != 0)) {
          lVar5 = BN_mod_sqrt(lVar7,uVar4,param_1[8],param_5);
          if (lVar5 == 0) {
            uVar3 = ERR_peek_last_error();
            if (((uVar3 & 0xff000000) == 0x3000000) && ((uVar3 & 0xfff) == 0x6f)) {
              ERR_clear_error();
              ERR_put_error(0x10,0xa9,0x6e,"crypto\\ec\\ecp_oct.c",CONCAT44(uVar11,0x6c));
            }
            else {
              ERR_put_error(0x10,0xa9,3,"crypto\\ec\\ecp_oct.c",CONCAT44(uVar11,0x6f));
            }
          }
          else {
            uVar3 = BN_is_odd(lVar7);
            if ((param_4 != 0) != uVar3) {
              iVar2 = BN_is_zero(lVar7);
              if (iVar2 != 0) {
                iVar2 = BN_kronecker(uVar6,param_1[8],param_5);
                if (iVar2 != -2) {
                  if (iVar2 == 1) {
                    ERR_put_error(0x10,0xa9,0x6d,"crypto\\ec\\ecp_oct.c",CONCAT44(uVar11,0x7d));
                  }
                  else {
                    ERR_put_error(0x10,0xa9,0x6e,"crypto\\ec\\ecp_oct.c",CONCAT44(uVar11,0x83));
                  }
                }
                goto LAB_14f7a0cb8;
              }
              iVar2 = BN_usub(lVar7,param_1[8],lVar7);
              if (iVar2 == 0) goto LAB_14f7a0cb8;
            }
            uVar3 = BN_is_odd(lVar7);
            if ((param_4 != 0) == uVar3) {
              iVar2 = EC_POINT_set_affine_coordinates(param_1,param_2,uVar6,lVar7,param_5);
              uVar10 = 0;
              if (iVar2 != 0) {
                uVar10 = 1;
              }
            }
            else {
              ERR_put_error(0x10,0xa9,0x44,"crypto\\ec\\ecp_oct.c",CONCAT44(uVar11,0x8b));
            }
          }
        }
      }
    }
  }
LAB_14f7a0cb8:
  BN_CTX_end(param_5);
  BN_CTX_free(local_38);
  return uVar10;
}

