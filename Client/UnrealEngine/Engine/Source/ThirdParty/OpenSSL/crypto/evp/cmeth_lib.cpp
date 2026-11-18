// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// EVP_CIPHER_meth_dup @ 14f7640f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_CIPHER_meth_dup(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 1);
  uVar2 = *(undefined4 *)((longlong)param_1 + 4);
  uVar3 = *(undefined4 *)param_1;
  puVar5 = (undefined8 *)CRYPTO_zalloc(0x58,"crypto\\evp\\cmeth_lib.c",0x12);
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined4 *)puVar5 = uVar3;
    *(undefined4 *)((longlong)puVar5 + 4) = uVar2;
    *(undefined4 *)(puVar5 + 1) = uVar1;
    uVar4 = param_1[1];
    *puVar5 = *param_1;
    puVar5[1] = uVar4;
    uVar4 = param_1[3];
    puVar5[2] = param_1[2];
    puVar5[3] = uVar4;
    uVar4 = param_1[5];
    puVar5[4] = param_1[4];
    puVar5[5] = uVar4;
    uVar4 = param_1[7];
    puVar5[6] = param_1[6];
    puVar5[7] = uVar4;
    uVar4 = param_1[9];
    puVar5[8] = param_1[8];
    puVar5[9] = uVar4;
    puVar5[10] = param_1[10];
  }
  return;
}

// EVP_CIPHER_meth_free @ 14f764190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_CIPHER_meth_free(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\evp\\cmeth_lib.c",0x28);
  return;
}

// EVP_CIPHER_meth_new @ 14f764220

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_CIPHER_meth_new(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x58,"crypto\\evp\\cmeth_lib.c",0x12);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
  }
  return;
}

// EVP_CIPHER_meth_set_do_cipher @ 14f7642a0

undefined8 EVP_CIPHER_meth_set_do_cipher(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return 1;
}

// EVP_CIPHER_meth_set_flags @ 14f7642b0

undefined8 EVP_CIPHER_meth_set_flags(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return 1;
}

// EVP_CIPHER_meth_set_impl_ctx_size @ 14f7642d0

undefined8 EVP_CIPHER_meth_set_impl_ctx_size(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return 1;
}

// EVP_CIPHER_meth_set_init @ 14f7642e0

undefined8 EVP_CIPHER_meth_set_init(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return 1;
}

// EVP_CIPHER_meth_set_iv_length @ 14f7642f0

undefined8 EVP_CIPHER_meth_set_iv_length(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return 1;
}

