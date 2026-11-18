// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 14

// BIO_get_new_index @ 14f6b6a50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int BIO_get_new_index(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = CRYPTO_THREAD_run_once(&DAT_1553e29d8,FUN_14f6b6e40);
  iVar1 = DAT_154df8678;
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = DAT_1553e29dc;
  }
  if (iVar3 == 0) {
    ERR_put_error(0x20,0x66,0x41,"crypto\\bio\\bio_meth.c",0x1c);
    return -1;
  }
  LOCK();
  DAT_154df8678 = DAT_154df8678 + 1;
  UNLOCK();
  return iVar1 + 1;
}

// BIO_meth_free @ 14f6b6ac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BIO_meth_free(longlong param_1)

{
  if (param_1 != 0) {
    CRYPTO_free(*(undefined8 *)(param_1 + 8),"crypto\\bio\\bio_meth.c",0x35);
    CRYPTO_free(param_1,"crypto\\bio\\bio_meth.c",0x36);
  }
  return;
}

// BIO_meth_new @ 14f6b6bb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * BIO_meth_new(undefined4 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6b6bc5;
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x60,"crypto\\bio\\bio_meth.c",0x26);
  if (puVar1 != (undefined4 *)0x0) {
    lVar2 = CRYPTO_strdup(param_2,"crypto\\bio\\bio_meth.c",0x29);
    *(longlong *)(puVar1 + 2) = lVar2;
    if (lVar2 != 0) {
      *puVar1 = param_1;
      return puVar1;
    }
  }
  CRYPTO_free(puVar1,"crypto\\bio\\bio_meth.c",0x2a);
  ERR_put_error(0x20,0x92,0x41,"crypto\\bio\\bio_meth.c",0x2b,uVar3);
  return (undefined4 *)0x0;
}

// BIO_meth_set_create @ 14f6b6c80

undefined8 BIO_meth_set_create(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return 1;
}

// BIO_meth_set_ctrl @ 14f6b6c90

undefined8 BIO_meth_set_ctrl(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return 1;
}

// BIO_meth_set_destroy @ 14f6b6ca0

undefined8 BIO_meth_set_destroy(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return 1;
}

// BIO_meth_set_read @ 14f6b6cd0

undefined8 BIO_meth_set_read(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(code **)(param_1 + 0x20) = bread_conv;
  return 1;
}

// BIO_meth_set_read_ex @ 14f6b6cf0

undefined8 BIO_meth_set_read_ex(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return 1;
}

// BIO_meth_set_write @ 14f6b6d10

undefined8 BIO_meth_set_write(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(code **)(param_1 + 0x10) = bwrite_conv;
  return 1;
}

// BIO_meth_set_write_ex @ 14f6b6d30

undefined8 BIO_meth_set_write_ex(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return 1;
}

// bread_conv @ 14f6b6d70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 bread_conv(longlong *param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

{
  undefined8 uVar1;
  
  if (0x7fffffff < param_3) {
    param_3 = 0x7fffffff;
  }
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3);
  if ((int)uVar1 < 1) {
    *param_4 = 0;
    return uVar1;
  }
  *param_4 = (longlong)(int)uVar1;
  return 1;
}

// bwrite_conv @ 14f6b6dc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 bwrite_conv(longlong *param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

{
  undefined8 uVar1;
  
  if (0x7fffffff < param_3) {
    param_3 = 0x7fffffff;
  }
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
  if ((int)uVar1 < 1) {
    *param_4 = 0;
    return uVar1;
  }
  *param_4 = (longlong)(int)uVar1;
  return 1;
}

// FUN_14f6b6e10 @ 14f6b6e10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6b6e10(void)

{
  bio_type_lock = CRYPTO_THREAD_lock_new();
  return bio_type_lock != 0;
}

// FUN_14f6b6e40 @ 14f6b6e40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b6e40(void)

{
  bio_type_lock = CRYPTO_THREAD_lock_new();
  DAT_1553e29dc = (uint)(bio_type_lock != 0);
  return;
}

