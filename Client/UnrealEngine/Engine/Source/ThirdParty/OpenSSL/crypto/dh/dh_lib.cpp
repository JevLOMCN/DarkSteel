// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 15

// DH_bits @ 14f6ef5d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DH_bits(longlong param_1)

{
  BN_num_bits(*(undefined8 *)(param_1 + 8));
  return;
}

// DH_free @ 14f6ef600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DH_free(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x68);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      if ((*(longlong *)(param_1 + 0x78) != 0) &&
         (pcVar3 = *(code **)(*(longlong *)(param_1 + 0x78) + 0x28), pcVar3 != (code *)0x0)) {
        (*pcVar3)();
      }
      ENGINE_finish(*(undefined8 *)(param_1 + 0x80));
      CRYPTO_free_ex_data(6,param_1,param_1 + 0x70);
      CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0x88));
      BN_clear_free(*(undefined8 *)(param_1 + 8));
      BN_clear_free(*(undefined8 *)(param_1 + 0x10));
      BN_clear_free(*(undefined8 *)(param_1 + 0x40));
      BN_clear_free(*(undefined8 *)(param_1 + 0x48));
      CRYPTO_free(*(undefined8 *)(param_1 + 0x50),"crypto\\dh\\dh_lib.c",0x7b);
      BN_clear_free(*(undefined8 *)(param_1 + 0x60));
      BN_clear_free(*(undefined8 *)(param_1 + 0x20));
      BN_clear_free(*(undefined8 *)(param_1 + 0x28));
      CRYPTO_free(param_1,"crypto\\dh\\dh_lib.c",0x7f);
    }
  }
  return;
}

// DH_get0_key @ 14f6ef700

void DH_get0_key(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x20);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}

// DH_get0_pqg @ 14f6ef730

void DH_get0_pqg(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 8);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x40);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}

// DH_get0_q @ 14f6ef780

undefined8 DH_get0_q(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}

// DH_get_ex_data @ 14f6ef790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DH_get_ex_data(longlong param_1)

{
  CRYPTO_get_ex_data(param_1 + 0x70);
  return;
}

// DH_new @ 14f6ef7c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DH_new(void)

{
  DH_new_method(0);
  return;
}

// DH_new_method @ 14f6ef7e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong DH_new_method(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f6ef7f0;
  lVar3 = CRYPTO_zalloc(0x90,"crypto\\dh\\dh_lib.c",0x2c);
  if (lVar3 == 0) {
    ERR_put_error(5,0x69,0x41,"crypto\\dh\\dh_lib.c",0x2f,uVar7);
    return 0;
  }
  *(undefined4 *)(lVar3 + 0x68) = 1;
  lVar4 = CRYPTO_THREAD_lock_new();
  *(longlong *)(lVar3 + 0x88) = lVar4;
  if (lVar4 == 0) {
    ERR_put_error(5,0x69,0x41,"crypto\\dh\\dh_lib.c",0x36,uVar7);
    CRYPTO_free(lVar3,"crypto\\dh\\dh_lib.c",0x37);
    return 0;
  }
  lVar4 = DH_get_default_method();
  *(longlong *)(lVar3 + 0x78) = lVar4;
  *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(lVar4 + 0x30);
  if (param_1 == 0) {
    uVar7 = ENGINE_get_default_DH();
    *(undefined8 *)(lVar3 + 0x80) = uVar7;
LAB_14f6ef900:
    if (*(longlong *)(lVar3 + 0x80) != 0) {
      lVar4 = ENGINE_get_DH();
      *(longlong *)(lVar3 + 0x78) = lVar4;
      if (lVar4 == 0) {
        uVar6 = 0x49;
        goto LAB_14f6ef8bc;
      }
    }
    *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(*(longlong *)(lVar3 + 0x78) + 0x30);
    iVar2 = CRYPTO_new_ex_data(6,lVar3,lVar3 + 0x70);
    if (iVar2 == 0) goto LAB_14f6ef8d6;
    pcVar1 = *(code **)(*(longlong *)(lVar3 + 0x78) + 0x20);
    if (pcVar1 == (code *)0x0) {
      return lVar3;
    }
    iVar2 = (*pcVar1)(lVar3);
    if (iVar2 != 0) {
      return lVar3;
    }
    uVar6 = 0x55;
    uVar5 = 0x46;
  }
  else {
    iVar2 = ENGINE_init(param_1);
    if (iVar2 != 0) {
      *(longlong *)(lVar3 + 0x80) = param_1;
      goto LAB_14f6ef900;
    }
    uVar6 = 0x40;
LAB_14f6ef8bc:
    uVar5 = 0x26;
  }
  ERR_put_error(5,0x69,uVar5,"crypto\\dh\\dh_lib.c",uVar6);
LAB_14f6ef8d6:
  DH_free(lVar3);
  return 0;
}

// DH_security_bits @ 14f6ef980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DH_security_bits(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    iVar1 = -1;
    if (*(int *)(param_1 + 0x18) != 0) {
      iVar1 = *(int *)(param_1 + 0x18);
    }
  }
  else {
    iVar1 = BN_num_bits();
  }
  uVar2 = BN_num_bits(*(undefined8 *)(param_1 + 8));
  BN_security_bits(uVar2,iVar1);
  return;
}

// DH_set0_key @ 14f6ef9e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DH_set0_key(longlong param_1,longlong param_2,longlong param_3)

{
  if (param_2 != 0) {
    BN_clear_free(*(undefined8 *)(param_1 + 0x20));
    *(longlong *)(param_1 + 0x20) = param_2;
  }
  if (param_3 != 0) {
    BN_clear_free(*(undefined8 *)(param_1 + 0x28));
    *(longlong *)(param_1 + 0x28) = param_3;
  }
  return 1;
}

// DH_set0_pqg @ 14f6efa40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DH_set0_pqg(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (((*(longlong *)(param_1 + 8) == 0) && (param_2 == 0)) ||
     ((*(longlong *)(param_1 + 0x10) == 0 && (param_4 == 0)))) {
    uVar2 = 0;
  }
  else {
    if (param_2 != 0) {
      BN_free();
      *(longlong *)(param_1 + 8) = param_2;
    }
    if (param_3 != 0) {
      BN_free(*(undefined8 *)(param_1 + 0x40));
      *(longlong *)(param_1 + 0x40) = param_3;
    }
    if (param_4 != 0) {
      BN_free(*(undefined8 *)(param_1 + 0x10));
      *(longlong *)(param_1 + 0x10) = param_4;
    }
    if (param_3 != 0) {
      uVar1 = BN_num_bits(param_3);
      *(undefined4 *)(param_1 + 0x18) = uVar1;
    }
    uVar2 = 1;
  }
  return uVar2;
}

// DH_set_ex_data @ 14f6efaf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DH_set_ex_data(longlong param_1)

{
  CRYPTO_set_ex_data(param_1 + 0x70);
  return;
}

// DH_set_method @ 14f6efb30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DH_set_method(longlong param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x78) + 0x28);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  ENGINE_finish(*(undefined8 *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(longlong *)(param_1 + 0x78) = param_2;
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_1);
  }
  return 1;
}

// DH_size @ 14f6efba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int DH_size(longlong param_1)

{
  int iVar1;
  
  iVar1 = BN_num_bits(*(undefined8 *)(param_1 + 8));
  return (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
}

// DH_up_ref @ 14f6efbe0

bool DH_up_ref(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x68);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}

