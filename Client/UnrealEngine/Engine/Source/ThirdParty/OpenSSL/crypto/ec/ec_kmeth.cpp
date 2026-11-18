// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 6

// ECDH_compute_key @ 14f755eb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ECDH_compute_key(void *param_1,ulonglong param_2,undefined8 param_3,longlong *param_4,
                          code *param_5)

{
  int iVar1;
  void *pvVar2;
  ulonglong local_res10;
  void *local_res20;
  ulonglong local_18 [2];
  
  local_18[1] = 0x14f755ec0;
  local_res20 = (void *)0x0;
  local_res10 = param_2;
  if (*(code **)(*param_4 + 0x48) == (code *)0x0) {
    ERR_put_error(0x10,0xf6,0x98,"crypto\\ec\\ec_kmeth.c",0x87);
  }
  else {
    if (0x7fffffff < param_2) {
      ERR_put_error(0x10,0xf6,0xa1,"crypto\\ec\\ec_kmeth.c",0x8b);
      return 0;
    }
    iVar1 = (**(code **)(*param_4 + 0x48))(&local_res20,local_18);
    pvVar2 = local_res20;
    if (iVar1 != 0) {
      if (param_5 == (code *)0x0) {
        if (local_18[0] < local_res10) {
          local_res10 = local_18[0];
        }
        memcpy(param_1,local_res20,local_res10);
      }
      else {
        (*param_5)(local_res20,local_18[0],param_1,&local_res10);
        pvVar2 = local_res20;
      }
      CRYPTO_clear_free(pvVar2,local_18[0],"crypto\\ec\\ec_kmeth.c",0x97);
      return local_res10 & 0xffffffff;
    }
  }
  return 0;
}

// EC_KEY_METHOD_free @ 14f755fe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_KEY_METHOD_free(longlong param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    CRYPTO_free(param_1,"crypto\\ec\\ec_kmeth.c",0xaa);
    return;
  }
  return;
}

// EC_KEY_METHOD_new @ 14f756110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_KEY_METHOD_new(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)CRYPTO_zalloc(0x78,"crypto\\ec\\ec_kmeth.c",0x9d);
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = param_1[1];
    *puVar2 = *param_1;
    puVar2[1] = uVar1;
    uVar1 = param_1[3];
    puVar2[2] = param_1[2];
    puVar2[3] = uVar1;
    uVar1 = param_1[5];
    puVar2[4] = param_1[4];
    puVar2[5] = uVar1;
    uVar1 = param_1[7];
    puVar2[6] = param_1[6];
    puVar2[7] = uVar1;
    uVar1 = param_1[9];
    puVar2[8] = param_1[8];
    puVar2[9] = uVar1;
    uVar1 = param_1[0xb];
    puVar2[10] = param_1[10];
    puVar2[0xb] = uVar1;
    uVar1 = param_1[0xd];
    puVar2[0xc] = param_1[0xc];
    puVar2[0xd] = uVar1;
    puVar2[0xe] = param_1[0xe];
  }
  *(uint *)(puVar2 + 1) = *(uint *)(puVar2 + 1) | 1;
  return;
}

// EC_KEY_OpenSSL @ 14f756220

undefined ** EC_KEY_OpenSSL(void)

{
  return &PTR_s_OpenSSL_EC_KEY_method_1534c16f0;
}

// EC_KEY_new_method @ 14f756250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * EC_KEY_new_method(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f756260;
  plVar2 = (longlong *)CRYPTO_zalloc(0x50,"crypto\\ec\\ec_kmeth.c",0x4b);
  if (plVar2 == (longlong *)0x0) {
    ERR_put_error(0x10,0xf5,0x41,"crypto\\ec\\ec_kmeth.c",0x4e,uVar6);
    return (longlong *)0x0;
  }
  *(undefined4 *)(plVar2 + 7) = 1;
  lVar3 = CRYPTO_THREAD_lock_new();
  plVar2[9] = lVar3;
  if (lVar3 == 0) {
    ERR_put_error(0x10,0xf5,0x41,"crypto\\ec\\ec_kmeth.c",0x55,uVar6);
    CRYPTO_free(plVar2,"crypto\\ec\\ec_kmeth.c",0x56);
    return (longlong *)0x0;
  }
  *plVar2 = (longlong)PTR_PTR_154df9750;
  if (param_1 == 0) {
    lVar3 = ENGINE_get_default_EC();
    plVar2[1] = lVar3;
LAB_14f756368:
    if (plVar2[1] != 0) {
      lVar3 = ENGINE_get_EC();
      *plVar2 = lVar3;
      if (lVar3 == 0) {
        uVar5 = 0x67;
        goto LAB_14f756328;
      }
    }
    *(undefined4 *)(plVar2 + 2) = 1;
    *(undefined4 *)((longlong)plVar2 + 0x34) = 4;
    iVar1 = CRYPTO_new_ex_data(8,plVar2,plVar2 + 8);
    if (iVar1 == 0) goto LAB_14f756344;
    if (*(code **)(*plVar2 + 0x10) == (code *)0x0) {
      return plVar2;
    }
    iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (iVar1 != 0) {
      return plVar2;
    }
    uVar5 = 0x75;
    uVar4 = 0x46;
  }
  else {
    iVar1 = ENGINE_init(param_1);
    if (iVar1 != 0) {
      plVar2[1] = param_1;
      goto LAB_14f756368;
    }
    uVar5 = 0x5e;
LAB_14f756328:
    uVar4 = 0x26;
  }
  ERR_put_error(0x10,0xf5,uVar4,"crypto\\ec\\ec_kmeth.c",uVar5);
LAB_14f756344:
  EC_KEY_free(plVar2);
  return (longlong *)0x0;
}

// EC_KEY_set_method @ 14f756410

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_KEY_set_method(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x18) != (code *)0x0) {
    (**(code **)(*param_1 + 0x18))();
  }
  ENGINE_finish(param_1[1]);
  param_1[1] = 0;
  *param_1 = param_2;
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f756462. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2 + 0x10))(param_1);
    return uVar1;
  }
  return 1;
}

