// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 29

// X509_policy_check @ 14f707b90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong X509_policy_check(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,
                           undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res8 = 0;
  local_res10 = 0;
  *param_1 = 0;
  *param_2 = 0;
  uVar3 = FUN_14f7084b0(&local_res8,param_3,param_5);
  uVar4 = local_res8;
  if ((int)uVar3 < 1) {
    return uVar3;
  }
  uVar5 = 1;
  if ((uVar3 & 4) == 0) {
    if ((uVar3 & 2) != 0) {
      X509_policy_tree_free(local_res8);
      return 1;
    }
  }
  else {
    *param_2 = 1;
    if ((uVar3 & 2) != 0) {
      return 0xfffffffe;
    }
  }
  iVar1 = FUN_14f708400(local_res8);
  if (0 < iVar1) {
    if (iVar1 == 2) {
      X509_policy_tree_free();
      uVar5 = 1;
      if ((uVar3 & 4) != 0) {
        uVar5 = 0xfffffffe;
      }
LAB_14f707c43:
      return (ulonglong)uVar5;
    }
    iVar1 = FUN_14f7080f0(uVar4,&local_res10);
    if (iVar1 != 0) {
      iVar2 = FUN_14f708270(uVar4,param_4,local_res10);
      if (iVar1 == 2) {
        OPENSSL_sk_free(local_res10);
      }
      if (iVar2 != 0) {
        *param_1 = uVar4;
        if ((uVar3 & 4) != 0) {
          uVar4 = X509_policy_tree_get0_user_policies(uVar4);
          iVar1 = OPENSSL_sk_num(uVar4);
          if (iVar1 < 1) {
            return 0xfffffffe;
          }
        }
        goto LAB_14f707c43;
      }
    }
  }
  X509_policy_tree_free(uVar4);
  return 0;
}

// X509_policy_tree_free @ 14f707cd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_policy_tree_free(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    OPENSSL_sk_free(param_1[3]);
    OPENSSL_sk_pop_free(param_1[4],FUN_14f707da0);
    puVar1 = (undefined8 *)*param_1;
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 1)) {
      do {
        X509_free(*puVar1);
        OPENSSL_sk_pop_free(puVar1[1],policy_node_free);
        policy_node_free(puVar1[2]);
        iVar2 = iVar2 + 1;
        puVar1 = puVar1 + 4;
      } while (iVar2 < *(int *)(param_1 + 1));
    }
    OPENSSL_sk_pop_free(param_1[2],policy_data_free);
    CRYPTO_free(*param_1,"crypto\\x509v3\\pcy_tree.c",0x271);
    CRYPTO_free(param_1,"crypto\\x509v3\\pcy_tree.c",0x272);
  }
  return;
}

// FUN_14f707da0 @ 14f707da0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f707da0(undefined8 *param_1)

{
  if (((byte *)*param_1 != (byte *)0x0) && ((*(byte *)*param_1 & 8) != 0)) {
    CRYPTO_free(param_1,"crypto\\x509v3\\pcy_tree.c",0x25c);
    return;
  }
  return;
}

// FUN_14f707de0 @ 14f707de0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f707de0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f707e00 @ 14f707e00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f707e00(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f707e20 @ 14f707e20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f707e20(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f707e40 @ 14f707e40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f707e40(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f707e60 @ 14f707e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f707e60(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f707e80 @ 14f707e80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f707e80(void)

{
  OPENSSL_sk_delete();
  return;
}

// FUN_14f707ea0 @ 14f707ea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f707ea0(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f707ec0 @ 14f707ec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f707ec0(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f707ee0 @ 14f707ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f707ee0(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f707f00 @ 14f707f00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f707f00(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f707f20 @ 14f707f20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f707f20(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f707f40 @ 14f707f40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f707f40(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f707f60 @ 14f707f60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f707f60(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f707f80 @ 14f707f80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f707f80(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f707fa0 @ 14f707fa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f707fa0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f707fc0 @ 14f707fc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f707fc0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    lVar2 = policy_node_cmp_new();
    *param_1 = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  iVar1 = OPENSSL_sk_find(*param_1,param_2);
  if (-1 < iVar1) {
    return true;
  }
  iVar1 = OPENSSL_sk_push(*param_1,param_2);
  return iVar1 != 0;
}

