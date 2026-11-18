// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 16

// DSA_bits @ 14f717140

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DSA_bits(longlong param_1)

{
  BN_num_bits(*(undefined8 *)(param_1 + 8));
  return;
}

// DSA_dup_DH @ 14f717170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong DSA_dup_DH(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar2 = 0;
  lVar3 = 0;
  lVar5 = 0;
  lVar4 = 0;
  lVar6 = 0;
  lVar8 = 0;
  lVar7 = 0;
  lVar9 = 0;
  lVar10 = lVar7;
  if ((param_1 == 0) || (lVar2 = DH_new(), lVar2 == 0)) goto LAB_14f717287;
  lVar10 = lVar9;
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar10 = lVar7;
    if ((*(longlong *)(param_1 + 0x18) != 0) || (*(longlong *)(param_1 + 0x10) != 0))
    goto LAB_14f717287;
  }
  else {
    lVar3 = 0;
    lVar4 = 0;
    lVar5 = 0;
    lVar6 = lVar8;
    if ((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x10) == 0))
    goto LAB_14f717287;
    lVar3 = BN_dup();
    lVar4 = BN_dup(*(undefined8 *)(param_1 + 0x18));
    lVar5 = BN_dup(*(undefined8 *)(param_1 + 0x10));
    if ((lVar3 == 0) ||
       (((lVar4 == 0 || (lVar5 == 0)) || (iVar1 = DH_set0_pqg(lVar2,lVar3,lVar5,lVar4), iVar1 == 0))
       )) goto LAB_14f717287;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar3 = 0;
    lVar5 = 0;
    lVar4 = 0;
    lVar6 = lVar8;
    lVar10 = lVar9;
    if (*(longlong *)(param_1 + 0x28) == 0) {
      return lVar2;
    }
  }
  else {
    lVar6 = BN_dup();
    lVar3 = 0;
    lVar5 = 0;
    lVar4 = 0;
    lVar10 = lVar9;
    if ((lVar6 != 0) &&
       ((*(longlong *)(param_1 + 0x28) == 0 || (lVar7 = BN_dup(), lVar10 = lVar7, lVar7 != 0)))) {
      lVar3 = 0;
      lVar5 = 0;
      lVar4 = 0;
      iVar1 = DH_set0_key(lVar2,lVar6,lVar7);
      lVar10 = lVar7;
      if (iVar1 != 0) {
        return lVar2;
      }
    }
  }
LAB_14f717287:
  BN_free(lVar3);
  BN_free(lVar4);
  BN_free(lVar5);
  BN_free(lVar6);
  BN_free(lVar10);
  DH_free(lVar2);
  return 0;
}

// DSA_free @ 14f7172f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DSA_free(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x40);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      if ((*(longlong *)(param_1 + 0x50) != 0) &&
         (pcVar3 = *(code **)(*(longlong *)(param_1 + 0x50) + 0x38), pcVar3 != (code *)0x0)) {
        (*pcVar3)();
      }
      ENGINE_finish(*(undefined8 *)(param_1 + 0x58));
      CRYPTO_free_ex_data(7,param_1,param_1 + 0x48);
      CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0x60));
      BN_clear_free(*(undefined8 *)(param_1 + 8));
      BN_clear_free(*(undefined8 *)(param_1 + 0x10));
      BN_clear_free(*(undefined8 *)(param_1 + 0x18));
      BN_clear_free(*(undefined8 *)(param_1 + 0x20));
      BN_clear_free(*(undefined8 *)(param_1 + 0x28));
      CRYPTO_free(param_1,"crypto\\dsa\\dsa_lib.c",0x83);
    }
  }
  return;
}

// DSA_get0_engine @ 14f7173a0

undefined8 DSA_get0_engine(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}

// DSA_get0_key @ 14f7173c0

void DSA_get0_key(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x20);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}

// DSA_get0_pqg @ 14f7173f0

void DSA_get0_pqg(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 8);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x10);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_1 + 0x18);
  }
  return;
}

// DSA_get_ex_data @ 14f717450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DSA_get_ex_data(longlong param_1)

{
  CRYPTO_get_ex_data(param_1 + 0x48);
  return;
}

// DSA_new @ 14f717480

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DSA_new(void)

{
  DSA_new_method(0);
  return;
}

