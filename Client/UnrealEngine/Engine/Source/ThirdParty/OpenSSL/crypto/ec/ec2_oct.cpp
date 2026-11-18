// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// ec_GF2m_simple_oct2point @ 14f7a0d00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_GF2m_simple_oct2point
                    (longlong *param_1,undefined8 param_2,byte *param_3,longlong param_4,
                    longlong param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar14;
  uint local_48;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  local_48 = 0;
  if (param_4 == 0) {
    ERR_put_error(0x10,0xa0,100,"crypto\\ec\\ec2_oct.c",0xf7);
    return 0;
  }
  bVar1 = *param_3;
  uVar11 = bVar1 & 1;
  uVar10 = bVar1 & 0xfffffffe;
  if ((bVar1 & 0xfe) == 0) {
LAB_14f7a0d92:
    if ((bVar1 & 1) != 0) {
      uVar6 = 0x110;
      goto LAB_14f7a0db2;
    }
  }
  else {
    if (uVar10 != 2) {
      if (uVar10 == 4) goto LAB_14f7a0d92;
      if (uVar10 != 6) {
        uVar6 = 0x10c;
        goto LAB_14f7a0db2;
      }
    }
    if (uVar10 == 4) goto LAB_14f7a0d92;
  }
  if ((bVar1 & 0xfe) == 0) {
    if (param_4 == 1) {
      uVar5 = EC_POINT_set_to_infinity();
      return uVar5;
    }
    uVar6 = 0x117;
LAB_14f7a0db2:
    ERR_put_error(0x10,0xa0,0x66,"crypto\\ec\\ec2_oct.c",uVar6);
    return 0;
  }
  iVar2 = EC_GROUP_get_degree();
  iVar3 = (int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3;
  lVar13 = (longlong)iVar3;
  lVar12 = lVar13;
  if (uVar10 != 2) {
    lVar12 = lVar13 * 2;
  }
  if (param_4 != lVar12 + 1) {
    ERR_put_error(0x10,0xa0,0x66,"crypto\\ec\\ec2_oct.c",CONCAT44(uVar14,0x125));
    return 0;
  }
  lVar12 = 0;
  if ((param_5 == 0) && (param_5 = BN_CTX_new(), lVar12 = param_5, param_5 == 0)) {
    return 0;
  }
  BN_CTX_start(param_5);
  uVar6 = BN_CTX_get(param_5);
  uVar7 = BN_CTX_get(param_5);
  lVar8 = BN_CTX_get(param_5);
  if ((lVar8 == 0) || (lVar9 = BN_bin2bn(param_3 + 1,iVar3,uVar6), lVar9 == 0)) goto LAB_14f7a0fe8;
  iVar4 = BN_num_bits(uVar6);
  if (iVar2 < iVar4) {
    uVar6 = CONCAT44(uVar14,0x139);
LAB_14f7a0ecf:
    uVar7 = 0xa0;
LAB_14f7a0ed9:
    ERR_put_error(0x10,uVar7,0x66,"crypto\\ec\\ec2_oct.c",uVar6);
  }
  else {
    if (uVar10 == 2) {
      iVar2 = EC_POINT_set_compressed_coordinates(param_1,param_2,uVar6,uVar11,param_5);
    }
    else {
      lVar13 = BN_bin2bn(param_3 + lVar13 + 1,iVar3,uVar7);
      if (lVar13 == 0) goto LAB_14f7a0fe8;
      iVar3 = BN_num_bits(uVar7);
      if (iVar2 < iVar3) {
        uVar6 = CONCAT44(uVar14,0x144);
        goto LAB_14f7a0ecf;
      }
      if (uVar10 == 6) {
        iVar2 = BN_is_zero(uVar6);
        if (iVar2 == 0) {
          lVar13 = param_5;
          iVar2 = (**(code **)(*param_1 + 0x118))(param_1,lVar8,uVar7,uVar6,param_5);
          uVar14 = (undefined4)((ulonglong)lVar13 >> 0x20);
          if (iVar2 == 0) goto LAB_14f7a0fe8;
          uVar10 = BN_is_odd(lVar8);
          if (uVar11 != uVar10) {
            uVar7 = 0x10;
            uVar6 = CONCAT44(uVar14,0x156);
            goto LAB_14f7a0ed9;
          }
        }
        else if ((bVar1 & 1) != 0) {
          uVar7 = 0x10;
          uVar6 = CONCAT44(uVar14,0x14f);
          goto LAB_14f7a0ed9;
        }
      }
      iVar2 = EC_POINT_set_affine_coordinates(param_1,param_2,uVar6,uVar7,param_5);
    }
    if (iVar2 != 0) {
      local_48 = 1;
    }
  }
LAB_14f7a0fe8:
  BN_CTX_end(param_5);
  BN_CTX_free(lVar12);
  return (ulonglong)local_48;
}

// ec_GF2m_simple_point2oct @ 14f7a1030

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_GF2m_simple_point2oct
                    (longlong *param_1,undefined8 param_2,int param_3,char *param_4,
                    ulonglong param_5,longlong param_6)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar12;
  longlong lVar11;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  lVar10 = 0;
  if (((param_3 - 2U & 0xfffffff9) == 0) && (param_3 != 8)) {
    iVar1 = EC_POINT_is_at_infinity();
    if (iVar1 != 0) {
      if (param_4 == (char *)0x0) {
        return 1;
      }
      if (param_5 == 0) {
        ERR_put_error(0x10,0xa1,100,"crypto\\ec\\ec2_oct.c",CONCAT44(uVar12,0x86));
        return 0;
      }
      *param_4 = '\0';
      return 1;
    }
    iVar1 = EC_GROUP_get_degree(param_1);
    uVar9 = (ulonglong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
    uVar2 = uVar9;
    if (param_3 != 2) {
      uVar2 = uVar9 * 2;
    }
    uVar2 = uVar2 + 1;
    if (param_4 == (char *)0x0) goto LAB_14f7a12f4;
    if (uVar2 <= param_5) {
      if ((param_6 == 0) && (param_6 = BN_CTX_new(), lVar10 = param_6, param_6 == 0)) {
        return 0;
      }
      BN_CTX_start(param_6);
      uVar8 = BN_CTX_get(param_6);
      uVar3 = BN_CTX_get(param_6);
      lVar4 = BN_CTX_get(param_6);
      if (lVar4 != 0) {
        lVar11 = param_6;
        iVar1 = EC_POINT_get_affine_coordinates(param_1,param_2,uVar8,uVar3,param_6);
        uVar12 = (undefined4)((ulonglong)lVar11 >> 0x20);
        if (iVar1 != 0) {
          *param_4 = (char)param_3;
          if ((param_3 != 4) && (iVar1 = BN_is_zero(uVar8), iVar1 == 0)) {
            lVar11 = param_6;
            iVar1 = (**(code **)(*param_1 + 0x118))(param_1,lVar4,uVar3,uVar8,param_6);
            uVar12 = (undefined4)((ulonglong)lVar11 >> 0x20);
            if (iVar1 == 0) goto LAB_14f7a122d;
            iVar1 = BN_is_odd(lVar4);
            if (iVar1 != 0) {
              *param_4 = *param_4 + '\x01';
            }
          }
          lVar4 = 1;
          iVar1 = BN_num_bits(uVar8);
          uVar5 = uVar9 - (longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
          if (uVar9 < uVar5) {
            uVar8 = CONCAT44(uVar12,0xb8);
          }
          else {
            if (uVar5 != 0) {
              lVar4 = uVar5 + 1;
              pcVar7 = param_4;
              for (; pcVar7 = pcVar7 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
                *pcVar7 = '\0';
              }
            }
            iVar1 = BN_bn2bin(uVar8,param_4 + lVar4);
            uVar5 = lVar4 + iVar1;
            if (uVar5 == uVar9 + 1) {
              if ((param_3 - 4U & 0xfffffffd) == 0) {
                iVar1 = BN_num_bits(uVar3);
                uVar6 = uVar9 - (longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
                if (uVar9 < uVar6) {
                  uVar8 = CONCAT44(uVar12,0xca);
                  goto LAB_14f7a1213;
                }
                if (uVar6 != 0) {
                  pcVar7 = param_4 + uVar5;
                  uVar5 = uVar5 + uVar6;
                  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *pcVar7 = '\0';
                    pcVar7 = pcVar7 + 1;
                  }
                }
                iVar1 = BN_bn2bin(uVar3,param_4 + uVar5);
                uVar5 = uVar5 + (longlong)iVar1;
              }
              if (uVar5 == uVar2) {
                BN_CTX_end(param_6);
LAB_14f7a12f4:
                BN_CTX_free(lVar10);
                return uVar2;
              }
              uVar8 = CONCAT44(uVar12,0xd6);
            }
            else {
              uVar8 = CONCAT44(uVar12,0xc2);
            }
          }
LAB_14f7a1213:
          ERR_put_error(0x10,0xa1,0x44,"crypto\\ec\\ec2_oct.c",uVar8);
        }
      }
LAB_14f7a122d:
      BN_CTX_end(param_6);
      goto LAB_14f7a1325;
    }
    uVar3 = 0x97;
    uVar8 = 100;
  }
  else {
    uVar3 = 0x7e;
    uVar8 = 0x68;
  }
  ERR_put_error(0x10,0xa1,uVar8,"crypto\\ec\\ec2_oct.c",uVar3);
LAB_14f7a1325:
  BN_CTX_free(lVar10);
  return 0;
}

// ec_GF2m_simple_set_compressed_coordinates @ 14f7a1360

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_GF2m_simple_set_compressed_coordinates
                   (longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                   longlong param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  longlong lVar9;
  
  lVar9 = 0;
  lVar8 = 0;
  ERR_clear_error();
  lVar11 = lVar9;
  if ((param_5 == 0) && (param_5 = BN_CTX_new(), lVar11 = param_5, param_5 == 0)) {
    return 0;
  }
  BN_CTX_start(param_5);
  uVar4 = BN_CTX_get(param_5);
  uVar5 = BN_CTX_get(param_5);
  uVar6 = BN_CTX_get(param_5);
  lVar7 = BN_CTX_get(param_5);
  lVar10 = lVar9;
  if ((lVar7 == 0) || (iVar1 = BN_GF2m_mod_arr(uVar5,param_3,param_1 + 9), iVar1 == 0))
  goto LAB_14f7a15ba;
  iVar1 = BN_is_zero(uVar5);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar4,uVar5,param_5);
    if (iVar1 == 0) goto LAB_14f7a15ba;
    lVar10 = param_5;
    iVar1 = (**(code **)(*param_1 + 0x118))(param_1,uVar4,param_1[0xd],uVar4,param_5);
    uVar12 = (undefined4)((ulonglong)lVar10 >> 0x20);
    lVar10 = lVar8;
    if (((iVar1 == 0) || (iVar1 = BN_GF2m_add(uVar4,param_1[0xc],uVar4), iVar1 == 0)) ||
       (iVar1 = BN_GF2m_add(uVar4,uVar5,uVar4), iVar1 == 0)) goto LAB_14f7a15ba;
    iVar1 = BN_GF2m_mod_solve_quad_arr(lVar7,uVar4,param_1 + 9,param_5);
    if (iVar1 == 0) {
      uVar2 = ERR_peek_last_error();
      if (((uVar2 & 0xff000000) == 0x3000000) && ((uVar2 & 0xfff) == 0x74)) {
        ERR_clear_error();
        ERR_put_error(0x10,0xa4,0x6e,"crypto\\ec\\ec2_oct.c",CONCAT44(uVar12,0x52));
      }
      else {
        ERR_put_error(0x10,0xa4,3,"crypto\\ec\\ec2_oct.c",CONCAT44(uVar12,0x55));
      }
      goto LAB_14f7a15ba;
    }
    iVar1 = BN_is_odd(lVar7);
    iVar3 = (**(code **)(*param_1 + 0x108))(param_1,uVar6,uVar5,lVar7,param_5);
    if (iVar3 == 0) goto LAB_14f7a15ba;
    if ((iVar1 != 0) != (param_4 != 0)) {
      iVar1 = BN_GF2m_add(uVar6,uVar6,uVar5);
      goto LAB_14f7a158c;
    }
  }
  else {
    iVar1 = BN_GF2m_mod_sqrt_arr(uVar6,param_1[0xd],param_1 + 9);
LAB_14f7a158c:
    lVar10 = lVar9;
    if (iVar1 == 0) goto LAB_14f7a15ba;
  }
  iVar1 = EC_POINT_set_affine_coordinates(param_1,param_2,uVar5,uVar6,param_5);
  lVar10 = 0;
  if (iVar1 != 0) {
    lVar10 = 1;
  }
LAB_14f7a15ba:
  BN_CTX_end(param_5);
  BN_CTX_free(lVar11);
  return lVar10;
}