// FUN_14f708040 @ 14f708040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f708040(undefined8 param_1,longlong *param_2,longlong param_3,longlong *param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  uint *puVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    param_3 = *(longlong *)(*param_4 + 8);
  }
  puVar2 = (uint *)policy_data_new(0,param_3,*(uint *)*param_4 & 0x10);
  if (puVar2 != (uint *)0x0) {
    uVar1 = *(undefined8 *)(*param_2 + 0x10);
    *puVar2 = *puVar2 | 4;
    *(undefined8 *)(puVar2 + 4) = uVar1;
    lVar3 = level_add_node(param_1,puVar2,param_4,param_5);
    if (lVar3 != 0) {
      return 1;
    }
    policy_data_free(puVar2);
  }
  return 0;
}

// FUN_14f7080f0 @ 14f7080f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7080f0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *local_res8;
  
  if (*(longlong *)((longlong)(int)param_1[1] * 0x20 + -0x10 + *param_1) == 0) {
    plVar7 = param_1 + 3;
  }
  else {
    uVar4 = FUN_14f707fc0(param_1 + 3);
    plVar7 = param_2;
    if ((int)uVar4 == 0) {
      return uVar4;
    }
  }
  local_res8 = param_1 + 3;
  iVar10 = 1;
  if (1 < (int)param_1[1]) {
    puVar9 = (undefined8 *)(*param_1 + 8);
    do {
      lVar2 = puVar9[1];
      if (lVar2 == 0) break;
      puVar1 = puVar9 + 4;
      puVar9 = puVar9 + 4;
      iVar8 = 0;
      iVar3 = OPENSSL_sk_num(*puVar1);
      if (0 < iVar3) {
        do {
          lVar5 = OPENSSL_sk_value(*puVar9,iVar8);
          if (*(longlong *)(lVar5 + 8) == lVar2) {
            if (*plVar7 == 0) {
              lVar6 = policy_node_cmp_new();
              *plVar7 = lVar6;
              if (lVar6 == 0) goto LAB_14f708213;
            }
            iVar3 = OPENSSL_sk_find(*plVar7,lVar5);
            if ((iVar3 < 0) && (iVar3 = OPENSSL_sk_push(*plVar7,lVar5), iVar3 == 0)) {
LAB_14f708213:
              if (plVar7 == param_2) {
                OPENSSL_sk_free(*param_2);
                *param_2 = 0;
              }
              return 0;
            }
          }
          iVar8 = iVar8 + 1;
          iVar3 = OPENSSL_sk_num(*puVar9);
        } while (iVar8 < iVar3);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)param_1[1]);
  }
  if (plVar7 == param_2) {
    uVar4 = 2;
  }
  else {
    uVar4 = 1;
    *param_2 = *local_res8;
  }
  return uVar4;
}

