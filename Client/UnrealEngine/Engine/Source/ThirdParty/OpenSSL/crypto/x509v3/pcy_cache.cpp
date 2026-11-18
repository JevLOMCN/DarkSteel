// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 15

// FUN_14f71d000 @ 14f71d000

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f71d000(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  plVar1 = *(longlong **)(param_1 + 0xf0);
  iVar7 = 0;
  lVar5 = 0;
  iVar3 = OPENSSL_sk_num(param_2);
  iVar2 = 0;
  if (0 < iVar3) {
    lVar5 = OPENSSL_sk_new(FUN_14f71d500);
    plVar1[1] = lVar5;
    if (lVar5 == 0) {
      uVar9 = 0x26;
LAB_14f71d072:
      ERR_put_error(0x22,0xa9,0x41,"crypto\\x509v3\\pcy_cache.c",uVar9);
      goto LAB_14f71d11b;
    }
    iVar8 = 0;
    if (0 < iVar3) {
      do {
        uVar6 = OPENSSL_sk_value(param_2,iVar8);
        lVar5 = policy_data_new(uVar6,0,param_3);
        if (lVar5 == 0) {
          uVar9 = 0x2d;
          goto LAB_14f71d072;
        }
        iVar4 = OBJ_obj2nid(*(undefined8 *)(lVar5 + 8));
        if (iVar4 == 0x2ea) {
          if (*plVar1 != 0) {
LAB_14f71d191:
            *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x800;
            iVar2 = -1;
            goto LAB_14f71d113;
          }
          *plVar1 = lVar5;
        }
        else {
          iVar4 = OPENSSL_sk_find(plVar1[1],lVar5);
          if (-1 < iVar4) goto LAB_14f71d191;
          iVar4 = OPENSSL_sk_push(plVar1[1],lVar5);
          if (iVar4 == 0) {
            ERR_put_error(0x22,0xa9,0x41,"crypto\\x509v3\\pcy_cache.c",0x3d);
            goto LAB_14f71d113;
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar3);
    }
    lVar5 = 0;
    iVar2 = 1;
  }
LAB_14f71d113:
  iVar7 = iVar2;
  policy_data_free(lVar5);
LAB_14f71d11b:
  OPENSSL_sk_pop_free(param_2,POLICYINFO_free);
  if (iVar7 < 1) {
    OPENSSL_sk_pop_free(plVar1[1],policy_data_free);
    plVar1[1] = 0;
  }
  return iVar7;
}

// policy_cache_find_data @ 14f71d1c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void policy_cache_find_data(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f71d1cc;
  local_20 = param_2;
  uVar1 = OPENSSL_sk_find(*(undefined8 *)(param_1 + 8),local_28);
  OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),uVar1);
  return;
}

// policy_cache_free @ 14f71d200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void policy_cache_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    policy_data_free(*param_1);
    OPENSSL_sk_pop_free(param_1[1],policy_data_free);
    CRYPTO_free(param_1,"crypto\\x509v3\\pcy_cache.c",0xb8);
  }
  return;
}

// FUN_14f71d250 @ 14f71d250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f71d250(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int local_res8 [2];
  longlong lVar7;
  
  lVar7 = 0;
  lVar6 = 0;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    return 1;
  }
  puVar2 = (undefined8 *)CRYPTO_malloc(0x20,"crypto\\x509v3\\pcy_cache.c");
  if (puVar2 == (undefined8 *)0x0) {
    ERR_put_error(0x22,0xaa,0x41,"crypto\\x509v3\\pcy_cache.c",0x5e);
    return 0;
  }
  *(undefined4 *)((longlong)puVar2 + 0x14) = 0xffffffff;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 2) = 0xffffffff;
  *(undefined4 *)(puVar2 + 3) = 0xffffffff;
  *(undefined8 **)(param_1 + 0xf0) = puVar2;
  plVar3 = (longlong *)X509_get_ext_d2i(param_1,0x191,local_res8,0);
  lVar4 = lVar6;
  if (plVar3 == (longlong *)0x0) {
    lVar4 = lVar7;
    if (local_res8[0] == -1) {
LAB_14f71d35f:
      lVar4 = X509_get_ext_d2i(param_1,0x59,local_res8);
      if (lVar4 == 0) {
        lVar4 = lVar7;
        if (local_res8[0] == -1) {
          return 1;
        }
      }
      else {
        uVar5 = FUN_14f71d000(param_1,lVar4,local_res8[0]);
        local_res8[0] = (int)uVar5;
        if (local_res8[0] < 1) {
          return uVar5;
        }
        lVar4 = X509_get_ext_d2i(param_1,0x2eb,local_res8,0);
        if (lVar4 == 0) {
          lVar4 = lVar7;
          if (local_res8[0] == -1) {
LAB_14f71d3da:
            lVar4 = X509_get_ext_d2i(param_1,0x2ec,local_res8,0);
            if (lVar4 == 0) {
              if (local_res8[0] == -1) goto LAB_14f71d419;
            }
            else {
              iVar1 = FUN_14f71d4b0(puVar2 + 2,lVar4);
              if (iVar1 != 0) goto LAB_14f71d419;
            }
          }
        }
        else {
          local_res8[0] = policy_cache_set_mapping(param_1,lVar4);
          lVar4 = lVar6;
          if (0 < local_res8[0]) goto LAB_14f71d3da;
        }
      }
    }
  }
  else if ((((*plVar3 != 0) || (plVar3[1] != 0)) &&
           (iVar1 = FUN_14f71d4b0((longlong)puVar2 + 0x14), iVar1 != 0)) &&
          (iVar1 = FUN_14f71d4b0(puVar2 + 3,plVar3[1]), iVar1 != 0)) goto LAB_14f71d35f;
  *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x800;
LAB_14f71d419:
  POLICY_CONSTRAINTS_free(plVar3);
  ASN1_INTEGER_free(lVar4);
  return 1;
}

// policy_cache_set @ 14f71d450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 policy_cache_set(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x140));
    FUN_14f71d250(param_1);
    CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x140));
    return *(undefined8 *)(param_1 + 0xf0);
  }
  return *(undefined8 *)(param_1 + 0xf0);
}

// FUN_14f71d4b0 @ 14f71d4b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f71d4b0(undefined4 *param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    if (*(int *)(param_2 + 4) == 0x102) {
      return 0;
    }
    uVar1 = ASN1_INTEGER_get(param_2);
    *param_1 = uVar1;
  }
  return 1;
}

// FUN_14f71d500 @ 14f71d500

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71d500(longlong *param_1,longlong *param_2)

{
  OBJ_cmp(*(undefined8 *)(*param_1 + 8),*(undefined8 *)(*param_2 + 8));
  return;
}

// FUN_14f71d530 @ 14f71d530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71d530(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f71d550 @ 14f71d550

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71d550(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f71d570 @ 14f71d570

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71d570(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f71d590 @ 14f71d590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71d590(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f71d5b0 @ 14f71d5b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71d5b0(void)

{
  OPENSSL_sk_new();
  return;
}

// FUN_14f71d5d0 @ 14f71d5d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71d5d0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f71d5f0 @ 14f71d5f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71d5f0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f71d610 @ 14f71d610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71d610(void)

{
  OPENSSL_sk_value();
  return;
}

