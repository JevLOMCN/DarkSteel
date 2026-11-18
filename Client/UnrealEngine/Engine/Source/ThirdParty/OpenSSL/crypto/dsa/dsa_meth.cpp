// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 12

// DSA_meth_dup @ 14f764780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * DSA_meth_dup(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f764790;
  plVar3 = (longlong *)CRYPTO_malloc(0x60,"crypto\\dsa\\dsa_meth.c",0x32);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = param_1[1];
    *plVar3 = *param_1;
    plVar3[1] = lVar4;
    lVar4 = param_1[3];
    plVar3[2] = param_1[2];
    plVar3[3] = lVar4;
    lVar4 = param_1[5];
    plVar3[4] = param_1[4];
    plVar3[5] = lVar4;
    lVar4 = param_1[7];
    plVar3[6] = param_1[6];
    plVar3[7] = lVar4;
    uVar1 = *(undefined4 *)((longlong)param_1 + 0x44);
    lVar4 = param_1[9];
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x4c);
    *(int *)(plVar3 + 8) = (int)param_1[8];
    *(undefined4 *)((longlong)plVar3 + 0x44) = uVar1;
    *(int *)(plVar3 + 9) = (int)lVar4;
    *(undefined4 *)((longlong)plVar3 + 0x4c) = uVar2;
    uVar1 = *(undefined4 *)((longlong)param_1 + 0x54);
    lVar4 = param_1[0xb];
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x5c);
    *(int *)(plVar3 + 10) = (int)param_1[10];
    *(undefined4 *)((longlong)plVar3 + 0x54) = uVar1;
    *(int *)(plVar3 + 0xb) = (int)lVar4;
    *(undefined4 *)((longlong)plVar3 + 0x5c) = uVar2;
    lVar4 = CRYPTO_strdup(*param_1,"crypto\\dsa\\dsa_meth.c",0x37);
    *plVar3 = lVar4;
    if (lVar4 != 0) {
      return plVar3;
    }
    CRYPTO_free(plVar3,"crypto\\dsa\\dsa_meth.c",0x3b);
  }
  ERR_put_error(10,0x7f,0x41,"crypto\\dsa\\dsa_meth.c",0x3e,uVar5);
  return (longlong *)0x0;
}

// DSA_meth_free @ 14f764860

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DSA_meth_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CRYPTO_free(*param_1,"crypto\\dsa\\dsa_meth.c",0x2b);
    CRYPTO_free(param_1,"crypto\\dsa\\dsa_meth.c",0x2c);
  }
  return;
}

// DSA_meth_get_bn_mod_exp @ 14f7648d0

undefined8 DSA_meth_get_bn_mod_exp(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}

// DSA_meth_get_mod_exp @ 14f764920

undefined8 DSA_meth_get_mod_exp(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}

// DSA_meth_get_verify @ 14f764960

undefined8 DSA_meth_get_verify(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}

// DSA_meth_new @ 14f764970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * DSA_meth_new(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f764985;
  plVar1 = (longlong *)CRYPTO_zalloc(0x60,"crypto\\dsa\\dsa_meth.c",0x18);
  if (plVar1 != (longlong *)0x0) {
    *(undefined4 *)(plVar1 + 8) = param_2;
    lVar2 = CRYPTO_strdup(param_1,"crypto\\dsa\\dsa_meth.c",0x1d);
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      return plVar1;
    }
    CRYPTO_free(plVar1,"crypto\\dsa\\dsa_meth.c",0x21);
  }
  ERR_put_error(10,0x80,0x41,"crypto\\dsa\\dsa_meth.c",0x24,uVar3);
  return (longlong *)0x0;
}

// DSA_meth_set1_name @ 14f764a40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DSA_meth_set1_name(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f764a50;
  lVar1 = CRYPTO_strdup(param_2,"crypto\\dsa\\dsa_meth.c",0x49);
  if (lVar1 == 0) {
    ERR_put_error(10,0x81,0x41,"crypto\\dsa\\dsa_meth.c",0x4c,uVar2);
    return 0;
  }
  CRYPTO_free(*param_1,"crypto\\dsa\\dsa_meth.c",0x50);
  *param_1 = lVar1;
  return 1;
}

// DSA_meth_set_bn_mod_exp @ 14f764ae0

undefined8 DSA_meth_set_bn_mod_exp(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return 1;
}

// DSA_meth_set_finish @ 14f764af0

undefined8 DSA_meth_set_finish(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return 1;
}

// DSA_meth_set_mod_exp @ 14f764b30

undefined8 DSA_meth_set_mod_exp(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return 1;
}

// DSA_meth_set_sign @ 14f764b50

undefined8 DSA_meth_set_sign(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return 1;
}

// DSA_meth_set_verify @ 14f764b70

undefined8 DSA_meth_set_verify(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return 1;
}