// FUN_14f708270 @ 14f708270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f708270(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = OPENSSL_sk_num(param_2);
  if (iVar2 < 1) {
    return 1;
  }
  iVar7 = 0;
  iVar8 = 0;
  plVar1 = *(longlong **)((longlong)((int)param_1[1] + -1) * 0x20 + 0x10 + *param_1);
  iVar2 = OPENSSL_sk_num(param_2);
  if (0 < iVar2) {
    do {
      uVar3 = OPENSSL_sk_value(param_2,iVar8);
      iVar2 = OBJ_obj2nid(uVar3);
      if (iVar2 == 0x2ea) {
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 2;
        return 1;
      }
      iVar8 = iVar8 + 1;
      iVar2 = OPENSSL_sk_num(param_2);
    } while (iVar8 < iVar2);
  }
  iVar2 = OPENSSL_sk_num(param_2);
  if (0 < iVar2) {
    do {
      uVar3 = OPENSSL_sk_value(param_2,iVar7);
      lVar4 = tree_find_sk(param_3,uVar3);
      if (lVar4 == 0) {
        if (plVar1 != (longlong *)0x0) {
          puVar5 = (undefined4 *)policy_data_new(0,uVar3,*(uint *)*plVar1 & 0x10);
          if (puVar5 == (undefined4 *)0x0) {
            return 0;
          }
          *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(*plVar1 + 0x10);
          *puVar5 = 0xc;
          lVar4 = level_add_node(0,puVar5,plVar1[1],param_1);
          goto LAB_14f708387;
        }
      }
      else {
LAB_14f708387:
        if (param_1[4] == 0) {
          lVar6 = OPENSSL_sk_new_null();
          param_1[4] = lVar6;
          if (lVar6 == 0) {
            return 1;
          }
        }
        iVar2 = OPENSSL_sk_push(param_1[4],lVar4);
        if (iVar2 == 0) {
          return 0;
        }
      }
      iVar7 = iVar7 + 1;
      iVar2 = OPENSSL_sk_num(param_2);
    } while (iVar7 < iVar2);
  }
  return 1;
}

// FUN_14f708400 @ 14f708400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f708400(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  
  iVar5 = 1;
  puVar1 = (undefined8 *)*param_1;
  if (1 < *(int *)(param_1 + 1)) {
    do {
      puVar4 = puVar1 + 4;
      uVar3 = policy_cache_set(*puVar4);
      iVar2 = FUN_14f708a60(puVar4,uVar3);
      if ((iVar2 == 0) ||
         (((*(uint *)(puVar1 + 7) & 0x200) == 0 &&
          (iVar2 = FUN_14f7087f0(puVar4,uVar3,param_1), iVar2 == 0)))) {
        return 0;
      }
      uVar3 = FUN_14f708cb0(param_1,puVar4);
      if ((int)uVar3 != 1) {
        return uVar3;
      }
      iVar5 = iVar5 + 1;
      puVar1 = puVar4;
    } while (iVar5 < *(int *)(param_1 + 1));
  }
  return 1;
}