// DSA_new_method @ 14f7174a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong DSA_new_method(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f7174b0;
  lVar3 = CRYPTO_zalloc(0x68,"crypto\\dsa\\dsa_lib.c",0x33);
  if (lVar3 == 0) {
    ERR_put_error(10,0x67,0x41,"crypto\\dsa\\dsa_lib.c",0x36,uVar7);
    return 0;
  }
  *(undefined4 *)(lVar3 + 0x40) = 1;
  lVar4 = CRYPTO_THREAD_lock_new();
  *(longlong *)(lVar3 + 0x60) = lVar4;
  if (lVar4 == 0) {
    ERR_put_error(10,0x67,0x41,"crypto\\dsa\\dsa_lib.c",0x3d,uVar7);
    CRYPTO_free(lVar3,"crypto\\dsa\\dsa_lib.c",0x3e);
    return 0;
  }
  lVar4 = DSA_get_default_method();
  *(longlong *)(lVar3 + 0x50) = lVar4;
  *(uint *)(lVar3 + 0x30) = *(uint *)(lVar4 + 0x40) & 0xfffffbff;
  if (param_1 == 0) {
    uVar7 = ENGINE_get_default_DSA();
    *(undefined8 *)(lVar3 + 0x58) = uVar7;
LAB_14f7175bb:
    if (*(longlong *)(lVar3 + 0x58) != 0) {
      lVar4 = ENGINE_get_DSA();
      *(longlong *)(lVar3 + 0x50) = lVar4;
      if (lVar4 == 0) {
        uVar6 = 0x50;
        goto LAB_14f71757d;
      }
    }
    *(uint *)(lVar3 + 0x30) = *(uint *)(*(longlong *)(lVar3 + 0x50) + 0x40) & 0xfffffbff;
    iVar2 = CRYPTO_new_ex_data(7,lVar3,lVar3 + 0x48);
    if (iVar2 == 0) goto LAB_14f717597;
    pcVar1 = *(code **)(*(longlong *)(lVar3 + 0x50) + 0x30);
    if (pcVar1 == (code *)0x0) {
      return lVar3;
    }
    iVar2 = (*pcVar1)(lVar3);
    if (iVar2 != 0) {
      return lVar3;
    }
    uVar6 = 0x5c;
    uVar5 = 0x46;
  }
  else {
    iVar2 = ENGINE_init(param_1);
    if (iVar2 != 0) {
      *(longlong *)(lVar3 + 0x58) = param_1;
      goto LAB_14f7175bb;
    }
    uVar6 = 0x47;
LAB_14f71757d:
    uVar5 = 0x26;
  }
  ERR_put_error(10,0x67,uVar5,"crypto\\dsa\\dsa_lib.c",uVar6);
LAB_14f717597:
  DSA_free(lVar3);
  return 0;
}

// DSA_security_bits @ 14f717640

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DSA_security_bits(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    uVar1 = BN_num_bits();
    uVar2 = BN_num_bits(*(undefined8 *)(param_1 + 8));
    uVar3 = BN_security_bits(uVar2,uVar1);
    return uVar3;
  }
  return 0xffffffff;
}

// DSA_set0_key @ 14f7176a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DSA_set0_key(longlong param_1,longlong param_2,longlong param_3)

{
  if (*(longlong *)(param_1 + 0x20) == 0) {
    if (param_2 == 0) {
      return 0;
    }
  }
  else if (param_2 == 0) goto LAB_14f7176ef;
  BN_free();
  *(longlong *)(param_1 + 0x20) = param_2;
LAB_14f7176ef:
  if (param_3 != 0) {
    BN_free(*(undefined8 *)(param_1 + 0x28));
    *(longlong *)(param_1 + 0x28) = param_3;
  }
  return 1;
}

// DSA_set0_pqg @ 14f717720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DSA_set0_pqg(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  
  if ((((*(longlong *)(param_1 + 8) == 0) && (param_2 == 0)) ||
      ((*(longlong *)(param_1 + 0x10) == 0 && (param_3 == 0)))) ||
     ((*(longlong *)(param_1 + 0x18) == 0 && (param_4 == 0)))) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 0) {
      BN_free();
      *(longlong *)(param_1 + 8) = param_2;
    }
    if (param_3 != 0) {
      BN_free(*(undefined8 *)(param_1 + 0x10));
      *(longlong *)(param_1 + 0x10) = param_3;
    }
    if (param_4 != 0) {
      BN_free(*(undefined8 *)(param_1 + 0x18));
      *(longlong *)(param_1 + 0x18) = param_4;
    }
    uVar1 = 1;
  }
  return uVar1;
}

// DSA_set_ex_data @ 14f7177d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DSA_set_ex_data(longlong param_1)

{
  CRYPTO_set_ex_data(param_1 + 0x48);
  return;
}

// DSA_set_method @ 14f717800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DSA_set_method(longlong param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x50) + 0x38);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  ENGINE_finish(*(undefined8 *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(longlong *)(param_1 + 0x50) = param_2;
  if (*(code **)(param_2 + 0x30) != (code *)0x0) {
    (**(code **)(param_2 + 0x30))(param_1);
  }
  return 1;
}

// DSA_size @ 14f717870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DSA_size(longlong param_1)

{
  int iVar1;
  undefined1 local_res8 [32];
  int local_28 [2];
  undefined1 *local_20;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f71787a;
  iVar1 = BN_num_bits(*(undefined8 *)(param_1 + 0x10));
  local_28[1] = 2;
  local_res8[0] = 0xff;
  local_28[0] = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  local_20 = local_res8;
  iVar1 = i2d_ASN1_INTEGER(local_28,0);
  ASN1_object_size(1,iVar1 * 2,0x10);
  return;
}

// DSA_up_ref @ 14f7178f0

bool DSA_up_ref(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x40);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}

