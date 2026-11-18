// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// BN_mod_sqrt @ 14f7c7a20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BN_mod_sqrt(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  code *pcVar13;
  undefined8 in_stack_ffffffffffffffa8;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  iVar1 = BN_is_odd(param_3);
  lVar7 = param_1;
  if ((iVar1 == 0) || (iVar1 = BN_abs_is_word(param_3,1), iVar1 != 0)) {
    iVar1 = BN_abs_is_word(param_3,2);
    if (iVar1 == 0) {
      ERR_put_error(3,0x79,0x70,"crypto\\bn\\bn_sqrt.c",CONCAT44(uVar3,0x2a));
      return 0;
    }
    if ((param_1 != 0) || (lVar7 = BN_new(), lVar7 != 0)) {
      iVar1 = BN_is_bit_set(param_2,0);
LAB_14f7c80ef:
      iVar1 = BN_set_word(lVar7,(longlong)iVar1);
      if (iVar1 == 0) {
        if (lVar7 != param_1) {
          BN_free(lVar7);
        }
        return 0;
      }
      return lVar7;
    }
  }
  else {
    iVar1 = BN_is_zero(param_2);
    if ((iVar1 == 0) && (iVar1 = BN_is_one(param_2), iVar1 == 0)) {
      BN_CTX_start(param_4);
      uVar5 = BN_CTX_get(param_4);
      uVar6 = BN_CTX_get(param_4);
      lVar7 = BN_CTX_get(param_4);
      uVar8 = BN_CTX_get(param_4);
      uVar9 = BN_CTX_get(param_4);
      lVar10 = BN_CTX_get(param_4);
      if ((lVar10 != 0) && ((lVar11 = param_1, param_1 != 0 || (lVar11 = BN_new(), lVar11 != 0)))) {
        iVar1 = BN_nnmod(uVar5,param_2,param_3,param_4);
        if (iVar1 == 0) goto LAB_14f7c80b0;
        iVar1 = 1;
        iVar2 = BN_is_bit_set(param_3,1);
        if (iVar2 == 0) {
          do {
            iVar1 = iVar1 + 1;
            iVar2 = BN_is_bit_set(param_3,iVar1);
          } while (iVar2 == 0);
          if (iVar1 == 1) goto LAB_14f7c8010;
          if (iVar1 != 2) {
            lVar12 = BN_copy(lVar7,param_3);
            if (lVar12 == 0) goto LAB_14f7c80b0;
            *(undefined4 *)(lVar7 + 0x10) = 0;
            iVar2 = 2;
            do {
              if (iVar2 < 0x16) {
LAB_14f7c7cfc:
                iVar4 = BN_set_word(lVar10,(longlong)iVar2);
                if (iVar4 == 0) goto LAB_14f7c80b0;
              }
              else {
                uVar3 = BN_num_bits(param_3);
                iVar4 = BN_priv_rand(lVar10,uVar3,0,0);
                if (iVar4 == 0) goto LAB_14f7c80b0;
                iVar4 = BN_ucmp(lVar10,param_3);
                if (-1 < iVar4) {
                  pcVar13 = BN_sub;
                  if (*(int *)(param_3 + 0x10) != 0) {
                    pcVar13 = BN_add;
                  }
                  iVar4 = (*pcVar13)(lVar10,lVar10,param_3);
                  if (iVar4 == 0) goto LAB_14f7c80b0;
                }
                iVar4 = BN_is_zero(lVar10);
                if (iVar4 != 0) goto LAB_14f7c7cfc;
              }
              iVar4 = BN_kronecker(lVar10,lVar7);
              if (iVar4 < -1) goto LAB_14f7c80b0;
              if (iVar4 == 0) {
                uVar5 = 0xc9;
                uVar3 = 0x70;
                goto LAB_14f7c809c;
              }
              if (iVar4 != 1) {
                if (iVar4 != -1) {
                  uVar5 = 0xd5;
                  uVar3 = 0x71;
                  goto LAB_14f7c809c;
                }
                iVar2 = BN_rshift(lVar7,lVar7,iVar1);
                if ((iVar2 == 0) ||
                   (iVar2 = BN_mod_exp(lVar10,lVar10,lVar7,param_3,param_4), iVar2 == 0))
                goto LAB_14f7c80b0;
                iVar2 = BN_is_one(lVar10);
                if (iVar2 != 0) {
                  uVar5 = 0xe4;
                  uVar3 = 0x70;
                  goto LAB_14f7c809c;
                }
                iVar2 = BN_rshift1(uVar8,lVar7);
                if (iVar2 == 0) goto LAB_14f7c80b0;
                iVar2 = BN_is_zero(uVar8);
                if (iVar2 == 0) {
                  iVar2 = BN_mod_exp(uVar9,uVar5,uVar8,param_3,param_4);
                  if (iVar2 == 0) goto LAB_14f7c80b0;
                  iVar2 = BN_is_zero(uVar9);
                  if (iVar2 != 0) goto LAB_14f7c7e00;
                }
                else {
                  iVar2 = BN_nnmod(uVar8,uVar5,param_3,param_4);
                  if (iVar2 == 0) goto LAB_14f7c80b0;
                  iVar2 = BN_is_zero(uVar8);
                  if (iVar2 != 0) {
LAB_14f7c7e00:
                    BN_set_word(lVar11,0);
                    BN_CTX_end(param_4);
                    return lVar11;
                  }
                  iVar2 = BN_set_word(uVar9,1);
                  if (iVar2 == 0) goto LAB_14f7c80b0;
                }
                iVar2 = BN_mod_sqr(uVar6,uVar9,param_3,param_4);
                if (((iVar2 == 0) ||
                    (iVar2 = BN_mod_mul(uVar6,uVar6,uVar5,param_3,param_4), iVar2 == 0)) ||
                   (iVar2 = BN_mod_mul(uVar9,uVar9,uVar5,param_3,param_4), iVar2 == 0))
                goto LAB_14f7c80b0;
                iVar2 = BN_is_one(uVar6);
                goto joined_r0x00014f7c7eca;
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < 0x52);
            uVar5 = 0xd5;
            uVar3 = 0x71;
            goto LAB_14f7c809c;
          }
          iVar1 = BN_mod_lshift1_quick(uVar8,uVar5,param_3);
          if ((iVar1 != 0) && (iVar1 = BN_rshift(lVar7,param_3,3), iVar1 != 0)) {
            *(undefined4 *)(lVar7 + 0x10) = 0;
            iVar1 = BN_mod_exp(uVar6,uVar8,lVar7,param_3,param_4);
            if (((iVar1 != 0) &&
                ((((iVar1 = BN_mod_sqr(lVar10,uVar6,param_3,param_4), iVar1 != 0 &&
                   (iVar1 = BN_mod_mul(uVar8,uVar8,lVar10,param_3,param_4), iVar1 != 0)) &&
                  (iVar1 = BN_sub_word(uVar8,1), iVar1 != 0)) &&
                 ((iVar1 = BN_mod_mul(uVar9,uVar5,uVar6,param_3,param_4), iVar1 != 0 &&
                  (iVar1 = BN_mod_mul(uVar9,uVar9,uVar8,param_3,param_4), iVar1 != 0)))))) &&
               (lVar7 = BN_copy(lVar11,uVar9), lVar7 != 0)) goto LAB_14f7c8066;
          }
        }
        else {
LAB_14f7c8010:
          iVar1 = BN_rshift(lVar7,param_3,2);
          if (iVar1 != 0) {
            *(undefined4 *)(lVar7 + 0x10) = 0;
            iVar1 = BN_add_word(lVar7,1);
            if ((iVar1 != 0) && (iVar1 = BN_mod_exp(lVar11,uVar5,lVar7,param_3,param_4), iVar1 != 0)
               ) goto LAB_14f7c8066;
          }
        }
        goto LAB_14f7c80b0;
      }
    }
    else if ((param_1 != 0) || (lVar7 = BN_new(), lVar7 != 0)) {
      iVar1 = BN_is_one(param_2);
      goto LAB_14f7c80ef;
    }
  }
LAB_14f7c8130:
  lVar11 = 0;
LAB_14f7c8133:
  BN_CTX_end(param_4);
  return lVar11;
joined_r0x00014f7c7eca:
  if (iVar2 != 0) goto LAB_14f7c7fe2;
  iVar4 = 1;
  if (iVar1 < 2) {
LAB_14f7c7f25:
    uVar5 = 0x140;
    goto LAB_14f7c8096;
  }
  while( true ) {
    if (iVar4 == 1) {
      iVar2 = BN_mod_sqr(uVar8,uVar6,param_3,param_4);
    }
    else {
      iVar2 = BN_mod_mul(uVar8,uVar8,uVar8,param_3,param_4);
    }
    if (iVar2 == 0) goto LAB_14f7c80b0;
    iVar2 = BN_is_one(uVar8);
    if (iVar2 != 0) break;
    iVar4 = iVar4 + 1;
    if (iVar1 <= iVar4) goto LAB_14f7c7f25;
  }
  lVar7 = BN_copy(uVar8,lVar10);
  if (lVar7 == 0) goto LAB_14f7c80b0;
  iVar1 = iVar1 - iVar4;
  while (iVar1 = iVar1 + -1, 0 < iVar1) {
    iVar2 = BN_mod_sqr(uVar8,uVar8,param_3,param_4);
    if (iVar2 == 0) goto LAB_14f7c80b0;
  }
  iVar1 = BN_mod_mul(lVar10,uVar8,uVar8,param_3,param_4);
  if (((iVar1 == 0) || (iVar1 = BN_mod_mul(uVar9,uVar9,uVar8,param_3,param_4), iVar1 == 0)) ||
     (iVar1 = BN_mod_mul(uVar6,uVar6,lVar10,param_3,param_4), iVar1 == 0)) goto LAB_14f7c80b0;
  iVar2 = BN_is_one(uVar6);
  iVar1 = iVar4;
  goto joined_r0x00014f7c7eca;
LAB_14f7c7fe2:
  lVar7 = BN_copy(lVar11,uVar9);
  if (lVar7 == 0) goto LAB_14f7c80b0;
LAB_14f7c8066:
  iVar1 = BN_mod_sqr(uVar9,lVar11,param_3,param_4);
  if (iVar1 != 0) {
    iVar1 = BN_cmp(uVar9,uVar5);
    if (iVar1 == 0) goto LAB_14f7c8133;
    uVar5 = 0x15f;
LAB_14f7c8096:
    uVar3 = 0x6f;
LAB_14f7c809c:
    ERR_put_error(3,0x79,uVar3,"crypto\\bn\\bn_sqrt.c",uVar5);
  }
LAB_14f7c80b0:
  if (lVar11 != param_1) {
    BN_clear_free(lVar11);
    BN_CTX_end(param_4);
    return 0;
  }
  goto LAB_14f7c8130;
}