// FUN_14f7084b0 @ 14f7084b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_14f7084b0(longlong *param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  
  uVar14 = 1;
  iVar4 = OPENSSL_sk_num(param_2);
  *param_1 = 0;
  iVar6 = 0;
  if ((param_3 >> 8 & 1) == 0) {
    iVar6 = iVar4;
  }
  iVar18 = 0;
  if ((param_3 >> 9 & 1) == 0) {
    iVar18 = iVar4;
  }
  iVar13 = 0;
  if ((param_3 >> 10 & 1) == 0) {
    iVar13 = iVar4;
  }
  if (iVar4 == 1) {
    return 2;
  }
  iVar17 = iVar4 + -2;
  for (iVar19 = iVar17; uVar15 = uVar14, iVar3 = iVar17, -1 < iVar19; iVar19 = iVar19 + -1) {
    uVar7 = OPENSSL_sk_value(param_2,iVar19);
    X509_check_purpose(uVar7,0xffffffff,0);
    lVar8 = policy_cache_set(uVar7);
    if (lVar8 == 0) {
      return 0;
    }
  }
  while ((-1 < iVar3 && ((0 < iVar6 || ((uVar14 & 2) == 0))))) {
    uVar7 = OPENSSL_sk_value(param_2,iVar3);
    uVar5 = X509_get_extension_flags(uVar7);
    if ((uVar5 >> 0xb & 1) != 0) {
      return 0xffffffff;
    }
    lVar8 = policy_cache_set(uVar7);
    if (((uVar14 & 1) != 0) && (uVar14 = uVar15, *(longlong *)(lVar8 + 8) == 0)) {
      uVar15 = 2;
      uVar14 = 2;
    }
    if (0 < iVar6) {
      iVar19 = iVar6 + -1;
      if ((uVar5 & 0x20) != 0) {
        iVar19 = iVar6;
      }
      iVar2 = *(int *)(lVar8 + 0x14);
      iVar6 = iVar19;
      if ((-1 < iVar2) && (iVar2 < iVar19)) {
        iVar6 = iVar2;
      }
    }
    iVar3 = iVar3 + -1;
  }
  uVar15 = uVar14 | 4;
  if (iVar6 != 0) {
    uVar15 = uVar14;
  }
  if ((uVar15 & 1) != 0) {
    plVar9 = (longlong *)CRYPTO_zalloc(0x30,"crypto\\x509v3\\pcy_tree.c");
    if (plVar9 == (longlong *)0x0) {
      uVar20 = 0xa7;
    }
    else {
      lVar8 = CRYPTO_zalloc((longlong)iVar4 << 5,"crypto\\x509v3\\pcy_tree.c",0xb2);
      *plVar9 = lVar8;
      if (lVar8 != 0) {
        *(int *)(plVar9 + 1) = iVar4;
        uVar7 = OBJ_nid2obj(0x2ea);
        lVar10 = policy_data_new(0,uVar7,0);
        if (lVar10 != 0) {
          lVar11 = level_add_node(lVar8,lVar10,0,plVar9);
          if (lVar11 != 0) {
            if (-1 < iVar17) {
              puVar16 = (uint *)(lVar8 + 0x18);
              do {
                uVar7 = OPENSSL_sk_value(param_2,iVar17);
                uVar14 = X509_get_extension_flags(uVar7);
                plVar12 = (longlong *)policy_cache_set(uVar7);
                X509_up_ref(uVar7);
                puVar1 = puVar16 + 8;
                *(undefined8 *)(puVar16 + 2) = uVar7;
                if (*plVar12 == 0) {
                  *puVar1 = *puVar1 | 0x200;
                }
                if (iVar18 == 0) {
                  if (((uVar14 & 0x20) == 0) || (iVar17 == 0)) {
                    *puVar1 = *puVar1 | 0x200;
                  }
                }
                else {
                  iVar6 = iVar18 + -1;
                  if ((uVar14 & 0x20) != 0) {
                    iVar6 = iVar18;
                  }
                  iVar4 = (int)plVar12[2];
                  iVar18 = iVar6;
                  if ((-1 < iVar4) && (iVar4 < iVar6)) {
                    iVar18 = iVar4;
                  }
                }
                if (iVar13 == 0) {
                  *puVar1 = *puVar1 | 0x400;
                }
                else {
                  iVar6 = iVar13 + -1;
                  if ((uVar14 & 0x20) != 0) {
                    iVar6 = iVar13;
                  }
                  iVar4 = (int)plVar12[3];
                  iVar13 = iVar6;
                  if ((-1 < iVar4) && (iVar4 < iVar6)) {
                    iVar13 = iVar4;
                  }
                }
                iVar17 = iVar17 + -1;
                puVar16 = puVar1;
              } while (-1 < iVar17);
            }
            *param_1 = (longlong)plVar9;
            return uVar15;
          }
          policy_data_free(lVar10);
        }
        X509_policy_tree_free(plVar9);
        return 0;
      }
      CRYPTO_free(plVar9,"crypto\\x509v3\\pcy_tree.c",0xb3);
      uVar20 = 0xb4;
    }
    ERR_put_error(0x22,0xac,0x41,"crypto\\x509v3\\pcy_tree.c",uVar20);
    return 0;
  }
  return uVar15;
}

// FUN_14f7087f0 @ 14f7087f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7087f0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint *puVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + -0x18));
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + -0x18),iVar8);
      if (((*(uint *)(param_1 + -8) & 0x400) == 0) && ((*(byte *)*puVar2 & 1) != 0)) {
        uVar6 = *(undefined8 *)((byte *)*puVar2 + 0x18);
        iVar1 = OPENSSL_sk_num(uVar6);
        if (*(int *)(puVar2 + 2) != iVar1) {
          iVar7 = 0;
          iVar1 = OPENSSL_sk_num(uVar6);
          if (0 < iVar1) {
            do {
              uVar3 = OPENSSL_sk_value(uVar6,iVar7);
              lVar4 = level_find_node(param_1,puVar2,uVar3);
              if ((lVar4 == 0) &&
                 (iVar1 = FUN_14f708040(param_1,param_2,uVar3,puVar2,param_3), iVar1 == 0))
              goto LAB_14f708976;
              iVar7 = iVar7 + 1;
              iVar1 = OPENSSL_sk_num(uVar6);
            } while (iVar7 < iVar1);
          }
        }
      }
      else if (*(int *)(puVar2 + 2) == 0) {
        puVar5 = (uint *)policy_data_new(0,*(undefined8 *)((uint *)*puVar2 + 2),
                                         *(uint *)*puVar2 & 0x10);
        if (puVar5 == (uint *)0x0) goto LAB_14f708976;
        uVar6 = *(undefined8 *)(*param_2 + 0x10);
        *puVar5 = *puVar5 | 4;
        *(undefined8 *)(puVar5 + 4) = uVar6;
        lVar4 = level_add_node(param_1,puVar5,puVar2,param_3);
        if (lVar4 == 0) {
          policy_data_free(puVar5);
          goto LAB_14f708976;
        }
      }
      iVar8 = iVar8 + 1;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + -0x18));
    } while (iVar8 < iVar1);
  }
  if ((*(longlong *)(param_1 + -0x10) == 0) ||
     (lVar4 = level_add_node(param_1,*param_2,*(longlong *)(param_1 + -0x10),0), lVar4 != 0)) {
    uVar6 = 1;
  }
  else {
LAB_14f708976:
    uVar6 = 0;
  }
  return uVar6;
}

// FUN_14f708980 @ 14f708980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f708980(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  
  bVar1 = false;
  iVar5 = 0;
  iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + -0x18));
  if (0 < iVar2) {
    do {
      uVar3 = OPENSSL_sk_value(*(undefined8 *)(param_1 + -0x18),iVar5);
      iVar2 = policy_node_match(param_1 + -0x20,uVar3,*(undefined8 *)(param_2 + 8));
      if (iVar2 != 0) {
        lVar4 = level_add_node(param_1,param_2,uVar3,0);
        if (lVar4 == 0) {
          return 0;
        }
        bVar1 = true;
      }
      iVar5 = iVar5 + 1;
      iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + -0x18));
    } while (iVar5 < iVar2);
    if (bVar1) {
      return 1;
    }
  }
  if ((*(longlong *)(param_1 + -0x10) != 0) &&
     (lVar4 = level_add_node(param_1,param_2,*(longlong *)(param_1 + -0x10),0), lVar4 == 0)) {
    return 0;
  }
  return 1;
}

// FUN_14f708a60 @ 14f708a60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f708a60(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_2 + 8));
  if (0 < iVar2) {
    do {
      lVar3 = OPENSSL_sk_value(*(undefined8 *)(param_2 + 8),iVar7);
      bVar1 = false;
      iVar6 = 0;
      iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + -0x18));
      if (iVar2 < 1) {
LAB_14f708b10:
        if ((*(longlong *)(param_1 + -0x10) != 0) &&
           (lVar3 = level_add_node(param_1,lVar3,*(longlong *)(param_1 + -0x10),0), lVar3 == 0)) {
          return 0;
        }
      }
      else {
        do {
          uVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + -0x18),iVar6);
          iVar2 = policy_node_match(param_1 + -0x20,uVar4,*(undefined8 *)(lVar3 + 8));
          if (iVar2 != 0) {
            lVar5 = level_add_node(param_1,lVar3,uVar4,0);
            if (lVar5 == 0) {
              return 0;
            }
            bVar1 = true;
          }
          iVar6 = iVar6 + 1;
          iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + -0x18));
        } while (iVar6 < iVar2);
        if (!bVar1) goto LAB_14f708b10;
      }
      iVar7 = iVar7 + 1;
      iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_2 + 8));
    } while (iVar7 < iVar2);
  }
  return 1;
}

// FUN_14f708b70 @ 14f708b70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f708b70(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint *puVar5;
  int iVar6;
  
  if (((*(uint *)(param_1 + -8) & 0x400) == 0) && ((*(byte *)*param_3 & 1) != 0)) {
    uVar1 = *(undefined8 *)((byte *)*param_3 + 0x18);
    iVar2 = OPENSSL_sk_num(uVar1);
    if (*(int *)(param_3 + 2) != iVar2) {
      iVar6 = 0;
      iVar2 = OPENSSL_sk_num(uVar1);
      if (0 < iVar2) {
        while( true ) {
          uVar3 = OPENSSL_sk_value(uVar1,iVar6);
          lVar4 = level_find_node(param_1,param_3,uVar3);
          if ((lVar4 == 0) &&
             (iVar2 = FUN_14f708040(param_1,param_2,uVar3,param_3,param_4), iVar2 == 0)) break;
          iVar6 = iVar6 + 1;
          iVar2 = OPENSSL_sk_num(uVar1);
          if (iVar2 <= iVar6) {
            return 1;
          }
        }
        return 0;
      }
    }
  }
  else if (*(int *)(param_3 + 2) == 0) {
    puVar5 = (uint *)policy_data_new(0,*(undefined8 *)((uint *)*param_3 + 2),
                                     *(uint *)*param_3 & 0x10);
    if (puVar5 != (uint *)0x0) {
      uVar1 = *(undefined8 *)(*param_2 + 0x10);
      *puVar5 = *puVar5 | 4;
      *(undefined8 *)(puVar5 + 4) = uVar1;
      lVar4 = level_add_node(param_1,puVar5,param_3,param_4);
      if (lVar4 != 0) {
        return 1;
      }
      policy_data_free(puVar5);
    }
    return 0;
  }
  return 1;
}

// FUN_14f708cb0 @ 14f708cb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f708cb0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  if ((*(uint *)(param_2 + 0x18) & 0x400) != 0) {
    iVar3 = OPENSSL_sk_num(uVar2);
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      puVar4 = (undefined8 *)OPENSSL_sk_value(uVar2,iVar3);
      if ((*(byte *)*puVar4 & 3) != 0) {
        *(int *)(puVar4[1] + 0x10) = *(int *)(puVar4[1] + 0x10) + -1;
        CRYPTO_free(puVar4,"crypto\\x509v3\\pcy_tree.c",0x193);
        OPENSSL_sk_delete(uVar2,iVar3);
      }
    }
  }
  do {
    lVar6 = param_2;
    uVar2 = *(undefined8 *)(lVar6 + -0x18);
    iVar3 = OPENSSL_sk_num(uVar2);
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      lVar5 = OPENSSL_sk_value(uVar2,iVar3);
      if (*(int *)(lVar5 + 0x10) == 0) {
        piVar1 = (int *)(*(longlong *)(lVar5 + 8) + 0x10);
        *piVar1 = *piVar1 + -1;
        CRYPTO_free(lVar5,"crypto\\x509v3\\pcy_tree.c",0x1a0);
        OPENSSL_sk_delete(uVar2,iVar3);
      }
    }
    lVar5 = *(longlong *)(lVar6 + -0x10);
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == 0)) {
      if (*(longlong *)(lVar5 + 8) != 0) {
        piVar1 = (int *)(*(longlong *)(lVar5 + 8) + 0x10);
        *piVar1 = *piVar1 + -1;
      }
      CRYPTO_free(*(undefined8 *)(lVar6 + -0x10),"crypto\\x509v3\\pcy_tree.c",0x1a7);
      *(undefined8 *)(lVar6 + -0x10) = 0;
    }
    param_2 = lVar6 + -0x20;
  } while (lVar6 + -0x20 != *param_1);
  return 2 - (uint)(*(longlong *)(lVar6 + -0x10) != 0);
}

